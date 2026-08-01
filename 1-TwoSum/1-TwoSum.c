// Last updated: 8/2/2026, 1:06:14 AM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;  
    int i,x,j;    
    for(i=0;i<numsSize;i++)
    {
        x=nums[i];
        for(j=i+1;j<numsSize;j++)
        {
            if(x+nums[j]==target)
            {
                result[0]=i;
                result[1]=j;
                return result;
            }
        }
    }
    *returnSize = 0;
    free(result);
    return NULL;
}