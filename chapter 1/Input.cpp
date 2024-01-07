#include<stdio.h>
#include<math.h>
int main()
{
    int a, b;
    // Π的计算方式
    const double pi = acos(-1);
    // scanf中的占位符和变量的数据类型一一对应
    // 且每个变量前需要加“&”符号
    /* scanf("%d%d", &a, &b);
    printf("%d \n", a +b);
    return 0; */
    // 输出圆柱体的表面积
    double radius, height;
    // 在 scanf 函数中，占位符 %1f 应该是 %lf，用于读取 double 类型的数据
    // 是字母l,不是数字1
    printf("请输入半径：");
    scanf("%lf", &radius);

    printf("请输入高：");
    scanf("%lf", &height);
    
    printf("Pi = %.3f\n", pi);
    printf("Radius = %.3f\n", radius);
    printf("height = %.3f\n", height);
    printf("Area = %.3f\n", 2*pi*radius*radius + 2*pi*radius*height);
    return 0;
}