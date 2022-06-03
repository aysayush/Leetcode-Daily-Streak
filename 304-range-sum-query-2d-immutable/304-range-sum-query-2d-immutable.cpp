class NumMatrix {
public:
   
    vector<vector<int>> sum1;
    NumMatrix(vector<vector<int>>& matrix) {  // void function will return null.
        
        int x = matrix.size(), y = matrix[0].size();
        sum1 = vector<vector<int>>(x + 1, vector<int>(y + 1)); 
        
         // sum1 is a vector of vector with inner vector of length y+1 and outer vector             is of length x+1 initialised with zero.
        
        for (int i = 1; i <= x; ++i) {
            for (int j = 1; j <= y; ++j) {
                // prefix sum
                sum1[i][j] = sum1[i - 1][j] + sum1[i][j - 1] - sum1[i - 1][j - 1] +                       matrix[i - 1][j - 1];
            }
        }
    }
    
    int sumRegion(int r1, int c1, int r2, int c2) {
		
        r1++; c1++; r2++; c2++;  
    // formula (observation)
        
 int ans= sum1[r2][c2] - sum1[r2][c1 - 1] - sum1[r1 - 1][c2] + sum1[r1 - 1][c1 - 1];
        
    return ans; }
    
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */