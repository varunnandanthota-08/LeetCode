// Last updated: 8/2/2026, 12:53:21 AM
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