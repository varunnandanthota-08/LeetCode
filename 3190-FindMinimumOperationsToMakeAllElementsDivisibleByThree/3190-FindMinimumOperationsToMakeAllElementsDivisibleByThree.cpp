// Last updated: 10/12/2026, 7:13:48 PM
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