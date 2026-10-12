// Last updated: 10/12/2026, 7:16:56 PM
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        deque<pair<int,int>>q;
        for(int i=0;i<tickets.size();i++){
            q.push_back({tickets[i],i});
        }
        int time=0;
        while(!q.empty()){
            auto [t,idx]=q.front();
            q.pop_front();
            t--;
            time+=1;
            if(t>0){
                q.push_back({t,idx});
            }
            else if(idx==k){
                break;
            }
        }
        return time;
    }
};