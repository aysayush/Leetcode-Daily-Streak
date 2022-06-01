class Solution {
public:
   
     bool isPalindrome(string S)
  {
    string P = S;
        
    reverse(P.begin(), P.end());
 
    if (S == P) { 
        return true;
    }
    
    else {
       
        return false;
    }
}
    
    int countSubstrings(string s) {
        
        int ct=0;
        
       for(int i=0;i<s.size();++i) {
                string str="";
           
              for(int j=i;j<s.size();++j) {
                        str+= s[j];
                      if(s[i]==s[j]) { 
                     if(isPalindrome(str))
                              ++ct; }  } 
           
       }
                  return ct;
                  
    }
};