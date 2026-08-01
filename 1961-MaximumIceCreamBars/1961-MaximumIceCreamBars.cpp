// Last updated: 8/2/2026, 12:58:32 AM
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int ans=0,cost=0;
        for(int i=0;i<costs.size();i++){
            cost+=costs[i];
            if(cost>coins){
                break;
            }
            ans++;
        }
        return ans;
    }
};
//1 1 2 3 4 
//1 1 2 3 5 6
