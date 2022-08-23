class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int n = grid.size(); // row--
        int m = grid[0].size(); // col---
        
        int peri = 0;
    
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1){
                    // check in all directions ---
                    
                    // left---
                    if(j-1<0 || grid[i][j-1] == 0){ peri++; }
                    
                    //Right---
                    if(j+1>=m || grid[i][j+1] == 0){ peri++; }
                    
                    //Up---
                    if(i+1>=n || grid[i+1][j] == 0){ peri++; }
                    
                    //Down---
                    if(i-1<0 || grid[i-1][j] == 0){ peri++; }
                }
            }
        }
        return peri;
    }
};