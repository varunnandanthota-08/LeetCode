// Last updated: 8/2/2026, 12:53:00 AM
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