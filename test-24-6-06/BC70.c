#include <stdio.h>
//BC70 ���㵥λ��Ծ����
int main()
{
    int t = 0;
    
    while (scanf("%d", &t) != EOF)
    {
        if (t > 0)
        {
            printf("1\n");
        }
        else if (t == 0)
        {
            printf("0.5\n");
        }
        else
        {
            printf("0\n");
        }
    }
    
    return 0;
}