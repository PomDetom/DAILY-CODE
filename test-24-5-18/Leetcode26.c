//26. ɾ�����������е��ظ���
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