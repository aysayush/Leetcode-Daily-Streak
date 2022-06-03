class NumArray {
public:
      vector<int>sum;
    
    NumArray(vector<int>& nums) {
        int n= nums.size();
         sum= vector<int>(n+1, 0); 
        
      for(int i=1;i<=n;++i)
          sum[i]= sum[i-1]+nums[i-1];  }  
    
    int sumRange(int left, int right) {
           left++, right++;
        
         int ans= sum[right]-sum[left-1];
        
        return ans;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */