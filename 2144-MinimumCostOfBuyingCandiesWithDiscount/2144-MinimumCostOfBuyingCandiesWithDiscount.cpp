// Last updated: 10/12/2026, 7:16:40 PM
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n=cost.size();
        sort(cost.begin(),cost.end());
        int c=0,i=n-1;
        int ans=0;
        while(i>=0){
            if(c==2){
                c=0;
            }
            else{
                ans+=cost[i];
                c++;
            }
            i--;
        }
        return ans;
    }
};
