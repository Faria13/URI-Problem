#include <stdio.h>
int main()
{
    int N,i,count;
    scanf("%d",&N);
    for(i = 1; i <= N; i++){
        if(i == 3)
        count++;
        printf("%d %d %d",i,i*i,i*i*i);
        printf("\n");
    }
    return 0;
}


