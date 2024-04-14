#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

void* my_memmove(void* str1, const void* str2, size_t num)
{
    assert(str1 && str2);
    char* ret = str1;

    if (str1 > str2)//memmove
    {
        str1 = (char*)str1 + num - 1;
        str2 = (char*)str2 + num - 1;
        while (num--)
        {
            *(char*)str1 = *(char*)str2;
            str1 = (char*)str1 - 1;
            str2 = (char*)str2 - 1;
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

    //void* ret = my_memmove(arr + 4, arr, 6);
    void* ret = my_memmove(arr, arr + 3, 7);
    printf("%s", arr);

    return 0;
}