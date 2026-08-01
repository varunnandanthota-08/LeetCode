// Last updated: 8/2/2026, 1:00:03 AM
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int sum=0;
        for(int i=0;i<points.size()-1;i++){
            
                int x1=points[i][0];
                int y1=points[i][1];
                int x2=points[i+1][0];
                int y2=points[i+1][1];
                sum+=dist(x1,x2,y1,y2);
            
        }
        return sum;
    }
    int dist(int x1,int x2,int y1,int y2){
        return max(abs(x2-x1),abs(y2-y1));
    }
};
