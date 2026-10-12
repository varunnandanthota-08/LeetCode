// Last updated: 10/12/2026, 7:12:00 PM
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        map<int,int>mp;
        int minv=INT_MAX,maxv=INT_MIN;
        for(int x:nums){
            mp[x]++;
            minv=min(minv,x);
            maxv=max(maxv,x);
        }
        for(int i=minv;i<=maxv;i++){
            if(mp.find(i)==mp.end())ans.push_back(i);
        }
        return ans;
    }
};