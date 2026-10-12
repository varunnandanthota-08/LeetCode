// Last updated: 10/12/2026, 7:18:06 PM
class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n=nums.size();
        vector<int>ans;
        vector<int>prefix(n);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]^nums[i];
        }
        for(int i=0;i<n;i++){
            int curr=INT_MIN;
            int res=0;
            int a=prefix[i];
            int maxBit=(1<<maximumBit)-1;
            int minBit=0;
            int b=a^maxBit;
            ans.push_back(b);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
