// Last updated: 10/12/2026, 7:08:15 PM
class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int cnt=0;
        map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        vector<int>temp;
        for(auto &it:mp){
            if((it.second.size())>=3){
                temp=it.second;
                bool flag=true;
                int l=0,r=temp.size()-1;
                for(int i=1;i<temp.size()-1;i++){
                    if((temp[i]-temp[i-1])!=(temp[i+1]-temp[i])){
                        flag=false;
                        break;
                    }
                }
                if(flag){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

//1=0,2,4,6,8;
//1=0,3,4,6,8
//1=0,2,5,9,12
//1=0,3,6
