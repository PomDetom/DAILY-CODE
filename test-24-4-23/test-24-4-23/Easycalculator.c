#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    //BC77 简单计算器
    //如果操作数和运算符号均合法，则输出一个表达式，
    //操作数1运算符操作数2=运算结果，各数小数点后均保留4位，数和符号之间没有空格。
    //如果输入的运算符号不包括在（ + 、 - 、 * 、 / ）范围内，
    //输出“Invalid operation!”。当运算符为除法运算，即“ / ”时。
    // 如果操作数2等于0.0，则输出“Wrong!Division by zero!”。

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