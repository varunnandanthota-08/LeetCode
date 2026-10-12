// Last updated: 10/12/2026, 7:08:35 PM
class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long maxv=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int v1=nums[i];
                int v2=nums[j];
                long long gcd=__gcd(v1,v2);
                long long ans=(long long)(v1/gcd)*(v2/gcd);
                maxv=max(maxv,ans);
            }
        }
        return maxv;
    }
};