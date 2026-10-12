// Last updated: 10/12/2026, 7:16:36 PM
class Solution {
public:
    int minimumSum(int num) {
        int n=num;
        vector<int>arr(4);
        int k=0;
        while(n>0){
            int rem=n%10;
            arr[k++]=rem;
            n/=10;
        }
        sort(arr.begin(),arr.end());
        return (arr[0]*10+arr[2])+(arr[1]*10+arr[3]);
    }
};