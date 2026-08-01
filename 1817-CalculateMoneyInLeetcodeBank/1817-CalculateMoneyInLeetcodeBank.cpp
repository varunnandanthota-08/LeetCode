// Last updated: 8/2/2026, 12:58:48 AM
class Solution {
public:
    int totalMoney(int n) {
        int c=0;
        int money=0;
        int i=1;
        while(c!=n)
        {
            for(int j=i;j<=(7+i-1)&&c<n;j++)
            {
                money+=j;
                c+=1;
            }
            i+=1;
        }
        return money;
    }
};