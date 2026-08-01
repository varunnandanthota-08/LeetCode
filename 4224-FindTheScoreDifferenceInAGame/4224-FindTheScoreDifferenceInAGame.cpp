// Last updated: 8/2/2026, 12:53:53 AM
class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int firstscore=0;
        int secondscore=0;
        bool first=true;
        bool second=false;
        for(int i=0;i<nums.size();i++){
            if((i+1)%6==0){
                swap(first,second);
            }
            if(nums[i]&1){
                swap(first,second);
            }
            
                if(first)firstscore+=nums[i];
                else secondscore+=nums[i];
            
        }
        return firstscore-secondscore;
    }
};