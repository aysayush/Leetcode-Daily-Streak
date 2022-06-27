class Solution {
public:
    int minPartitions(string n) {
        
        sort(n.begin(), n.end());
        
         int z= int(n[n.size()-1])-'0';
        
           return z;
    }
};