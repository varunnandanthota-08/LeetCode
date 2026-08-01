// Last updated: 8/2/2026, 1:05:19 AM
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2,-1);
        int low=0, high=nums.size()-1;
        int p1=0;
        bool f1=true, f2=true;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                p1=mid;
                high=mid-1;
                f1=false;
            }
            else if(nums[mid]<target)low=mid+1;
            else high=mid-1;
        }
        int p2=-1;
        low=0, high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                p2=mid;
                low=mid+1;
                f2=false;
            }
            else if(nums[mid]<target)low=mid+1;
            else high=mid-1;
        }
        if(f1&&f2)return ans;
        return {p1,p2};
    }
};