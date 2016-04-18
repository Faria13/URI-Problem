#include <stdio.h>
int main()
{
    int A,B,D,E;
    float C,F,valor_a_pagar;
    scanf("%d %d %f",&A,&B,&C);
    scanf("%d %d %f",&D,&E,&F);

    valor_a_pagar = (B*C)+(E*F);

    printf("VALOR A PAGAR: R$ %0.2f\n",valor_a_pagar);
    return 0;
}
