// Last updated: 10/12/2026, 7:08:31 PM
class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        // int maxv=INT_MIN;
        // for(int i=0;i<arrivalTime.size();i++){
        //     for(int j=0;j<lights.size();j++){
        //         int r=(arrivalTime[i]%period);
        //         if(r>=lights[j]){
        //             int w=period-r;
        //             maxv=max(maxv,w);
        //         }
        //     }
        // }
        // return maxv;

        vector<int>temp;
        int max_l=INT_MIN;
        for(int x:lights)max_l=max(max_l,x);
        for(int i=0;i<arrivalTime.size();i++){
            int r=arrivalTime[i]%period;
            if(r>=max_l){
                temp.push_back(r);
            }
        }
        if(temp.size()==0)return 0;
        sort(temp.begin(),temp.end());
        return period-temp[0];
    }
};

//r=a%p
//p-a%p
//0 2 3 5