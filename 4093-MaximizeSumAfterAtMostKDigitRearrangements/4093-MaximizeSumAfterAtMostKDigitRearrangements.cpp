// Last updated: 10/27/2026, 8:40:26 PM
class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        multimap<int,int,greater<int>>mp;
        for(int x:nums){
            string s=to_string(x);
            sort(s.rbegin(),s.rend());
            int num=stoi(s);
            mp.insert({num-x,x});
        }
        long long ans=0;
        for(auto it:mp){
            if(it.first>0){
                if(k>0){
                    ans+=it.first+it.second;
                    k--;
                }
                else{
                    ans+=it.second;
                }
            }
            else{
                ans+=it.second;
            }
        }
        return ans;
    }
};
//26 6 37 41 27 29
//62 6 73 14 72 92