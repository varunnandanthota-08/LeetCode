// Last updated: 10/12/2026, 7:15:14 PM
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