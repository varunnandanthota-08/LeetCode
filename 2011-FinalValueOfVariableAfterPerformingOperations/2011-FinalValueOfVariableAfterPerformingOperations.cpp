// Last updated: 10/12/2026, 7:17:06 PM
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