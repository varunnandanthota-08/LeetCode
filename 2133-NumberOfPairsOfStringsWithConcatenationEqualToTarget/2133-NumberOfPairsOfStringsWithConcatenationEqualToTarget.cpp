// Last updated: 8/2/2026, 12:57:57 AM
class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        map<string,int>mp;
        int ans=0;
        for(string s:nums){
            mp[s]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            string prefix=nums[i];
            if(target.substr(0,prefix.size())!=prefix){
                continue;
            }
            string suffix=target.substr(prefix.size());
            if(mp.find(suffix)!=mp.end()){
                ans+=mp[suffix];
                if(prefix==suffix){
                    ans--;
                }
            }
        }
        return ans;
    }
};