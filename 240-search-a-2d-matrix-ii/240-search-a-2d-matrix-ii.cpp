class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         
        
          for(int i=0;i<matrix.size();++i) {
                int lo=0, hi=matrix[i].size()-1;
              
                   while((hi-lo)>=0) {
                       
                       int mid= (hi+lo)/2;
                       
                         if(matrix[i][mid]>target)
                               hi= mid-1;
                       
                         else if(matrix[i][mid]<target)
                               lo= mid+1;
                       
                          else if(matrix[i][mid]==target)
                                return true;   }
              
          }
                   return false;  
        
    }
    
}; 