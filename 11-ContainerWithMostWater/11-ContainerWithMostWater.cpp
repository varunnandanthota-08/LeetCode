// Last updated: 8/2/2026, 1:05:57 AM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int max_area=0;
        while(left<right)
        {
            int min_height=min(height[left],height[right]);
            int area=min_height*abs(left-right);
            if(height[left]<height[right])
            {
                left++;
            }
            else{
                right--;
            }
            max_area=max(area,max_area);
        }
        return max_area;
    }
};