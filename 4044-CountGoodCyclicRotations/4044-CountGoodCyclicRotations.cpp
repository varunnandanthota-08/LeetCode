// Last updated: 10/27/2026, 8:39:39 PM
class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int ans=0;
        long long n=nums.size();
        long long firstSum=0,lastSum=0;
        for(long long i=0;i<n/2;i++){
            firstSum+=nums[i];
        }
        for(long long i=n/2;i<n;i++){
            lastSum+=nums[i];
        }
        long long l=0,r=n/2;
        while(l<n){
            if(r==n){
                r=0;
            }
            if(firstSum>lastSum)ans++;
            firstSum-=nums[l];
            firstSum+=nums[r];
            lastSum-=nums[r];
            lastSum+=nums[l];
            l++;
            r++;
        }
        return ans;
    }
};