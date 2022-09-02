class Solution {
public:
    int dp[10007];
    int func(int amount, vector<int>& coins) {
       if(amount== 0) return 0;
       if(dp[amount]!= -1) return dp[amount];
    
       int ans= INT_MAX;
      for(auto coin: coins) {
           if(amount-coin>=0)
             ans= min(ans+0LL, func(amount-coin, coins)+1LL);
      }
         return dp[amount]= ans;
    } 
               
               
    int coinChange(vector<int>& coins, int amount) {
        memset(dp, -1, sizeof(dp));
         int ans= func(amount, coins); 
          
        if(ans== INT_MAX)
             return -1;
        
         else return ans;
    }
};