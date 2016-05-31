#include <stdio.h>
int main()
{
    int N,i,factorial = 1;

    scanf("%d",&N);

    for(i = N; i >= 1; i--){
        factorial = factorial*i;
    }
    printf("%d\n",factorial);

    return 0;
}


