// Last updated: 8/2/2026, 1:03:18 AM
class Solution {
public:
    bool isHappy(int n) {
        if(n==1)return true;
        unordered_set<int>s;
        while(n!=1){
            if(s.count(n))return false;
            s.insert(n);
            int res=0;
            while(n>0){
                int rem=n%10;
                res+=rem*rem;
                n/=10;
            }
            n=res;
        }
        return true;
    }
};