// Last updated: 8/2/2026, 1:06:03 AM
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int t=nums1Size+nums2Size;
    int* a=(int*)malloc(t*sizeof(int));
    for(int i=0;i<nums1Size;i++){
        a[i]=nums1[i];
    }
    for(int j=0;j<nums2Size;j++){
        a[nums1Size+j]=nums2[j];
    }
    for(int x=0;x<t-1;x++)
    {
        for(int y=0;y<t-x-1;y++)
        {
            if(a[y]>a[y+1])
            {
                int temp=a[y];
                a[y]=a[y+1];
                a[y+1]=temp;
            }
        }
    }
    if(t%2==0){
        return (a[(t/2)-1]+a[t/2])/2.0;
    }
    else{
        return a[t/2];
    }
    free(a);
}