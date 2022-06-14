class Solution {
public:
    int minDistance(string word1, string word2) {
        
         int n = word1.size();
        int m = word2.size();
        vector<vector<int>> v(n,vector<int> (m,0));
        if(word1[0]==word2[0])v[0][0]= 1;
        for(int i =1;i<n;i++){
		     v[i][0]=v[i-1][0]; 
           if(word1[i]==word2[0])
               v[i][0]=1;   
        }
        
        for(int i=1;i<m;i++){
		 v[0][i]=v[0][i-1]; 
           if(word1[0]==word2[i])
               v[0][i]=1;
        }
        
        for(int i =1;i<n;i++){
            for(int j = 1;j<m;j++){
                if(word1[i]==word2[j])
            v[i][j] = max({1+v[i-1][j-1],v[i-1][j],v[i][j-1]});
                
                else{
                    v[i][j] = max(v[i-1][j],v[i][j-1]);
                }
        } }
                // we got the length of LCS in vec[n-1][m-1]
        
        return n+m-(2*v[n-1][m-1]);       
        //  delete operations will be n-lcs + m-lcs
        
    }
};