// Last updated: 8/2/2026, 1:02:20 AM
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0;
        int j=0;
        vector<int>arr;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]!=nums2[j]){
                if(nums1[i]<nums2[j]){
                    i++;
                }
                else{
                    j++;
                }
            }
            else{
                arr.push_back(nums1[i]);
                int key=nums1[i];
                while(i<nums1.size()&&nums1[i]==key)i++;
                while(j<nums2.size()&&nums2[j]==key)j++;
            }
        }
        return arr;
    }
};