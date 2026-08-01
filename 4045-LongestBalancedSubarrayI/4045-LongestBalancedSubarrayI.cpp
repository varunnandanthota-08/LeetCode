// Last updated: 8/2/2026, 12:54:52 AM
class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int maxv=0;
        for(int i=0;i<nums.size();i++){
            unordered_set<int>s;
            int cnteven=0;
            int cntodd=0;
            for(int j=i;j<nums.size();j++){
                if(s.insert(nums[j]).second){
                    if(nums[j]&1){
                        cntodd++;
                    }
                    else{
                        cnteven++;
                    }
                }
                if(cntodd==cnteven){
                    maxv=max(maxv,j-i+1);
                }
                else{
                    continue;
                }
            }
        }
        return maxv;
    }
};