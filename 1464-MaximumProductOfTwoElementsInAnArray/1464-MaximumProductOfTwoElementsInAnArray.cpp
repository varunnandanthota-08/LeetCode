// Last updated: 10/12/2026, 7:19:30 PM
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