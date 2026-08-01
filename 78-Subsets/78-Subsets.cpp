// Last updated: 8/2/2026, 1:04:23 AM
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int total=(1<<nums.size());
        vector<vector<int>>arr(total);
        for(int i=0;i<total;i++){
            for(int j=0;j<nums.size();j++){
                if(i&(1<<j)){
                    arr[i].push_back(nums[j]);
                }
            }
        }
        return arr;
    }
};