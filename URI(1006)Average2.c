#include <stdio.h>

int main()
{
    float A,B,C,MEDIA,average;

    scanf("%f %f %f",&A,&B,&C);

    average = (A*2 + B*3 + C*5)/10.0;

    MEDIA = average;

    printf("MEDIA = %0.1f\n",MEDIA);

    return 0;
}
