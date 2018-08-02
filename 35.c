    int searchInsert(int* nums, int numsSize, int target) {
        int l=0,r=numsSize-1,pos=0,mid;
        while(l<=r){
            mid=(l+r)>>1;
            if(nums[mid]==target)return mid;
            else if(target>nums[mid]){
                l=mid+1;pos=mid+1;
            }else{
                r=mid-1;
                pos=mid;
            } 
        }
        return pos;
    }
