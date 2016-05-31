#include <stdio.h>
int main()
{
    int X,Y,i,sum,temp;
    
    sum = 0;
    scanf("%d %d",&X,&Y);
    if(X>Y){
        temp = X;
        X = Y;
        Y = temp;

    for(i = X; i <= Y; i++){
        if(i%13 != 0)
        sum += i;
    }
    printf("%d\n",sum);
  }
   else{
    for(i = X; i <= Y; i++){
        if(i%13 != 0)
        sum += i;
    }
    printf("%d\n",sum);
  }
    return 0;
}


