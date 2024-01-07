#include<stdio.h>

int main(){
    while (1){
        int a, b, c;
        printf("请输入正整数a,b,c:");
        scanf("%d %d %d", &a, &b, &c);

        if (a == 0 && b == 0 & c == 0){
            break;
        }
        printf("%.*lf\n", c, (double)a / b);
    }
    return 0;
}