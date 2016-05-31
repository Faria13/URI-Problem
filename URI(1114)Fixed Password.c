#include <stdio.h>
int main()
{
    int num;
    while(scanf("%d",&num)==1){
        if(num == 2002)
            printf("Acesso Permitido\n");
        else
            printf("Senha Invalida\n");
        if(num == 2002)
            break;
    }
    return 0;
}


