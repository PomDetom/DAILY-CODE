#include <stdio.h>

int main()
{
    //BC61 牛牛的二三七整除
    int num = 0;
    int count = 0;
    int arr[3] = { 2, 3, 7 };
    scanf("%d", &num);

    for (int i = 0; i < 3; i++)
    {
        if (num % arr[i] == 0)
        {
            printf("%d ", arr[i]);
            count++;
        }
    }
    
    if (count == 0)
    {
        printf("n");
    }
    
    return 0;
}