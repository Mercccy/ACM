#include<stdio.h>
#include<math.h>

int main(){
    double sum = 0;
    double term = 0;
    int count = 0;
    do
    {
        term = 1.0/(count * 2 + 1);
        
        if (count % 2 == 0){
            sum += term;
        }
        else{
            sum -= term;
        }
        count ++;
    } while (term >= 1e-6);
    printf("%d\n", count);
    printf("%f", sum);
    return 0;
}