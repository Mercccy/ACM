#include<stdio.h>
int main()
{
    int n;
    printf("请输入三位数：");
    scanf("%d", &n);
    printf("个位数是：%d", n%10);
    printf("十位数是：%d", n/10%10);
    printf("百位数是：%d", n/100);
    int m = n%10*100 + n/10%10*10 + n/100;
    printf("反转后的数字是：%d", m);
}