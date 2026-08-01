// Last updated: 8/2/2026, 12:59:47 AM
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>nums;
        for(int x:arr){
            nums.push_back({check(x),x});
        }
        sort(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i].second);
        }
        return ans;
    }
    int check(int n){
        int c=0;
        while(n>0){
            if(n&1){
                c++;
            }
            n>>=1;
        }
        return c;
    }
};