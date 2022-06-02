class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
         vector<vector<int>>vec; vector<int>v;
          
        int j=0,k=0;
        
        int n= matrix[0].size();
        
        for(int i=0;i<matrix.size();++i) {
                ++k;
              v.push_back(matrix[i][j]);
              
              if(k== matrix.size()) {
                 vec.push_back(v);
                  v.clear();
                  k= 0;
                  i= -1;  
                  ++j; }
            
            if(vec.size()==n)
                break;
        }         
            
        
    return vec; }
};