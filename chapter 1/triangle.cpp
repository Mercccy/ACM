#include<stdio.h>

int main(){
    int side1, side2, side3;

    // 输入三边长度
    printf("请输入三角形的三条边长度（用空格分隔）：");
    scanf("%d %d %d", &side1, &side2, &side3);
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1){
        if (side1*side1 + side2*side2 == side3*side3 || side1*side1 + side3*side3 == side2*side2 || side2*side2 + side3*side3 == side1*side1){
            printf ("是直角三角形");
        }
        else{
            printf ("不是直角三角形");
        }
    }
    else {
        printf ("不是三角形");
    }
    return 0;
}