class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
          unordered_map<int, int>mp;
            int flag=0;
        
         sort(nums.begin(), nums.end());
        
         for(int i=0;i<nums.size();++i) {
               mp[nums[i]]++;
            if(mp[nums[i]]>1) {
                     flag=1;
                      break; } }
        
        return flag>0;
    }
};