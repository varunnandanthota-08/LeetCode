// Last updated: 8/2/2026, 12:56:39 AM
class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxv=0;
        for(int x:nums){
            maxv=max(maxv,x);
        }
        int sum=0;
        for(int i=1;i<=k;i++){
            sum+=maxv;
            maxv++;
        }
        return sum;
    }
};