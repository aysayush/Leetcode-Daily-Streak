class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        
           sort(players.begin(), players.end());
           sort(trainers.begin(), trainers.end());
        
            int i,j,ct=0,f=1;
        
         for(i=0;i<players.size();++i) {
             
                if(trainers.size()<1)  break;
             
                 if(players[i]<=trainers[0]) { 
                        ct++;
                 trainers[i]= -1;
                  
         continue;  }  
        
        int z= lower_bound(trainers.begin(), trainers.end(), players[i])-trainers.begin();
             
             if(z<trainers.size()) {
                    ct++;
               //  trainers.erase(trainers.begin()+z);
                    trainers[z]= -1;
             } 
             
             else break;   } 
         
               
        
        return ct; 
             
                    
             
    }
};