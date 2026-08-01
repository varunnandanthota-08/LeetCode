// Last updated: 8/2/2026, 12:52:45 AM
class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int hrs1=0,min1=0,sec1=0;
        int hrs2=0,min2=0,sec2=0;
        hrs1=stoi(startTime.substr(0,2));
        min1=stoi(startTime.substr(3,2));
        sec1=stoi(startTime.substr(6,2));
        hrs2=stoi(endTime.substr(0,2));
        min2=stoi(endTime.substr(3,2));
        sec2=stoi(endTime.substr(6,2));
        int ans=(hrs2*3600+min2*60+sec2)-(hrs1*3600+min1*60+sec1);
        return ans;
    }
};