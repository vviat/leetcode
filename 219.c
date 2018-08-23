bool containsNearbyDuplicate(int* nums, int numsSize, int k)
{
    //nums[i] = num[j]  &&  |i-j| <= k
    int i=0,j=0;
    if(numsSize > k)
    {
        for(i=0;i<numsSize-k;i++)
        {
            for(j=i+1;j<=i+k;j++)
            {
                if(nums[i] == nums[j])
                    return true;
            }
        }
        for(i=numsSize-k;i<numsSize;i++)
        {
            for(j=i+1;j<numsSize;j++)
                if(nums[i] == nums[j])
                    return true;
        }
    }
    else
    {
        for(i=0;i<numsSize;i++)
        {
            for(j=i+1;j<numsSize;j++)
                if(nums[i] == nums[j])
                    return true;
        }
    }

    return false; 
}
