#include <stdio.h>
//BC75 С�����Ƿ񱻽мҳ�
int main()
{
    int yuwen = 0;
    int shuxue = 0;
    int yingyu = 0;

    scanf("%d %d %d", &shuxue, &yuwen, &yingyu);
    if ((yuwen + shuxue + yingyu) / 3 < 60)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");    
    }

    return 0;
}