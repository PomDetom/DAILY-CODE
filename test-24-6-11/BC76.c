#include <stdio.h>
//BC76 [NOIP2008]ISBNºÅÂë
int main()
{
    char ISBN[13] = { 0 };
    int i = 0;
    int j = 1;
    int num = 0;
    
    scanf("%s", ISBN);
    for (i = 0; i < 11; i++)
    {
        if (ISBN[i] != '-')
        {
            num += (ISBN[i] - '0') * j;
            j++;
        }
    }
    int judge = num % 11;

    if ((judge == 10 && ISBN[12] == 'X') || (judge == ISBN[12] - '0'))
    {
        printf("Right\n");
    }
    else
    {
        if (judge == 10)
        {
            ISBN[12] = 'X';
        }
        else
        {
            ISBN[12] = judge + '0';
        }
        printf("%s", ISBN);
    }
    
    return 0;
}