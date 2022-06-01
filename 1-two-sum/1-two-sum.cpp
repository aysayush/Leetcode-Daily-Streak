class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          
        vector<int>vec; int n= nums.size(); 
        
        vector<int>v(n);
        
        for(int i=0;i<n;++i)
              v[i]= nums[i]; 
              
        sort(nums.begin(), nums.end());  int x;
        
     // Two pointer algo
        
    //  represents first pointer
        int i = 0; 

	// represents second pointer 
	int j = n - 1; 

	while (i < j) { 

		// If we find a pair 
		if (nums[i] + nums[j] == target) {
			     x= nums[i];
                  break; } 

		else if (nums[i] + nums[j] < target) 
			++i; 

		else
			--j; 
	} 
           //  cout<<x<<' ' ;
                j=n;
        
            for(i=0;i<n;++i)  {
                
                 if(v[i]==x) {
                    vec.push_back(i);
                      j= i; 
                     break; }  } 
                
              for(i=0;i<n;++i)  {
                if(i!=j && v[i]+x==target) {
                      vec.push_back(i);
                          break; }
            }
                 
    return vec; }
    
};