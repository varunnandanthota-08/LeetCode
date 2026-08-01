// Last updated: 8/2/2026, 12:57:27 AM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos,neg;
        for(int x:nums){
            if(x>=0){
                pos.push_back(x);
            }
            else{
                neg.push_back(x);
            }
        }
        int i=0,f=0,s=0;
        while(i<nums.size()){
            nums[i++]=pos[f++];
            nums[i++]=neg[s++];
        }

        return nums;
    }
};