// Last updated: 10/12/2026, 7:13:38 PM
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        vector<int>arr(2);
        int k=0;
        for(auto &it:mp){
            if(it.second==2){
                arr[k++]=it.first;
            }
        }
        return arr;
    }
};