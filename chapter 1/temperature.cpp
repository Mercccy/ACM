#include<stdio.h>
int main(){
    printf("请输入华氏温度：");
    double f;
    scanf ("%lf", &f);
    printf("对应的摄氏度为：%.3f", 5*(f-32)/9);
    return 0;
}

