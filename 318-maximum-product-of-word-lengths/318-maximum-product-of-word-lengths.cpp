class Solution {
    
     bool check(string s1, string s2) {
          for(char ch='a';ch<='z';++ch)  
                 if(s1.find(ch)!= -1 && s2.find(ch)!= -1)
                        return true;
         
                   return false;  }        
         
         
public:
         int maxProduct(vector<string>& words) {
        
        int mx=0;
        
        for(int i=0;i<words.size()-1;++i) {
              for(int j=i+1;j<words.size();++j) { 
                  
                    if(!check(words[i], words[j])) { 
                           int z= (words[i].size())*(words[j].size());
                             mx= max(mx, z); }  
              }  } 
                    
              
         return mx;    
               
            
    }
};