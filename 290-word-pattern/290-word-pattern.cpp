class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        unordered_map<char, string>mp;
        unordered_map<string ,int>m;
          char z=' '; string str="";  int j= -1;
           int flag= 1;
        
      for(int i=0;i<s.size();++i) {
          
            if(s[i]!=z)
            str+= s[i];
            
            if(s[i]==z || i==s.size()-1) {  
                    ++j;
               
                if(m[str]>0 || mp[pattern[j]]!="" || j==pattern.size()-1) {   
  if ((mp[pattern[j]]!= str && mp[pattern[j]]!="") || (mp[pattern[j]]=="" && m[str]>0))
                  
                  {   flag= 0;
                        break; }  }    
                    
                   else { m[str]++;
                          mp[pattern[j]]= str; }       
          
      str="";  }
      
} 
          
    if((flag==1 || pattern.size()==1) && j==pattern.size()-1)      
         return true;
        
         else return false; 
             
    }
};