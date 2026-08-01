// Last updated: 8/2/2026, 12:54:16 AM
class Solution {
public:
    long long ops(vector<int>&nums,long long k){
        long long c=0;
        for(int x:nums){
            c+=(x+k-1)/k;
        }
        return c;
    }
    int minimumK(vector<int>& nums) {
        long long l=1,h=1e6;
        int ans=h;
        while(l<=h){
            long long mid=(l+(h-l)/2);
            if(ops(nums,mid)<=mid*mid){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};