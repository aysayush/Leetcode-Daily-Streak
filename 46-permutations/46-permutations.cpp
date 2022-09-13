class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>>vec;  vector<int>v;
        
        sort(nums.begin(), nums.end());
        
         for(int i=0;i<nums.size();++i)
                   v.push_back(nums[i]);
        
                vec.push_back(v);
        
         while (next_permutation(nums.begin(), nums.end())) {
             
              v.clear(); 
             
             for(int i=0;i<nums.size();++i)
                   v.push_back(nums[i]);
             
                   vec.push_back(v);
             
         }
                    
                return vec;     
    }
};