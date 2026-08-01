// Last updated: 8/2/2026, 1:04:20 AM
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int x,i,j;
   for(x=0;x<n;x++){
    nums1[x+m]=nums2[x];
   }
     for ( i= 0; i < (m+n) - 1; i++) {
        for (int j = 0; j < (m+n) - i - 1; j++) {
            if (nums1[j] > nums1[j + 1]) {
                int temp = nums1[j];
                nums1[j] = nums1[j+ 1];
                nums1[j+ 1] = temp;
            }
        }
    }

}