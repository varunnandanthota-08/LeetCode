// Last updated: 10/12/2026, 7:14:24 PM
class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int end=0;
        int maxv=nums[0];
        for(int x:nums)maxv=max(maxv,x);
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                end=i;
            }
            else{    
                break;
            }
        }
        int ans=0;
        for(int i=0;i<=end;i++)ans+=nums[i];
        for(int i=ans;i<=maxv;i++){
            bool flag=true;
            for(int j=0;j<nums.size();j++){
                if(i==nums[j]){
                    flag=false;
                    break;
                }
            }
            if(flag){
                return i;
            }
        }
        return max(ans,maxv+1);
    }
};

