// Last updated: 10/12/2026, 7:10:20 PM
class Solution {
public:
    string trafficSignal(int timer) {
        if(timer==0)return "Green";
        else if(timer==30)return "Orange";
        else if(timer>30&&timer<=90) return "Red";
        return "Invalid";

    }
};