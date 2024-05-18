//26. 删除有序数组中的重复项
int removeDuplicates(int* nums, int numsSize) {
    
    int left = 1;
    int right = 1;
    
    for (; right < numsSize; right++)
    {
        if (nums[left - 1] != nums[right])
        {
            nums[left] = nums[right];
            left++;
        }
    }
   
    return left;    
}   