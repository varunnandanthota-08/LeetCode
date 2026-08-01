// Last updated: 8/2/2026, 1:01:05 AM
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        long l=1;
        long r=arr.size()-2;
        long index=-1;
        while(l<=r){
            long mid=(l+(r-l)/2);
            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
                index=mid;
                break;
            }
            else if(arr[mid]<arr[mid-1]&&arr[mid]>arr[mid+1]){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return index;
    }
};