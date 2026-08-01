// Last updated: 8/2/2026, 1:03:55 AM
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        set<int>st;
        for(int x:nums){
            st.insert(x);
        }
        vector<int>temp;
        for(int x:st){
            temp.push_back(x);
        }
        int cnt=1,maxv=1;
        for(int i=1;i<temp.size();i++){
            if(temp[i]-temp[i-1]==1){
                cnt++;
            }
            else{
                cnt=1;
            }
            maxv=max(maxv,cnt);
        }
        return maxv;
    }
};