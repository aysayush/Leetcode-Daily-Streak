class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>v;
        
    int x= lower_bound(nums.begin(), nums.end(), target)-nums.begin();
    int y= upper_bound(nums.begin(), nums.end(), target)-nums.begin();    
        if(nums.size()>0 && x<nums.size() && (y-1)<nums.size()) {
        if(nums[x]==target && nums[y-1]==target) {  
             v.push_back(x);
             v.push_back(y-1);  }
          else {
             v.push_back(-1);
             v.push_back(-1);  }
        }   
        
      else {
             v.push_back(-1);
             v.push_back(-1);  }
        
          return v;
        
    }
};