// Last updated: 10/12/2026, 7:18:52 PM
class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>answer;
        for(int i=0;i<l.size();i++){
            int strt=l[i];
            int end=r[i];
            vector<int>temp;
            for(int j=strt;j<=end;j++){
                temp.push_back(nums[j]);
            }
            sort(temp.begin(),temp.end());
            bool flag=true;
            for(int k=1;k<temp.size()-1;k++){
                if((temp[k]-temp[k-1])!=(temp[k+1]-temp[k])){
                    flag=false;
                    break;
                }
            }
            if(flag)answer.push_back(true);
            else answer.push_back(false);
        }
        return answer;
    }
};