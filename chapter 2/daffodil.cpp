#include<stdio.h>

int main() {
    int hundredsPlace, decimalPlace, singlePlace;
    for (int i = 100; i < 1000; i++) {
        hundredsPlace = i / 100;
        decimalPlace = (i / 10) % 10;
        singlePlace = i % 10;
         if (i == (hundredsPlace * hundredsPlace * hundredsPlace + 
                  decimalPlace * decimalPlace * decimalPlace + 
                  singlePlace * singlePlace * singlePlace)) {
            printf("%d \n", i);
        }
    }

    return 0;
}
