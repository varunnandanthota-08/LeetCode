// Last updated: 10/12/2026, 7:24:20 PM
class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int end=0;
        vector<string>arr;
        string temp;
        while(end<n){
            if(s[end]!=' '){
                temp+=s[end];
                end++;
            }
            else{
                if(!temp.empty()){
                    arr.push_back(temp);
                    temp.clear();
                }
                end++;
            }
        }
        if(!temp.empty()){
            arr.push_back(temp);
        }
        string ans;
        for(int i=arr.size()-1;i>=0;i--){
            ans+=arr[i];
            if(i!=0)ans+=" ";
        }
        return ans;
    }
};