#include <stdio.h>
#include <math.h>
//BC73 计算一元二次方程
int main()
{
    double a,b,c;
    double x1,x2;

    while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
    {
        if (a == 0)
        {
            printf("Not quadratic equation\n");
            return 0;
        }

        double delta = b*b - 4*a*c;
        if (delta == 0)
        {
            x1 = (-b) / (2*a);
            if (x1 == 0)
            {
                printf("x1=x2=0.00\n");
            }
            else
            {
                printf("x1=x2=%.2f\n", x1);
            }
        }
        else if (delta > 0)
        {
            delta = pow(delta, 0.5);
            x1 = (-b - delta) / (2*a);
            x2 = (-b + delta) / (2*a);
            printf("x1=%.2f;x2=%.2f\n", x1, x2);
        }
        else if (delta < 0)
        {
            x1 = (((-1)*b) / (2*a));
            x2 = sqrt((-1)*delta) / (2*a);
            printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", x1, x2, x1, x2);
        }
    }

    return 0;
}