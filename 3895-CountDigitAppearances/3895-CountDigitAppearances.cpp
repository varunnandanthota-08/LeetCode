// Last updated: 10/12/2026, 7:10:25 PM
class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int cnt=0;
        for(int x:nums){
            int val=x;
            while(val>0){
                int rem=val%10;
                val/=10;
                if(rem==digit)cnt++;
            }
        }
        return cnt;
    }
};