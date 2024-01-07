#include<stdio.h>
int main(){
    printf("请输入正整数：");
    int Num;
    scanf("%d", &Num);
    printf("Sum: %d", Num*(Num+1)/2);
    return 0;
}