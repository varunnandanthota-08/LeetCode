// Last updated: 10/12/2026, 7:18:28 PM
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