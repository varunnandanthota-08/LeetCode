// Last updated: 10/12/2026, 7:22:43 PM
class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n=arr.size();
        priority_queue<pair<double,pair<int,int>>>pq;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                pq.push({(double)arr[i]/arr[j],{arr[i],arr[j]}});
                if(pq.size()>k){
                    pq.pop();
                }
            }
        }
        int x=pq.top().second.first;
        int y=pq.top().second.second;
        return {x,y};
    }
};
//1/2 1/3 1/5
//2/3 2/5
//3/5