#include <stdio.h>


int power(int base, int exponent) {

    if (exponent == 1) {
        return base;
    }

    return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;

    printf("請輸入底數: ");
    scanf("%d", &base);

    printf("請輸入指數(>= 1): ");
    scanf("%d", &exponent);

    if (exponent >= 1) {
        printf("%d 的 %d 次方為: %d\n", base, exponent, power(base, exponent));
    }
    else {
        printf("指數必須大於或等於 1。\n");
    }

    return 0;
}