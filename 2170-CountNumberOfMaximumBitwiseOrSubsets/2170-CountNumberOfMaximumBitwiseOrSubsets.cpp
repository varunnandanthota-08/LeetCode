// Last updated: 8/2/2026, 12:57:51 AM
class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int total=(1<<nums.size());
        vector<int>arr;
        int maxXOR=0;
        for(int i=0;i<total;i++){
            int xorv=0;
            for(int j=0;j<nums.size();j++){
                if(i&(1<<j)){
                    xorv=xorv|nums[j];
                }
            }
            arr.push_back(xorv);
            maxXOR=max(maxXOR,xorv);
        }
        int cnt=0;
        for(int x:arr){
            if(x==maxXOR){
                cnt++;
            }
        }
        return cnt;
    }
};