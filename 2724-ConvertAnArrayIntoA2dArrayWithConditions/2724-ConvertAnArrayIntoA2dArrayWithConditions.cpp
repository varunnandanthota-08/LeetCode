// Last updated: 8/2/2026, 12:56:44 AM
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>ans;
        map<int,vector<int>>mp;
        int cnt=0;
        mp[cnt].push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            int elem=nums[i];
            bool found=false;
            for(auto &it:mp){
                if(find(it.second.begin(),it.second.end(),elem)==it.second.end()){
                    it.second.push_back(elem);
                    found=true;
                    break;
                }
            }
            if(!found){
                mp[++cnt].push_back(elem);
            }
        }
        for(auto &it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
//1 3 4 1 2 3 1
//0-1 3 4
//1-1 2 3
//2-1
