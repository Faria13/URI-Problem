#include <stdio.h>
int main()
{
    int T,i;
    float a,b,c,average;
    scanf("%d",&T);

    for(i = 1; i <= T; i++){
        scanf("%f %f %f",&a,&b,&c);

        average = (a*2+b*3+c*5)/10.0;

        printf("%0.1f\n",average);
    }
    return 0;

}


