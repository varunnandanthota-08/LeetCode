// Last updated: 8/2/2026, 12:54:30 AM
class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n=nums.size();
        int minv=INT_MAX;
        map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        for(auto &it:mp){
            vector<int>&v=it.second;
            if(v.size()>=3){
                for(int i=0;i<v.size()-2;i++){
                    int curr=2*(v[i+2]-v[i]);
                    minv=min(minv,curr);
                }
            }
        }
        if(minv==INT_MAX)return -1;
        return minv;
    }
};