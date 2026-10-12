// Last updated: 10/12/2026, 7:19:47 PM
class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        map<int,vector<int>>mp;
        for(int i=0;i<reservedSeats.size();i++){
            int row=reservedSeats[i][0]-1;
            int col=reservedSeats[i][1]-1;
            mp[row].push_back(col);
        }
        int ans=(n-mp.size())*2;
        for(auto it:mp){
            int row=it.first;
            bool b1=(solve(mp,row,1)&&solve(mp,row,2)&&solve(mp,row,3)&&solve(mp,row,4));
            bool b2=(solve(mp,row,3)&&solve(mp,row,4)&&solve(mp,row,5)&&solve(mp,row,6));
            bool b3=(solve(mp,row,5)&&solve(mp,row,6)&&solve(mp,row,7)&&solve(mp,row,8));
            if(b1&&b3){
                ans+=2;
            }
            else if((b1&&(!b3))||(((!b1)&&b3))){
                ans+=1;
            }
            else if(b2){
                ans+=1;
            }
            else{
                ans+=0;
            }
        }
        return ans;
    }
    bool solve(map<int,vector<int>>&mp,int row,int col){
        for(int x:mp[row]){
            if(x==col)return false;
        }
        return true;
    }
};