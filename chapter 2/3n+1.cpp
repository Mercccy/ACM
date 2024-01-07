#include<stdio.h>
// 考虑溢出的问题，所以采用long long，但是由于scanf的输入
// 是不一样的，一个是%d，另一个是%lld, 不方便记忆
// 因此，这个就采用了转换的方法
// 最终都会变成1
int main(){
    int n2, count;
    scanf ("%d", &n2);
    long long n = n2;
    while (n > 1 && n<= 10^9)
    {
        if(n % 2 == 1){
            n = n*3 + 1;
        }
        else{
            n /= 2;
        }
        count ++;
    }
    printf ("%d", count);
    return 0;
}