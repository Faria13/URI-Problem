#include <stdio.h>
int main()
{
    int N,minutes,hours,seconds,a;
    scanf("%d",&N);
    hours = N/3600;
    a = N%3600;
    minutes = a/60;
    seconds = a%60;
    printf("%d:%d:%d\n",hours,minutes,seconds);
    return 0;
}


