// Last updated: 8/2/2026, 12:57:03 AM
class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int>st;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            st.insert(num);
            map<int,int>mp;
            int rev=0;
            while(num>0){
                int rem=num%10;
                rev=rev*10+rem;
                num/=10;
            }
            st.insert(rev);
        }
        return st.size();
    }
};