// Last updated: 8/2/2026, 1:04:26 AM
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int idx=i;
            for(int j=i+1;j<n;j++){
                if(nums[j]<nums[idx]){
                    idx=j;
                }
            }
            swap(nums[i],nums[idx]);
        }
    }
};