#include <stdio.h>
int main()
{
    int N,i,in = 0,out = 0;

    int X;

    scanf("%d",&N);
    for(i = 1; i <= N; i++){
        scanf("%d",&X);
        if(X >= 10 && X <= 20)
            in++;
        else
            out++;
    }
    printf("%d in\n%d out\n",in++,out++);

    return 0;
}

