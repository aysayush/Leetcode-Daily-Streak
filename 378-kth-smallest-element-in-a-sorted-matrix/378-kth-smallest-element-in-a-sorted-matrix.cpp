class Solution {     // mx -> matrix
public:
    int kthSmallest(vector<vector<int>>& mx, int k) {
        
        int i,j,n= mx.size();
        
        priority_queue<int, vector<int>,greater<int>>pq;
        
        for(i=0;i<n;++i) {
        for(j=0;j<n;++j)
             pq.push(mx[i][j]);  }
        
             j=0;
        
        while(!pq.empty()) {
               ++j;
              if(j==k) {
                  int val= pq.top();
                  return val; } 
            
               pq.pop();
        } 
            
                    
                  
        return 0;  }
};