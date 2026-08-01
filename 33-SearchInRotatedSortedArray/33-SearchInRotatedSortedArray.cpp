// Last updated: 8/2/2026, 1:05:22 AM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        long long l=0;
        long long r=nums.size()-1;
        int c=1;
        while(l<=r){
            long long mid=l+(r-l)/2;
            if(target==nums[mid]){
                return mid;
            }
            else if(nums[l]<=nums[mid]){
                if(target<nums[mid]&&target>=nums[l]){
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else{
                if(target>nums[mid]&&target<=nums[r]){
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }
        }
        return -1;
    }
};