#include <stdio.h>
//BC56 �ж���ĸ
int main()
{
    char input = 0;
    scanf("%c", &input);

    if ((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z'))
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }

    return 0;
}