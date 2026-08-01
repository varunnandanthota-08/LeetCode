// Last updated: 8/2/2026, 1:03:09 AM
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int left=-1;
        int right=0;
        int curr=0;
        int best=INT_MAX;
        for(int right=0;right<nums.size();right++)
        {
            curr+=nums[right];
            while(curr>=target&&left<=right)
            {
                left+=1;
                curr-=nums[left];
                best=min(best,right-left+1);
            }
        }
        return (best==INT_MAX?0:best);
    }
};