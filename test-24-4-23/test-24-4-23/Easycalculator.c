#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    //BC77 �򵥼�����
    //�����������������ž��Ϸ��������һ�����ʽ��
    //������1�����������2=������������С����������4λ�����ͷ���֮��û�пո�
    //��������������Ų������ڣ� + �� - �� * �� / ����Χ�ڣ�
    //�����Invalid operation!�����������Ϊ�������㣬���� / ��ʱ��
    // ���������2����0.0���������Wrong!Division by zero!����

    double a = 0;
    double b = 0;
    char c = 0;
    scanf("%lf%c%lf", &a, &c, &b);

    //if (c == '+')
    //{
    //    printf("%.4f%c%.4f=%.4f", a, c, b, a + b);
    //}
    //else if (c == '-')
    //{
    //    printf("%.4f%c%.4f=%.4f", a, c, b, a - b);
    //}
    //else if (c == '*')
    //{
    //    printf("%.4f%c%.4f=%.4f", a, c, b, a * b);
    //}
    //else if (c == '/')
    //{
    //    if (b == 0)
    //    {
    //        printf("Wrong!Division by zero!");
    //    }
    //    else
    //    {
    //        printf("%.4f%c%.4f=%.4f", a, c, b, a / b);
    //    }
    //}
    //else
    //{
    //    printf("Invalid operation!");
    //}
    switch (c)
    {
    case'+':
        printf("%.4f%c%.4f=%.4f", a, c, b, a + b);
        break;
    case'-':
        printf("%.4f%c%.4f=%.4f", a, c, b, a - b);
        break;
    case'*':
        printf("%.4f%c%.4f=%.4f", a, c, b, a * b);
        break;
    case'/':
        if (b == 0)
            printf("Wrong!Division by zero!");
        else
            printf("%.4f%c%.4f=%.4f", a, c, b, a / b);
        break;
    default:
        printf("Invalid operation!");
        break;
    }

    return 0;
}