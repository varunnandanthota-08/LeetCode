// Last updated: 8/2/2026, 12:56:50 AM
class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        map<int,vector<int>,greater<int>>mp;
        for(int i=0;i<score.size();i++){
            int key=score[i][k];
            vector<int>temp;
            for(int j=0;j<score[i].size();j++){
                temp.push_back(score[i][j]);
            }
            mp[key]=temp;
            temp.clear();
        }
        vector<vector<int>>matrix;
        for(auto &it:mp){
            matrix.push_back(it.second);
        }
        return matrix;
    }
};