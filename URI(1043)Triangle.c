#include <stdio.h>
int main()
{
    float A,B,C,Area,Perimetro;
    scanf("%f %f %f",&A,&B,&C);
    
    if(A+B>C && B+C>A && C+A>B){
            
        Perimetro = A+B+C;
        printf("Perimetro = %0.1f\n",Perimetro);
    }
    else {
        Area = .5*(A+B)*C;
        printf("Area = %0.1f\n",Area);
    }

    return 0;
}


