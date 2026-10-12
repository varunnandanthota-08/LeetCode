// Last updated: 10/12/2026, 7:11:11 PM
class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
     for(int i=0;i<n-1;i++)   {
         int sum=0;
         int c=0;
         for(int j=i+1;j<=n-1;j++){
             sum+=(nums[j]);
             c++;
         }
         int avg=(sum/c);
         if(nums[i]>avg){
             cnt++;
         }
     }
        return cnt;
    }
};