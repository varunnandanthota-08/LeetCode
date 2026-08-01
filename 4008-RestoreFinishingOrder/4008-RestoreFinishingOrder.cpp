// Last updated: 8/2/2026, 12:55:01 AM
class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>v;
        for(int i=0;i<order.size();i++){
            for(int j=0;j<friends.size();j++){
                if(order[i]==friends[j]){
                    v.push_back(order[i]);
                }
            }
        }
        return v;
    }
};