#include <stdio.h>

int main()
{
    int A,B,NUMBER;
    float C,SALARY;
    scanf("%d %d %f",&A,&B,&C);
    NUMBER = A;
    SALARY = B * C;
    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %0.2f\n",SALARY);
}
