//88.合并两个有序数组
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
   
    if (m == 0)
    {
        while (n > 0)
        {
            nums1[n - 1] = nums2[n - 1];
            n--;
        }
    }   
    else if (n == 0)
    {
        ;
    }
    else
    {
        while (m + n > 0)
        {
            if (m == 0)
            {
                while (n > 0)
                {
                    nums1[n - 1] = nums2[n - 1];
                    n--;
                }
                break;
            }
            else if (n == 0)
            {
                break;
            }
            else
            {
                if (nums1[m - 1] >= nums2[n - 1])
                {
                    nums1[m + n - 1] = nums1[m - 1];
                    m--;
                }
                else
                {
                    nums1[m + n - 1] = nums2[n - 1];
                    n--;
                }
            }
        }
    }
    
}