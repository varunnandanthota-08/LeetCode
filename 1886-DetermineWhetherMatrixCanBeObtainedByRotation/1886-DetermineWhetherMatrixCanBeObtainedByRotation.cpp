// Last updated: 10/12/2026, 7:17:37 PM
class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(func1(mat,target) || 
        func2(mat,target) || 
        func3(mat,target) || 
        func4(mat,target))
        {
        return true;
        }
        return false;
    }
    bool func1(vector<vector<int>>mat,vector<vector<int>>tag){
        int n=mat.size();
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]!=tag[i][j]){
                    return false;
                }
            }
        }
        return true;
    }
    bool func2(vector<vector<int>>mat,vector<vector<int>>tag){
        int n=mat.size();
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[n-j-1][i]!=tag[i][j]){
                    return false;
                }
            }
        }
        return true;
    }
    bool func3(vector<vector<int>>mat,vector<vector<int>>tag){
        int n=mat.size();
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[j][n-i-1]!=tag[i][j]){
                    return false;
                }
            }
        }
        return true;
    }
    bool func4(vector<vector<int>>mat,vector<vector<int>>tag){
        int n=mat.size();
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[n-i-1][n-j-1]!=tag[i][j]){
                    return false;
                }
            }
        }
        return true;
    }
};