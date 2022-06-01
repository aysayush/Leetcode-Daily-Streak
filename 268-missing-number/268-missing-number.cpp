class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
           int z;
        
        for(int i=0;i<nums.size();++i) {
            
           if(nums[i]!=i)
              { z= i;
                   break; }
        
                 if(i+1== nums.size())
                     z= nums.size();   }
        
   return z; }
    
};