#include <stdio.h>
int main()
{
    int A,B,temp;
    scanf("%d%d",&A,&B);

    if(A>B){
        temp = A;
        A = B;
        B = temp;

        if(B>A && B%A == 0)
            printf("Sao Multiplos\n");
        else
            printf("Nao sao Multiplos\n");
    }
    else{
        if(B>A && B%A == 0)
            printf("Sao Multiplos\n");
        else
            printf("Nao sao Multiplos\n");
    }

    return 0;
}


