// Last updated: 8/2/2026, 12:53:50 AM
class Solution {
    int fac(int n){
        if(n==0||n==1)return 1;
        else return n*fac(n-1);
    }
public:
    bool isDigitorialPermutation(int n) {
        int num=n;
        int sum=0;
        while(n>0){
            int rem=n%10;
            sum+=(fac(rem));
            n/=10;
        }
        vector<int>arr;
        arr=func(num);
        int l=0;
        int r=arr.size()-1;
        while(l<=r){
            int mid=(l+(r-l)/2);
            if(arr[mid]==sum)return true;
            else if(arr[mid]<sum){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return false;
    }
    vector<int> func(int n){
        string s=to_string(n);
        sort(s.begin(),s.end());
        vector<int>arr;
        do{
            if(s[0]!='0'){
                string st=s;
                arr.push_back(stoi(st));
            }
        }while(next_permutation(s.begin(),s.end()));
        return arr;
    }
};