// Last updated: 8/2/2026, 12:57:10 AM
class Solution {
public:
    string base_b(int n,int b){
        string res="";
        while(n>0){
            int rem=n%b;
            res+=rem+'0';
            n/=b;
        }
        reverse(res.begin(),res.end());
        return res;
    }
    bool ispalindrome(string s){
        int l=0;
        int r=s.size()-1;
        string rev=s;
        while(l<=r){
            swap(s[l],s[r]);
            l++;
            r--;
        }
        return s==rev;
    }
    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<=n-2;i++){
            string rep=base_b(n,i);
            if(!ispalindrome(rep)){
                return false;
            }
        }
        return true;
    }
};