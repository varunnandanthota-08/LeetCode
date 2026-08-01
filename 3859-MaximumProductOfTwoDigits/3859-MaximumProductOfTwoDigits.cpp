// Last updated: 8/2/2026, 12:55:18 AM
class Solution {
public:
    int maxProduct(int n) {
        vector<int>digits;
        while(n>0){
            digits.push_back(n%10);
            n/=10;
        }
        sort(digits.begin(),digits.end());
        int l=digits.size();
        return digits[l-1]*digits[l-2];
    }
};