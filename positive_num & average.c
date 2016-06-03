#include <stdio.h>
int main()
{
    int i,pos_num;

    double num,average,sum = 0.0;
    pos_num = 0;
    for(i = 1; i <= 6; i++){
        scanf("%lf",&num);
        if(num > 0){
            pos_num++;
            sum = sum + num;
        }
    }
    average = sum/pos_num;

    printf("%d valores positivos\n",pos_num);
    printf("%0.1lf\n",average);

    return 0;
}
