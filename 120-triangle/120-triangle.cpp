class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
           int n = triangle.size();
		vector<int>nxt(n);
		for(int i = n-1; i >= 0; i--) {
			vector<int>cur(n);
			for(int j = i; j >= 0; j--) {
				if(i == n-1)
					cur[j] = triangle[i][j];
				else {
					int up = triangle[i][j] + nxt[j];
					int up_left = triangle[i][j] + nxt[j+1];
					cur[j] = min(up, up_left);
				}
			}
			nxt = cur;
		}
		return nxt[0];
        
    }
};