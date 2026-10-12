// Last updated: 10/12/2026, 7:10:38 PM
class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        map<int,int>mp;
        for(int x:nums1){
            mp[x]++;
        }
        for(int x:nums2){
            mp[x]--;
        }
        int cost=0;
        for(auto &it:mp){
            if(it.second!=0){
                if(it.second%2==0&&it.second>0){
                    cost+=abs(it.second/2);
                    continue;
                }
                else if(it.second&1){
                    return -1;
                }
            }
        }
        return cost;
    }
};