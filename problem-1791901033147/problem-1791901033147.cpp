// Last updated: 10/13/2026, 7:47:13 PM
1class Solution {
2public:
3    long long maxAlternatingSum(vector<int>& nums) {
4        for(int &x:nums){
5            x=abs(x);
6        }
7        sort(nums.rbegin(),nums.rend());
8        long long n=nums.size();
9        long long s1=0,s2=0;
10        if(n&1){
11            for(long long i=0;i<(n+1)/2;i++){
12                s1+=1LL*(nums[i]*nums[i]);
13            }
14            for(long long i=(n+1)/2;i<n;i++){
15                s2+=1LL*(nums[i]*nums[i]);
16            }
17        }
18        else{
19            for(long long i=0;i<n/2;i++){
20                s1+=1LL*(nums[i]*nums[i]);
21            }
22            for(long long i=n/2;i<n;i++){
23                s2+=1LL*(nums[i]*nums[i]);
24            }
25        }
26        return s1-s2;
27    }
28};