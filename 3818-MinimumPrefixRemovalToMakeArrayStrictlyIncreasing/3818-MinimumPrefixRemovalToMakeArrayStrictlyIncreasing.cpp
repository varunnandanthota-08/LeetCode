// Last updated: 10/12/2026, 7:11:25 PM
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