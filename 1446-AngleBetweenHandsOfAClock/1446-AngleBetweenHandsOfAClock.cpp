// Last updated: 8/2/2026, 12:59:50 AM
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