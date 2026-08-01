// Last updated: 8/2/2026, 12:57:37 AM
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        long long total=0;
        vector<int>arr;
        for(int i=0;i<bank.size();i++){
            int c=0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1'){
                    c++;
                }
            }
            if(c!=0){
                arr.push_back(c);
            }
        }
        for(int i=1;i<arr.size();i++){
            total+=(arr[i]*arr[i-1]);
        }
        return total;
    }
};
