#include <stdio.h>

int main()
{
    //BC44 小乐乐与欧几里得
    long int n = 0;
    long int m = 0;
    scanf("%ld %ld", &n, &m);
    long int min = n<m?n:m;
    long int max = n>m?n:m;
    long int con = 0;

    while (con = max%min)
    {
        max = min;
        min = con;
    }
    con = min;
    
    printf("%ld", con+(n*m/con));

    return 0;
}