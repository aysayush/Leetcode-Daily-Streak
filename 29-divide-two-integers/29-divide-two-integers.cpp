class Solution {
public:
    int divide(int dividend, int divisor) {
        
          int ct=0,j=0;
        
        if(divisor== 1)
            return dividend;
        
        else if(divisor== -1) {
            
               if(dividend== -2147483648)
                    return 2147483647;
            
               if(dividend<1)
                return abs(dividend);
        
                  return -dividend; } 
 
        int ans= dividend/divisor; 
        
         return ans; 
        
    }
};