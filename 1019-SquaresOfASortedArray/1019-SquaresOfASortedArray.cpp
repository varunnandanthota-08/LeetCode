// Last updated: 8/2/2026, 1:00:43 AM
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>arr(nums.size());
        for(int i=0;i<nums.size();i++){
            arr[i]=nums[i]*nums[i];
        }
        quickSort(arr,0,nums.size()-1);
        return arr;
    }
    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[low];
        int i = low + 1;
        int j = high;

        while (true) {
            while (i <= high && arr[i] <= pivot) i++;
            while (arr[j] > pivot) j--;
            if (i < j) {
                swap(arr[i], arr[j]);
            } else {
                break;
            }
        }

        swap(arr[low], arr[j]);
        return j;  
    }
    void quickSort(vector<int>& arr, int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high);
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }
};
