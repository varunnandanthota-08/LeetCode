// Last updated: 10/12/2026, 7:09:32 PM
class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            double ce=0,co=0;
            for(int j=i;j<nums.size();j++){
                if(nums[j]&1)co++;
                else ce++;
                double v1=a;
                double v2=b;
                double temp=v1/v2;
                if(co==0){
                    continue;
                }
                double curr=ce/co;
                if((curr<=temp)){
                    ans++;
                }
            }
        }
        return ans;
    }
};