// Last updated: 8/2/2026, 12:57:55 AM
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(string s:operations){
            if(s.find('+')!=string::npos){
                x+=1;
            }
            else{
                x-=1;
            }
        }
        return x;
    }
};