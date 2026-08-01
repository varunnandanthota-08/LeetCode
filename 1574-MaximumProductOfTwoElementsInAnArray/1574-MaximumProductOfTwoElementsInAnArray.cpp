// Last updated: 8/2/2026, 12:59:28 AM
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>pq;  //-->maxheap
//      priority_queue<int,vector<int>,greater<int>>pq-->min heap
        for(int x:nums)pq.push(x);
        int first=pq.top();
        pq.pop();
        int second=pq.top();
        return (first*second)-(first+second)+1;
    }
};