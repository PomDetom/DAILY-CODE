#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

void* my_memmove(void* str1, const void* str2, size_t num)
{
    assert(str1 && str2);
    char* ret = str1;

    if (str1 > str2)//memmove
    {
        while (num--)
        {
            *((char*)str1 + num) = *((char*)str2 + num);
        }
    }
    else//memcpy
    {
        while (num--)
        {
            *(char*)str1 = *(char*)str2;
            str1 = (char*)str1 + 1;
            str2 = (char*)str2 + 1;
        }
    }
    return ret;
}

int main()
{
    //Ä£ÄâÊµÏÖmemmove
    char arr[] = { "lianximove" };
    int arr2[] = { 1,2,3,4,5,6,7 };

    //void* ret = my_memmove(arr + 4, arr, 6);
    void* ret = my_memmove(arr, arr + 3, 7);
    void* ret2 = my_memmove(arr2 + 2, arr2, 16);
    printf("%s\n", arr);
    int n = 0;
    for (n = 0; n < 7; n++)
    {
        printf("%d", arr2[n]);
    }

    return 0;
}