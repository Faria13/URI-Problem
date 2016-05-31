#include <stdio.h>
int main()
{
    int X,Y,T,i;
    double a;

    scanf("%d",&T);

    for(i = 1; i <= T; i++){
        scanf("%d %d",&X,&Y);
        a = (float) X/Y;
        if(Y == 0){
            printf("divisao impossivel\n");
        }
        else{
            printf("%0.1lf\n",a);
        }
    }
    return 0;
}


