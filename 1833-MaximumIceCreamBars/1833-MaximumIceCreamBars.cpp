// Last updated: 10/12/2026, 7:17:55 PM
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
