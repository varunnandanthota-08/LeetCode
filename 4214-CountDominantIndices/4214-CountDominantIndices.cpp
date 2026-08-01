// Last updated: 8/2/2026, 12:54:01 AM
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