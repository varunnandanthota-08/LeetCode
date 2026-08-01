// Last updated: 8/2/2026, 12:54:18 AM
class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int>demo;
        vector<int>pos;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                demo.push_back(nums[i]);
                pos.push_back(i);
            }
        }
        if(demo.size()==0)return nums;
        k=k%demo.size();
        vector<int>r(demo.size());
        for(int i=0;i<demo.size();i++){
            r[(i-k+demo.size())%demo.size()]=demo[i];
        }
        vector<int> arr=nums;
        for(int i=0;i<pos.size();i++){
            arr[pos[i]]=r[i];
        }
        return arr;
        
    }
};