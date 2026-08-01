// Last updated: 8/2/2026, 1:00:53 AM
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int max_val=nums[0];
        int min_val=nums[0];
        for(int i=0;i<nums.size();i++){
            max_val=max(max_val,nums[i]);
            min_val=min(min_val,nums[i]);
        }
        int size=max_val-min_val+1;
        vector<int>freq(size,0);
        for(int x:nums){
            freq[x-min_val]++;
        }
        for(int i=1;i<size;i++){
            freq[i]+=freq[i-1];
        }
        vector<int>arr(nums.size(),0);
        for(int i=nums.size()-1;i>=0;i--){
            arr[--freq[nums[i]-min_val]]=nums[i];
        }
        return arr;
    }
};
