/*Given an array of integers, return indices of the two numbers such that they add up to a specific target.
 You may assume that each input would have exactly one solution, and you may not use the same element twice.*/
/*
  Note: The returned array must be malloced, assume caller calls free().
*/
int* twoSum(int* nums, int numsSize, int target) {
    int i, j;
    int *x = malloc(2*sizeof(int));
    for(i=0;i<numsSize;i++) {
        j = 0;
        while(j!=i) {
            if(nums[i] + nums[j] == target) {
                x[0] = j;
                x[1] = i;
                break;
            }
            j++;
        }
    }
    return x;
}
