// Last updated: 8/2/2026, 12:53:32 AM
class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        vector<double>arr(3);
        int a=sides[0];
        int b=sides[1];
        int c=sides[2];
        double s=(a+b+c)/2.0;
        double temp=s*(s-a)*(s-b)*(s-c);
        if(a+b<=c||a+c<=b||b+c<=a)return {};
        double area=sqrt(temp);
        double Aa=acos((b*b+c*c-a*a)/(2.0*b*c))*180.0/M_PI;
        double Ab=acos((a*a+c*c-b*b)/(2.0*a*c))*180.0/M_PI;
        double Ac=acos((a*a+b*b-c*c)/(2.0*a*b))*180.0/M_PI;
        arr[0]=Ac;
        arr[1]=Aa;
        arr[2]=Ab;
        sort(arr.begin(),arr.end());
        return arr;
    }
};