// Last updated: 8/2/2026, 1:02:06 AM
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>st;
        for(int x:nums)st.insert(x);
        vector<int>temp;
        for(auto &x:st)temp.push_back(x);
        sort(temp.begin(),temp.end(),greater<int>());
        if(temp.size()<=2)return temp[0];
        return temp[2];
    }
};