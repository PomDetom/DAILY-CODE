#include <stdio.h>
#define PI 314

int main()
{
    //BC39 Å£Å£µÄË®±­
    int h = 0;
    int r = 0;
    scanf("%d %d", &h, &r);
    long i = 1;
    long v = PI*h*r*r;
    i = 1000000/v + 1;

    printf("%ld", i);

    return 0;
}