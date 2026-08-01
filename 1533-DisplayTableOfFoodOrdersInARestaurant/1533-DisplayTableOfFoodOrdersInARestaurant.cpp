// Last updated: 8/2/2026, 12:59:32 AM
class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        set<string>st;
        vector<string>curr;
        curr.push_back("Table");
        for(int i=0;i<orders.size();i++){
            st.insert(orders[i][2]);
        }
        for(string s:st){
            curr.push_back(s);
        }
        int l=curr.size();
        vector<vector<string>>ans;
        ans.push_back(curr);
        map<int,map<string,int>>mp;
        for(int i=0;i<orders.size();i++){
            mp[stoi(orders[i][1])][orders[i][2]]++;
        }
        for(auto &it:mp){
            vector<string>temp(l,"0");
            temp[0]=to_string(it.first);
            for(int i=1;i<curr.size();i++){
                if(it.second.contains(curr[i])){
                    temp[i]=to_string(it.second[curr[i]]);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
