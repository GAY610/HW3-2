#include <stdio.h>


int power(int base, int exponent) {

    if (exponent == 1) {
        return base;
    }

    return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;

    printf("�п�J����: ");
    scanf("%d", &base);

    printf("�п�J����(>= 1): ");
    scanf("%d", &exponent);

    if (exponent >= 1) {
        printf("%d �� %d ���謰: %d\n", base, exponent, power(base, exponent));
    }
    else {
        printf("���ƥ����j��ε��� 1�C\n");
    }

    return 0;
}