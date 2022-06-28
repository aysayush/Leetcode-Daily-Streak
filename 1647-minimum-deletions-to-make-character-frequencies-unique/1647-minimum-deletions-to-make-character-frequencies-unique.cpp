class Solution {
public:
    int minDeletions(string s) {
        
          sort(s.begin(), s.end());  int x=0,ct=0,f=0;
        
          map<int, int>m;
        
        for(int i=0;i<s.size();++i) {
                    ++x;  f=0;
            
     if(i<s.size()-1&&s[i]!=s[i+1])  
                     m[x]++,f=1;
        
     else if(i==s.size()-1&&s[i]==s[i+1])
                 m[x]++, f=1;
        
     else if(i==s.size()-1&&s[i]!=s[i+1])
                 m[x]++, f=1;     
            
             if(m[x]>1 && f==1) {
                 
                for(int j=x-1;j>=0;--j) {
                    
                      if(m[j]==0 && j>0) {
                        m[j]++; ct+=x-j; break;  }
                   
                  else if(j==0)
                      ct+= x;    }  
               }
            
     if(f==1)  x= 0;   } 
        
        return ct; 
            
                       
    }
};