// Last updated: 10/12/2026, 7:10:54 PM
class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>gcdarr(nums.size());
        int maxv=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=maxv)
            {
                maxv=nums[i];
            }
            gcdarr[i]=func(maxv,nums[i]);
        }
        sort(gcdarr.begin(),gcdarr.end());
        long long l=0;
        long long r=gcdarr.size()-1;
        long long sum=0;
        while(l<r){
            sum+=(func(gcdarr[l],gcdarr[r]));
            l++;
            r--;
        }
        return sum;
    }
    long long func(long long a,long long b){
        return gcd(a,b);
    }
};