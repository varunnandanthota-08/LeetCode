// Last updated: 8/2/2026, 12:55:45 AM
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt=0;
        for(int x:nums){
            if(x%3!=0){
                int a=x%3;
                int b=3-(x%3);
                int c=min(a,b);
                cnt+=c;
            }
        }
        return cnt;
    }
};