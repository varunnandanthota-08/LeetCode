// Last updated: 10/12/2026, 7:10:29 PM
class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        unordered_map<int,int>freq;
        int val=cbrt(n);
        for(int a=1;a<=val;a++){
            for(int b=a;b<=val;b++){
                int sum=a*a*a+b*b*b;
                if(sum>n)break;
                freq[sum]++;
            }
        }
        vector<int>res;
        for(auto &it:freq){
            if(it.second>=2){
                res.push_back(it.first);
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};