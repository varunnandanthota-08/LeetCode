// Last updated: 10/12/2026, 7:15:28 PM
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int x:nums)
        {
            vector<int>curr=func(x);
            ans.insert(ans.end(),curr.begin(),curr.end());
        }
        return ans;
    }
    vector<int> func(int x){
        vector<int>temp;
        while(x>0){
            int rem=x%10;
            x/=10;
            temp.push_back(rem);
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};