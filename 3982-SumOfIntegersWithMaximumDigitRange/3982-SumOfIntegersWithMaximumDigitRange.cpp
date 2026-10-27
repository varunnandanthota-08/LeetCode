// Last updated: 10/27/2026, 8:40:04 PM
class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int sum=0;
        int gmax=INT_MIN;
        for(int num:nums){
            int x=num;
            int temp=0;
            int maxv=INT_MIN;
            int minv=INT_MAX;
            while(x>0){
                int curr=x%10;
                maxv=max(maxv,curr);
                minv=min(minv,curr);
                x/=10;
            }
            temp=maxv-minv;
            if(temp>gmax){
                gmax=temp;
                sum=num;
            }
            else if(temp==gmax){
                sum+=num;
            }
        }
        return sum;
    }
};