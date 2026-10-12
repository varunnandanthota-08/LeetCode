// Last updated: 10/12/2026, 7:18:10 PM
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                ans+=(nums[i-1]-nums[i]+1);
                nums[i]=nums[i-1]+1;
            }
            
        }
        return ans;
    }
};