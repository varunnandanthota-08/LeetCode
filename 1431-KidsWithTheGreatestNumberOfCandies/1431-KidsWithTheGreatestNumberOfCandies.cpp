// Last updated: 10/12/2026, 7:19:39 PM
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxv=*max_element(candies.begin(),candies.end());
        vector<bool>ans;
        for(int x:candies){
            if(x+extraCandies>=maxv){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};
//2 3 5 1 3
//5 3 5 1 3=t
//2 6 5 1 3=t
//2 3 8 1 3=t
//2 3 5 4 3=f
//2 3 5 1 6=t