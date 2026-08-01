// Last updated: 8/2/2026, 1:04:47 AM
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxv=0;
        for(int i=0;i<nums.size();i++){
            if(i>maxv)return false;
            maxv=max(maxv,i+nums[i]);
        
        }
        return true;
    }
};