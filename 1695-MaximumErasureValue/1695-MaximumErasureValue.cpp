// Last updated: 10/12/2026, 7:18:29 PM
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int maxv=INT_MIN,curr=0;
        int s=0,e=0;
        map<int,int>mp;
        while(s<nums.size()&&e<nums.size()){
            mp[nums[e]]++;
            curr+=nums[e];
            while(mp.size()!=(e-s+1)){
                curr-=nums[s];
                mp[nums[s]]--;
                if(mp[nums[s]]==0){
                    mp.erase(nums[s]);
                }
                s++;
            }
            e++;
            maxv=max(maxv,curr);
        }
        return maxv;
    }
};