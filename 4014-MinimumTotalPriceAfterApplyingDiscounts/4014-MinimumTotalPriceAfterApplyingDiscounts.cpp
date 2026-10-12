// Last updated: 10/12/2026, 7:09:17 PM
class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.rbegin(),prices.rend());
        sort(discounts.rbegin(),discounts.rend());
            double sum=0;
                for(int i=0;i<min(discounts.size(),prices.size());i++){
                double v=prices[i];
                double d=discounts[i];
                double curr=(v*(100-d))/100;
                sum+=curr;
                }
        if(discounts.size()<prices.size()){
                for(int i=discounts.size();i<prices.size();i++){
                    sum+=prices[i];
                }
        }
        return sum;
    }
};