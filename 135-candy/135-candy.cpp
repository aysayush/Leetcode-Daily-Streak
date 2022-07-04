class Solution {
public:
    
       // AYUSH 
     int candy(vector<int>& ratings) {
        int res = 0, n= ratings.size();
        
        // it take care about student get more candies than its left neighbor
        vector<int>L_candy(n,1);
        for(int i=1; i<n; i++){
            if(ratings[i]>ratings[i-1] )
                L_candy[i]=L_candy[i-1]+1;
        }
        
        // it take care about student get more candies than its right neighbor
        vector<int> R_candy(n,1);
        for(int i=n-2; i>=0; i--){
            if(ratings[i]>ratings[i+1] )
                R_candy[i] = R_candy[i+1]+1;
        }
        
    // here we take the maximum value which satisfy both the left and the right neighbor condition .
         
        for(int i=0; i<n; i++){
            res += max(L_candy[i], R_candy[i]);
        }
         
        return res;
    }
};