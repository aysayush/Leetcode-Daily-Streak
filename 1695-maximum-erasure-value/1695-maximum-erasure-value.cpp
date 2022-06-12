class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        // AYUSH
       
        int sum=0, res=0;
		
		//set to store the elements
        unordered_set<int> s;
        
        int i=0,j=0;
        while(j<nums.size()) {
            while(s.count(nums[j])>0) {
				//Removing the ith element untill we reach the repeating element
                s.erase(nums[i]);
                sum-=nums[i];
                i++;
            }
			//Add the current element to set and curr_sum value
              sum+=nums[j];
            s.insert(nums[j++]);  
			
			//res variable to keep track of largest curr_sum encountered till now...
            res = max(res, sum);
        }
        
        return res;
        
    }
};