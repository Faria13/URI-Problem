#include <stdio.h>
int main()
{
    int N,i,num;

    scanf("%d",&N);
    for(i = 1; i <= N; i++){
       scanf("%d",&num);
       if(num == 0){
            printf("NULL\n");
       }
       else if(num > 0 && num%2 != 0){
                printf("ODD POSITIVE\n");
       }
       else if(num < 0 && num%2 != 0){
                printf("ODD NEGATIVE\n");
       }
       else if(num > 0 && num%2 != 1){
                printf("EVEN POSITIVE\n");
       }
       else if(num < 0 && num%2 != 1){
               printf("EVEN NEGATIVE\n");
       }
    }
    return 0;
}

