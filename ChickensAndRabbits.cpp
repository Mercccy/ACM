#include<stdio.h>
int main()
{
    int RabbitNumber, ChickenNumber, TotalNumber, LegNumber;
    printf("请输入总数量：");
    scanf("%d", &TotalNumber);
    printf("请输入总的腿的数量：");
    scanf("%d", &LegNumber);
    RabbitNumber = (4*TotalNumber - LegNumber)/2;
    ChickenNumber = TotalNumber - RabbitNumber;
    if (TotalNumber % 2 == 1 || RabbitNumber<0 || ChickenNumber<0)
        printf ("No answer \n");
    else
        printf("兔子数量：%d \n 鸡数量：%d", RabbitNumber, ChickenNumber);
    return 0;
}