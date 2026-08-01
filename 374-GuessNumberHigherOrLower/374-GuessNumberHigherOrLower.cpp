// Last updated: 8/2/2026, 1:02:12 AM
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l=1;
        int r=n;
        int ans=-1;
        while(l<=r){
            int mid=(l+(r-l)/2);
            int value=guess(mid);
            if(value==0){
                ans=mid;
                break;
            }
            else if(value==-1){
                r=mid-1;
            }
            else{
                l=mid+1;
            }           
        }
        return ans;
    }
};