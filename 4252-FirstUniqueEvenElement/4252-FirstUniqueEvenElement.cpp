// Last updated: 8/2/2026, 12:53:36 AM
class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        int ans=-1;
        for(int x:nums){
            if(mp[x]==1){
                if(x%2==0){
                    ans=x;
                    break;
                }
            }
        }
        return ans;
    }
};