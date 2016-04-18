#include <stdio.h>
int main()
{
    char name[20];
    double a,b,TOTAL;
    scanf("%s %lf %lf",&name,&a,&b);
    TOTAL = (b * .15) + a;
    printf("TOTAL = R$ %0.2lf\n",TOTAL);
    return 0;
}
