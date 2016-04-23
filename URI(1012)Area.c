#include <stdio.h>

#define PI 3.14159

int main()
{
    float A,B,C,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;

    scanf("%f %f %f",&A,&B,&C);

    TRIANGULO = .5*A*C;

    CIRCULO = PI*C*C;

    TRAPEZIO = .5*(A+B)*C;

    QUADRADO = B*B;

    RETANGULO = A*B;

    printf("TRIANGULO: %0.3f\n",TRIANGULO);
    printf("CIRCULO: %0.3f\n",CIRCULO);
    printf("TRAPEZIO: %0.3f\n",TRAPEZIO);
    printf("QUADRADO: %0.3f\n",QUADRADO);
    printf("RETANGULO: %0.3f\n",RETANGULO);

    return 0;




}
