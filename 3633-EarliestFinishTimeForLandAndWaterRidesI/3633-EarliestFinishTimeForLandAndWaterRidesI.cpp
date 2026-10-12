// Last updated: 10/12/2026, 7:12:53 PM
class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int ls=landStartTime.size();
        int ld=landDuration.size();
        int ws=waterStartTime.size();
        int wd=waterDuration.size();
        vector<int>ans;
        for(int i=0;i<ls;i++){
            int p=landStartTime[i];
            int q=landDuration[i];
            int temp=p+q;
            for(int j=0;j<ws;j++){
                if(temp>=waterStartTime[j]){
                    ans.push_back(temp+waterDuration[j]);
                }
                else{
                    ans.push_back(temp+abs(temp-waterStartTime[j])+waterDuration[j]);
                }
            }
        }
        for(int i=0;i<ws;i++){
            int p=waterStartTime[i];
            int q=waterDuration[i];
            int temp=p+q;
            for(int j=0;j<ls;j++){
                if(temp>=landStartTime[j]){
                    ans.push_back(temp+landDuration[j]);
                }
                else{
                    ans.push_back(temp+abs(temp-landStartTime[j])+landDuration[j]);
                }
            }
        }
        int minv=INT_MAX;
        for(int x:ans){
            minv=min(minv,x);
        }
        return minv;
    }
};