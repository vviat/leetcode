int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
        int i,j,k,s;
    *returnSize=0;
    int *res;
    res=(int *)calloc(nums1Size,sizeof(int *));
    for(i=0;i<nums1Size;i++)
    {
        for(j=0;j<nums2Size;j++)
        {
            if(nums1[i]==nums2[j])
            {
                for(k=0;k<*returnSize;k++)
                {
                    if(nums1[i]==res[k])
                        break;
                }
                if(k==*returnSize)
                {
                    (*returnSize)++;
                    res[*returnSize-1]=nums1[i];
                }  
            }
        }
    }
    return res;
}
