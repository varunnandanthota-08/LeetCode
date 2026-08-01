// Last updated: 8/2/2026, 1:04:00 AM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int start=0;
        int max_profit=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>prices[start])
            {
                int profit=prices[i]-prices[start];
                max_profit=max(profit,max_profit);
            }
            else{
                start=i;
            }
        }
        return max_profit;
    }
};