// Last updated: 10/27/2026, 8:41:15 PM
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int &x:nums){
            x=abs(x);
        }
        sort(nums.rbegin(),nums.rend());
        long long n=nums.size();
        long long s1=0,s2=0;
        if(n&1){
            for(long long i=0;i<(n+1)/2;i++){
                s1+=1LL*(nums[i]*nums[i]);
            }
            for(long long i=(n+1)/2;i<n;i++){
                s2+=1LL*(nums[i]*nums[i]);
            }
        }
        else{
            for(long long i=0;i<n/2;i++){
                s1+=1LL*(nums[i]*nums[i]);
            }
            for(long long i=n/2;i<n;i++){
                s2+=1LL*(nums[i]*nums[i]);
            }
        }
        return s1-s2;
    }
};