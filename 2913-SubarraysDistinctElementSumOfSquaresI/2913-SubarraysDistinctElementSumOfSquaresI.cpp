// Last updated: 10/27/2026, 8:42:10 PM
class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            map<int,int>mp;
            for(int j=i;j<n;j++){
                mp[nums[j]]++;
                int l=mp.size();
                ans+=(l*l);
            }
        }
        return ans;
    }
};