// Last updated: 10/12/2026, 7:08:22 PM
class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int i=0;
        while(i<nums.size()){
            if(nums[i]>upper)break;
            if(lower<nums[i]){
                ans.push_back({lower,nums[i]-1});
                lower=nums[i]+1;
            }
            else if(lower==nums[i]){
                lower=nums[i]+1;
            }
            i++;
        }
        if(lower<=upper){
                    ans.push_back({lower,upper});

        }
        return ans;
    }
    
};
//345,l=1 h=12
//379