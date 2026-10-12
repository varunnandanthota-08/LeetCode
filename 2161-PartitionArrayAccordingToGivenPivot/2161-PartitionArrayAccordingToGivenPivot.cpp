// Last updated: 10/12/2026, 7:16:33 PM
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>less,equal,more;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                less.push_back(nums[i]);
            }
            else if(nums[i]==pivot){
                equal.push_back(nums[i]);
            }
            else{
                more.push_back(nums[i]);
            }
        }
        vector<int>res;
        res.insert(res.end(),less.begin(),less.end());
        res.insert(res.end(),equal.begin(),equal.end());
        res.insert(res.end(),more.begin(),more.end());
        return res;
    }
};