#include<stdio.h>
#include<math.h>

int main() {
    const double pi = acos(-1.0); // 使用 acos(-1.0) 表示 π

    printf("请输入角度的大小：");
    double angle;
    scanf("%lf", &angle); // 使用 %lf 来读取 double 类型的数据

    if (angle < 0 || angle > 360) {
        printf("No answer");
    } else {
        double angleRad = angle / 180.0 * pi;
        printf("sin = %f\n", sin(angleRad));
        printf("cos = %f\n", cos(angleRad));
    }

    return 0;
}
