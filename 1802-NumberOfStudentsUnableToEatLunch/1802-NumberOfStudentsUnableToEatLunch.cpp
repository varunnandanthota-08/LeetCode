// Last updated: 8/2/2026, 12:58:58 AM
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>stu;
        queue<int>sand;
        for(int x:students){
            stu.push(x);
        }
        for(int y:sandwiches){
            sand.push(y);
        }
        int c=0;
        int ans=0;
        while((!(stu.empty()))&&(!(sand.empty()))){
            int std=stu.front();
            int san=sand.front();
            if(std==san){
                stu.pop();
                sand.pop();
                c=0;
            }
            else{
                stu.pop();
                stu.push(std);
                c+=1;
                if(c==stu.size()){
                    ans=stu.size();
                    break;
                }
            }
        }
        return ans;
    }
};