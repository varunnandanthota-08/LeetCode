// Last updated: 10/12/2026, 7:12:13 PM
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int x:nums)mp[x]++;
        int num=k;
        int cnt=2;
        while(true){
            if(mp[num]==0)return num;
            num=k*cnt;
            cnt++;
        }
        return -1;
    }
};