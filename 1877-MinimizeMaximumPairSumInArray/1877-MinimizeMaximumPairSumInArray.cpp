// Last updated: 10/12/2026, 7:17:42 PM
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0;
        int r=nums.size()-1;
        int sum=0;
        while(l<r){
            int res=nums[l]+nums[r];
            sum=max(sum,res);
            l++;
            r--;
        }
        return sum;
    }
};