class Solution {
public:
    
    // Ayush 
    
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int n= numbers.size();  vector<int>v;
        int i=0,j=n-1;
        
        while(i<j) {   // two pointer
            
            if(numbers[i]+numbers[j]== target) {
                 v.push_back(i+1),
                 v.push_back(j+1);
                 break; }
            
         else if(numbers[i]+numbers[j]<target)
                  ++i;
            
         else --j; 
            
        }
        
    return v; }
    
};