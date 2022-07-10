class Solution {
public:
    // AYUSH
    
    int minCostClimbingStairs(vector<int>& cost) {
        
         int n = cost.size();
    for(int i=2;i<n;i++){
        cost[i]+= min(cost[i-1],cost[i-2]); //In Question it says that it can take either 1 step or 2 step
    }
    return min(cost[n-1],cost[n-2]);
    }
};