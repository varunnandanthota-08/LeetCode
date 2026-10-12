// Last updated: 10/12/2026, 7:13:58 PM
class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int ans=0;
        for(int &x:nums2){
            x=x*k;
        }
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]%nums2[j]==0)ans++;
            }
        }
        return ans;
    }
};