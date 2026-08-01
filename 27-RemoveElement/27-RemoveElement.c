// Last updated: 8/2/2026, 1:05:26 AM
int removeElement(int* nums, int numsSize, int val) {
    int c=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=val){
            nums[c]=nums[i];
            c++;
        }
    }
    return c;
}