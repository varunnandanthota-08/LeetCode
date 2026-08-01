// Last updated: 8/2/2026, 12:56:58 AM
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>v(2);
        v[0]=celsius+273.15;
        v[1]=celsius*1.80+32.00;
        return v;
    }
};