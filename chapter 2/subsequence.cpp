#include <stdio.h>

int main() {
    int n, m;
    int caseNumber = 1; // 用于记录Case编号

    while (1) {
        double sum = 0; // 初始化sum变量
        printf("请输入n, m: ");
        scanf("%d %d", &n, &m);

        if (n == 0 && m == 0) {
            break; // 结束循环
        }

        if (n < m) {
            for (int i = n; i <= m; i++) {
                sum += 1.0 / (i * i);
            }

            printf("Case %d: %.5lf\n", caseNumber, sum);
            caseNumber++;
        }
    }

    return 0;
}