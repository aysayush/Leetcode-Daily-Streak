class Solution {
    
    // AYUSH 
    
    bool ispalindrome(string s) {
        
        string p= s;
        reverse(p.begin(), p.end());
        
          if(p==s)
              return true;
        
          else return false;
    }
    
public:
    int removePalindromeSub(string s) {
        
        if(ispalindrome(s))    // subsequence!= substring
            return 1;
        
        else return 2;
        
    }   
};