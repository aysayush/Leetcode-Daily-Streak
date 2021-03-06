class Solution {
public:
    
    // AYUSH 
    
    int scheduleCourse(vector<vector<int>>& courses) {
        if(courses.size() <= 0) return 0;
        sort(courses.begin(), courses.end(), [](const vector<int>& a, vector<int>& b)     {
            return a[1] < b[1];
        } ); 
        
    // comprator function for sorting the courses array on the basis                    of increasing order of their lastTime (u may use any other suitable function). 
        
        priority_queue<int> q;
        int sum = 0;
        for(auto i : courses) {
            sum += i[0];
            q.push(i[0]);
            if(sum > i[1]) {
                sum -= q.top();
                q.pop();
            }
        }
        return q.size();
    }
};