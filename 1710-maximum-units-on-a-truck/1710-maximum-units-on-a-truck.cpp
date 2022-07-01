class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
          vector<pair<int, int>>v;  int sum=0;
        
          for(int i=0;i<boxTypes.size();++i)
                v.push_back({(-1)*(boxTypes[i][1]), boxTypes[i][0]});
        
            sort(v.begin(), v.end());
        
        for(int i=0;i<v.size();++i) {
            
             if(v[i].second<truckSize)
                   sum+= abs(v[i].first)*v[i].second;
        
               else { sum+= abs(v[i].first)*truckSize;
                       break; }
        
                 truckSize-= v[i].second;  }
        
        return sum; 
                      
              
    }
};