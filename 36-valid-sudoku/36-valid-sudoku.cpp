class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
          int flag=1;
        
      for(int i=0;i<9;++i) {
             if(flag==0)
                  break; 
           unordered_map<char, int>m;
          
          for(int j=0;j<9;++j) {
                 if(board[i][j]!= '.')
                   m[board[i][j]]++;
              
                  if(m[board[i][j]]>1) {
                        flag=0;
                         break; } }
          
          } 
        
            if(flag==1) {
                
              for(int i=0;i<9;++i) {
             if(flag==0)
                  break; 
           unordered_map<char, int>m;
          
          for(int j=0;j<9;++j) {
                 if(board[j][i]!= '.')
                    m[board[j][i]]++;
              
                  if(m[board[j][i]]>1) {
                        flag=0;
                         break; } }
          } }
                
        //1
              if(flag==1) {
            //  cout<<"a"<<' ';
                  
           unordered_map<char, int>m;
              for(int i=0;i<3;++i) {
                 if(flag==0)
                     break; 
          
          for(int j=0;j<3;++j) {
                 if(board[i][j]!= '.')
                   m[board[i][j]]++;
                  if(m[board[i][j]]>1) {
                        flag=0;
                         break; } }
          } }  
              //2
                  
           if(flag==1) {
          
             unordered_map<char, int>m;
              for(int i=0;i<3;++i) {
                 if(flag==0)
                     break; 
          
          for(int j=3;j<6;++j) {
                 if(board[i][j]!= '.')
                   m[board[i][j]]++;
                  if(m[board[i][j]]>1) {
                        flag=0;
                         break; } }
          } }
                  //3
            
                if(flag==1) {
          
             unordered_map<char, int>m;
              for(int i=0;i<3;++i) {
                 if(flag==0)
                     break; 
          
          for(int j=6;j<9;++j) {
                 if(board[i][j]!= '.')
                   m[board[i][j]]++;
                  if(m[board[i][j]]>1) {
                        flag=0;
                         break; } }
          } } 
              // 4
                     if(flag==1) {
          
             unordered_map<char, int>m;
              for(int i=3;i<6;++i) {
                 if(flag==0)
                     break; 
          
          for(int j=0;j<3;++j) {
                 if(board[i][j]!= '.')
                   m[board[i][j]]++;
                  if(m[board[i][j]]>1) {
                        flag=0;
                         break; } }
          } } 
              // 5
                          if(flag==1) {
          
             unordered_map<char, int>m;
              for(int i=3;i<6;++i) {
                 if(flag==0)
                     break; 
          
          for(int j=3;j<6;++j) {
                 if(board[i][j]!= '.')
                   m[board[i][j]]++;
                  if(m[board[i][j]]>1) {
                        flag=0;
                         break; } }
          } }  
              // 6
    
             if(flag==1) {
          
             unordered_map<char, int>m;
              for(int i=3;i<6;++i) {
                 if(flag==0)
                     break; 
          
          for(int j=6;j<9;++j) {
                 if(board[i][j]!= '.')
                   m[board[i][j]]++;
                  if(m[board[i][j]]>1) {
                        flag=0;
                         break; } }
          } }  
            
            // 7
                  if(flag==1) {
          
             unordered_map<char, int>m;
              for(int i=6;i<9;++i) {
                 if(flag==0)
                     break; 
          
          for(int j=0;j<3;++j) {
                 if(board[i][j]!= '.')
                   m[board[i][j]]++;
                  if(m[board[i][j]]>1) {
                        flag=0;
                         break; } }
          }  } 
                 
              // 8
                   if(flag==1) {
          
             unordered_map<char, int>m;
              for(int i=6;i<9;++i) {
                 if(flag==0)
                     break; 
          
          for(int j=3;j<6;++j) {
                 if(board[i][j]!= '.')
                   m[board[i][j]]++;
                  if(m[board[i][j]]>1) {
                        flag=0;
                         break; } }
          }  }  
               // 9
                   if(flag==1) {
          
             unordered_map<char, int>m;
              for(int i=6;i<9;++i) {
                 if(flag==0)
                     break; 
          
          for(int j=6;j<9;++j) {
                 if(board[i][j]!= '.')
                   m[board[i][j]]++;
                  if(m[board[i][j]]>1) {
                        flag=0;
                         break; } }
          }  }  
                                             
        
    return flag>0;
       
    
    }
};