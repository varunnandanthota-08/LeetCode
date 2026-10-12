// Last updated: 10/12/2026, 7:08:29 PM
class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int minv=INT_MAX;
        int idx=-1;
        for(int i=0;i<drones.size();i++){
            int x=drones[i][0];
            int y=drones[i][1];
            int r=drones[i][2];
            int d=abs(target[0]-x)+abs(target[1]-y);
            if(d<=r){
                if(d==minv){
                    if(i<=idx){
                        idx=i;
                    }
                }
                else if(d<minv){
                    minv=d;
                    idx=i;
                }
            }
        }
        return idx;
    }
};