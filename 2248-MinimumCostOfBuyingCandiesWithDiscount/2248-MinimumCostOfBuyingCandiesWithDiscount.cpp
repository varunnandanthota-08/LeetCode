// Last updated: 8/2/2026, 12:57:35 AM
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
