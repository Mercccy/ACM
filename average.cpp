#include<stdio.h>
int main(){
    int Num1, Num2, Num3;
    printf("请输入3个整数：");
    scanf ("%d %d %d", &Num1, &Num2, &Num3);
    double AverageNum = (double)(Num1 + Num2 + Num3)/3;
    printf("输入数的平均数：%f", AverageNum);
    printf("输入数的平均数：%.3f", AverageNum);
    return 0;
}