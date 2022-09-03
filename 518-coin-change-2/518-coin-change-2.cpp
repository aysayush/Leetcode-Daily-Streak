class Solution {    // combinatorics  2d DP (duplicates)
public:
      int dp[310][5010];
    
    int func(int idx, int amount, vector<int>& coins) {
        
        if(amount== 0) return 1;  // none selected
        if(idx< 0) return 0;   
// now you can't get base(termination) condition in recursion call.
        
        if(dp[idx][amount]!= -1) return dp[idx][amount];
        
        int ways= 0;
for(int coin_amount=0; coin_amount<=amount; coin_amount+= coins[idx])
        ways+= func(idx-1, amount-coin_amount, coins);
 
        return dp[idx][amount]= ways;
    }
    
     int change(int amount, vector<int>& coins) {
        memset(dp, -1, sizeof(dp));
         
         return func(coins.size()-1, amount, coins); 
    }
};