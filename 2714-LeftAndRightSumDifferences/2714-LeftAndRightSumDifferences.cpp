// Last updated: 8/2/2026, 12:56:45 AM
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>p(n),s(n);
        p[0]=0,s[n-1]=0;
        for(int i=1;i<n;i++){
            p[i]=p[i-1]+nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            s[i]=s[i+1]+nums[i+1];
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i]=abs(p[i]-s[i]);
        }
        return ans;
    }
};
