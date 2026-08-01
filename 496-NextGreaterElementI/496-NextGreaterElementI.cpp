// Last updated: 8/2/2026, 1:01:54 AM
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>arr(nums2.size());
        stack<int>st;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty()&&nums2[i]>=st.top()){
                st.pop();
            }
            if(st.empty())arr[i]=-1;
            else arr[i]=st.top();
            st.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    nums1[i]=arr[j];
                    break;
                }
            }
        }
        return nums1;
    }
};