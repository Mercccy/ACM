#include <stdio.h>

int main() {
    int input_num, min_num = 1001, max_num = -1001;  // 初始化最小值和最大值
    int count = 0, sum = 0;

    printf("Enter integers (up to 1000): \n");

    while (scanf("%d", &input_num) == 1) {
        // 更新最小值和最大值
        if (input_num < min_num) {
            min_num = input_num;
        }
        if (input_num > max_num) {
            max_num = input_num;
        }

        sum += input_num;
        count++;
    }

    if (count > 0) {
        // 输出结果，保留三位小数
        printf("Minimum: %d\n", min_num);
        printf("Maximum: %d\n", max_num);
        printf("Average: %.3f\n", (double)sum / count);
    } else {
        printf("No valid input.\n");
    }

    return 0;
}
