// Last updated: 10/12/2026, 7:14:27 PM
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>temp;
        map<int,int>mp;
        int maxv=INT_MIN;
        int l=0,r=0;
        while(l<n&&r<n){
            mp[nums[r]]++;
            while(mp[nums[r]]>k){
                if(mp[nums[l]]==0)mp.erase(nums[l]);
                mp[nums[l]]--;
                l++;
            }
            maxv=max(maxv,r-l+1);
            r++;
        }
        return maxv;
    }
    // bool isValid(int k,map<int,int>mp){
    //     for(auto &it:mp){
    //         if(it.second>k)return false;
    //     }
    //     return true;
    // }
};