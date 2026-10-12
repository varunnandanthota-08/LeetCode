// Last updated: 10/12/2026, 7:20:12 PM
class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minangle=minutes*6;
        double hrangle=(hour%12*30)+0.5*minutes;
        double ans=abs(minangle-hrangle);
        ans=min(ans,360-ans);
        return ans;
    }
};