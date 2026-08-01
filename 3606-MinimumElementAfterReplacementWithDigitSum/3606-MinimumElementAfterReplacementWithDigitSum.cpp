// Last updated: 8/2/2026, 12:55:33 AM
class Solution {
public:
    int minElement(vector<int>& nums) {
        int minv=INT_MAX;
        vector<int>temp;
        for(int x:nums){
            temp.push_back(sum(x));
        }
        for(int x:temp){
            minv=min(minv,x);
        }
        return minv;
    }
    int sum(int num){
        int res=0;
        while(num>0){
            res+=num%10;
            num/=10;
        }
        return res;
    }
};