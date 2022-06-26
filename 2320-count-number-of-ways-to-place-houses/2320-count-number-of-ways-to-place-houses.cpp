class Solution {
public:
    long long countHousePlacements(long long n) {
        
         long long mod= 1e9+7;
        
            if(n==1)
                 return 4;
        
            else if(n==2)
                 return 9;
        
            long long fib[n+1]; fib[0]=1,fib[1]=2;
        
          for(int i=2;i<=n;++i)
                  fib[i]= (fib[i-1]%mod + fib[i-2]%mod)%mod ; 
        
              long long z= ((fib[n]%mod)*(fib[n]%mod))%mod; 
                
             return z;
        
         return 0;
    }
    
};