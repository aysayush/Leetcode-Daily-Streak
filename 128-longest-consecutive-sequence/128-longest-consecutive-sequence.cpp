class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());  int mx=1,ct=1;
        
        int n= nums.size();  
        
        if(n==0)
            return 0; 
        
    for(int i=0;i<n-1;++i) {  
        
          if(nums[i+1]-nums[i]== 0) {
                mx= max(ct, mx);
                  continue; } 
        
        else if(nums[i+1]-nums[i]== 1)
                ++ct; 
        
            else {  mx= max(ct, mx);
                      ct= 1;          }
        
              if(i==n-2)
                  mx= max(ct, mx); 
                      
        }
           
          return mx;
                
        
        
    }
};