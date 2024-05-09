#include <stdio.h>

int main()
{
   //BC42 Ğ¡ÀÖÀÖ¶¨ÄÖÖÓ
   int hour = 0;
   int minute = 0;
   int k = 0;
   scanf("%d:%d %d", &hour, &minute, &k);
   hour = ((k + minute)/60 + hour)%24;
   minute = (minute + k)%60;

   printf("%02d:%02d", hour, minute);
   
    return 0;
}