// Last updated: 8/2/2026, 12:54:06 AM
class Solution {
public:
    string reverseByType(string s) {
        int l=0;
        int r=s.size()-1;
        while(l<r){
            while(l<s.size()&&!isalpha(s[l])){
                l++;
            }
            while(r>=0&&!isalpha(s[r])){
                r--;
            }
            if(l<r){
                swap(s[l],s[r]);
                l++;
                r--;
            }
        }
        int ll=0;
        int rr=s.size()-1;
        while(ll<rr){
            while(ll<s.size()&&isalpha(s[ll])){
                ll++;
            }
            while(rr>=0&&isalpha(s[rr])){
                rr--;
            }
            if(ll<rr){
                swap(s[ll],s[rr]);
                ll++;
                rr--;
            }
        }
        return s;
    }
};