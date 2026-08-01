// Last updated: 8/2/2026, 12:54:08 AM
class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        if(nums.size()==1)return 0;
        long long index=0;
        for(long long i=0;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]){
                index=i+1;
            }
        }
        return index;
    }
};