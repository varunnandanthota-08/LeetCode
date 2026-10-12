// Last updated: 10/12/2026, 7:21:43 PM
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<long long,vector<int>>>pq;
        for(vector v:points){
            int x=v[0];
            int y=v[1];
            long long dist=1LL*x*x+1LL*y*y;
            pq.push({dist,{x,y}});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<vector<int>>ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};