// Last updated: 8/2/2026, 1:00:13 AM
class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps=1;
        int curr=capacity;
        for(int i=0;i<plants.size()-1;i++){
            steps+=1;
            curr-=plants[i];
            if(plants[i+1]>curr){
                curr=capacity;
                steps+=(i+1)*2;
            }
        }
        return steps;
    }
};