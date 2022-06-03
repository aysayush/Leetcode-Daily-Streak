class NumMatrix {
public:
   
    vector<vector<int>> sum1;
    NumMatrix(vector<vector<int>>& matrix) {
        
        int x = matrix.size(), y = matrix[0].size();
        sum1 = vector<vector<int>>(x + 1, vector<int>(y + 1)); 
        
        for (int i = 1; i <= x; ++i) {
            for (int j = 1; j <= y; ++j) {
                sum1[i][j] = sum1[i - 1][j] + sum1[i][j - 1] - sum1[i - 1][j - 1] +                       matrix[i - 1][j - 1];
            }
        }
    }
    
    int sumRegion(int r1, int c1, int r2, int c2) {
		
        r1++; c1++; r2++; c2++; 
 int ans= sum1[r2][c2] - sum1[r2][c1 - 1] - sum1[r1 - 1][c2] + sum1[r1 - 1][c1 - 1];
        
    return ans; }
    
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */