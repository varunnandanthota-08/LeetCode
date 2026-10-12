// Last updated: 10/12/2026, 7:10:39 PM
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