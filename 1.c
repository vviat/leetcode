/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* twoSum(int* nums, int numsSize, int target) {
    int *n = NULL;
    n = malloc(2*sizeof(int));
    n[0]= n[1]= 0;
    for(int i = 0; i < numsSize;i++){
        for(int j = i + 1; j < numsSize;j++){
            if(nums[i] + nums[j] == target) {
                n[0] = i;
                n[1] = j;
                return n;
            } 
        }
    } 
    return n;
}
