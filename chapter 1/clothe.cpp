#include<stdio.h>

int main(){
    const int clothePrize = 95;
    printf("请输入购买衣服的件数：");
    int clotheNumber;
    double realPrize;
    scanf("%d", &clotheNumber);
    double totalPrize = clotheNumber * clothePrize;
    if (totalPrize >= 300){
        realPrize = totalPrize * 0.85;
        printf("打折后的衣服价格：%.2f", realPrize);
    }
    else {
        printf("衣服价格：%.2f", totalPrize);
    }
        
    return 0;

}