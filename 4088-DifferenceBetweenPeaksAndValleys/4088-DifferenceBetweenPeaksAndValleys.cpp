// Last updated: 10/27/2026, 8:39:25 PM
class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int n=nums.size();
        int a=0,b=0;
        for(int i=1;i<n-1;i++){
            if(nums[i]>nums[i-1]&&nums[i]>nums[i+1])a+=nums[i];
        }
        for(int i=1;i<n-1;i++){
            if(nums[i]<nums[i-1]&&nums[i]<nums[i+1])b+=nums[i];
        }
        return a-b;
    }
};