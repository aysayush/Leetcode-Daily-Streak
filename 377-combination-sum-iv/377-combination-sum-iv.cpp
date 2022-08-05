class Solution {
public:
    vector<int> dp;
    int help(vector<int> &nums, int t, int n){
		// base case: if target is 0, we found combination then return 1
        if(t==0) return 1;
        int ans=0; 
		
		// memoisation
        if(dp[t]!=-1) return dp[t];
		
		// picking up each elements less than target and 
		// calling this function recursively
        
        for(int i=0; i<n; i++){
            if(nums[i]<=t){
                ans+=help(nums, t-nums[i], n);
            }
        }
        return dp[t]= ans;
    }
    
    int combinationSum4(vector<int>& nums, int target) {
        int n=nums.size();
		// resizing the dp array to store values from 0 to target
        dp.resize(target+1,-1);
        return help(nums, target, n);
        
    }
};