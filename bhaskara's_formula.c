#include <stdio.h>
#include <math.h>
int main()
{
    double A,B,C,p,R1,R2,x,d;

    scanf("%lf %lf %lf",&A,&B,&C);
    if(A==0)
        printf("Impossivel calcular\n");

    else if(B<A && B<C)
        printf("Impossivel calcular\n");
    else{
        x = B*B-4*A*C;
        p = sqrt(x);
        d = 2*A;
        R1= (-B+p)/d;
        R2= (-B-p)/d;
        printf("R1 = %0.5lf\n",R1);
        printf("R2 = %0.5lf\n",R2);
    }

    return 0;
}
