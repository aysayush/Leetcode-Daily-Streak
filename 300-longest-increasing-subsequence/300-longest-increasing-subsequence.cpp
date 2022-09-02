class Solution {
    int dp[10000];
    
    int lis(int i, vector<int>&a ){
        if(dp[i]!= -1) return dp[i];
        int ans= 1;
        for(int j=0;j<i;++j) {
             if(a[i]>a[j])
            ans= max(ans, lis(j, a)+1);
        }   
    
        return dp[i]= ans;
}
    
public:
    int lengthOfLIS(vector<int>& nums) {
        memset(dp, -1, sizeof(dp)); 
        int res= 1;
        for(int i=0;i<nums.size();++i)
            res= max(res, lis(i, nums));
        
        return res; 
            
    }
};