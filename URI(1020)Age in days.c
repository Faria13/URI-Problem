#include <stdio.h>
int main()
{
    int ano,dia,mes,n,a;
    scanf("%d",&n);
    ano = n/365;
    printf("%d ano(s)\n",ano);
    a = n%365;
    mes = a/30;
    printf("%d mes(es)\n",mes);
    dia = a%30;
    printf("%d dia(s)\n",dia);
    return 0;
}
