#include <stdio.h>
int main()
{
    int a,b,dis;
    double c;
    scanf("%d %d",&a,&b);
    dis = a * b;
    c = dis/12.0;
    printf("%0.3lf\n",c);

    return 0;
}

