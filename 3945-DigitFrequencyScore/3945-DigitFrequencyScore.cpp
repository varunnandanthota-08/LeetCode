// Last updated: 10/27/2026, 8:40:21 PM
class Solution {
public:
    int digitFrequencyScore(int n) {
        map<int,int>mp;
        int i=0;
        while(n>0)
        {
            int rem=n%10;
            mp[rem]++;
            n/=10;
        }
        int sum=0;
        for(auto &it:mp){
            sum+=(it.first*it.second);
        }
        return sum;
    }
};