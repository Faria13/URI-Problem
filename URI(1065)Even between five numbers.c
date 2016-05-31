#include <stdio.h>
int main()
{
    int i,num,even_num = 0;

    for(i = 1; i <= 5; i++){
        scanf("%d",&num);
        if(num%2 == 0)
            even_num++;
    }
    printf("%d valores pares\n",even_num++);

    return 0;
}


