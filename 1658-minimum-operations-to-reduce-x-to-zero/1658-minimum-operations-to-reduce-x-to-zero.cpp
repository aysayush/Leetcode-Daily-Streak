class Solution {
public:
    
    // AYUSH
    
	int minOperations(vector<int>& nums, int x) {
		unordered_map<int, int> m;
		int n = nums.size();
		int ans = 1e9;

		for(int i = 0, prefixSum = 0; i < n; i++) {
			prefixSum += nums[i];
			m[prefixSum] = i + 1;
			if (prefixSum == x)
				ans = min(ans, i + 1);
		}

		for(int i = n - 1, suffixSum = 0; i >= 0; i--) {
			suffixSum += nums[i];
			if(suffixSum == x)
				ans = min(ans, n - i);
			if(m[x - suffixSum] > 0 && i + 1 > m[x - suffixSum]) 
				ans = min(ans, n - i + m[x - suffixSum]); 
		}

		return ans == 1e9 ? -1 : ans;
	}
};
