// Last updated: 8/2/2026, 12:58:25 AM
class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int ans=INT_MIN;
        int p1=0,p2=0;
        while(p1<nums1.size()&&p2<nums2.size()){
            if(p1<=p2){
                if(nums1[p1]<=nums2[p2]){
                    ans=max(ans,p2-p1);
                    p2++;
                }
                else{
                    p1++;
                }
            }
            else{
                p2++;
            }
        }
        if(ans==INT_MIN)return 0;
        return ans;
    }
};