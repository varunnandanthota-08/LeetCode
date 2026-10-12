// Last updated: 10/12/2026, 7:16:53 PM
class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int ans=INT_MIN;
        for(int i=0;i<colors.size();i++){
            for(int j=i;j<colors.size();j++){
                if(colors[i]!=colors[j]){
                    ans=max(ans,abs(i-j));
                }
            }
        }
        return ans;
    }
};