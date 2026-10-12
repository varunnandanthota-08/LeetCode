// Last updated: 10/12/2026, 7:17:29 PM
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