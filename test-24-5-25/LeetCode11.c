//11. 盛最多水的容器
int maxArea(int* height, int heightSize) {

    int left = 0;
    int right = heightSize - 1;
    int cap = 0;

    while (left < right)
    {
        int minsize = 0;
        if (height[left] > height[right])
        {
            minsize = height[right];
        }
        else
        {
            minsize = height[left];
        }

        int cap_tem = (right - left) * minsize;
        if (cap_tem > cap)
        {
            cap = cap_tem;
        }

        if (height[left] > height[right])
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    
    return cap;
}