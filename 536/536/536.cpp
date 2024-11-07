#include <stdio.h>


void hanoi(int n, char source, char auxiliary, char target) {
    if (n == 1) {
        printf("將盤子從 %c 移動到 %c\n", source, target);
    }
    else {
        hanoi(n - 1, source, target, auxiliary);


        printf("將盤子從 %c 移動到 %c\n", source, target);


        hanoi(n - 1, auxiliary, source, target);
    }
}

int main() {
    int n;

    printf("請輸入盤子的數量: ");
    scanf("%d", &n);

    printf("移動順序如下：\n");
    hanoi(n, 'A', 'B', 'C');

    return 0;
}