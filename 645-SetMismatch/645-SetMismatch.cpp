// Last updated: 10/12/2026, 7:23:08 PM
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int ans1=0,ans2=0;
        set<int>st;
        for(int x:nums){
            st.insert(x);
            ans1^=x;
        }
        for(int x:st){
            ans1^=x;
            ans2^=x;
        }
        for(int i=1;i<=nums.size();i++){
            ans2^=i;
        }
        return {ans1,ans2};
    }
};
