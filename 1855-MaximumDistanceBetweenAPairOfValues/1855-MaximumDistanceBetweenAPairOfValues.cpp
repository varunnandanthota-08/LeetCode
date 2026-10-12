// Last updated: 10/12/2026, 7:17:45 PM
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