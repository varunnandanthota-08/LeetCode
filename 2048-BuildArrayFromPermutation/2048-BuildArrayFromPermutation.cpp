// Last updated: 8/2/2026, 12:58:09 AM
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        long long len=nums.size();
        vector<int>arr(len,0);
        for(long long i=0;i<len;i++){
            arr[i]=nums[nums[i]];
        }
        return arr;
    }
};