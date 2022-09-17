class Solution {
public:
        int dp[202][20002];
    
      bool func(int idx, int sum, vector<int> &nums) { 
          
            if(sum==0) return true;
          
            else if(idx<0) return false;
          
            if(dp[idx][sum]!= -1)  return dp[idx][sum];
          
          // not consider the ith index
          
         int ispossible = func(idx-1, sum, nums);     // or
          
          // consider the ith index
           if(sum-nums[idx]>=0)
        ispossible |= func(idx-1, sum-nums[idx], nums);
          
            return dp[idx][sum]= ispossible;
      }        
          
          
   bool canPartition(vector<int>& nums) {
       
        memset(dp, -1, sizeof(dp));
        
        int z= accumulate(nums.begin(), nums.end(), 0);
       
          if(z%2!= 0)   // odd
            return false;  
        
          z/= 2;
       
          return func(nums.size()-1, z, nums);
                
    }
};