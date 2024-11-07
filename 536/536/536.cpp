#include <stdio.h>


void hanoi(int n, char source, char auxiliary, char target) {
    if (n == 1) {
        printf("�N�L�l�q %c ���ʨ� %c\n", source, target);
    }
    else {
        hanoi(n - 1, source, target, auxiliary);


        printf("�N�L�l�q %c ���ʨ� %c\n", source, target);


        hanoi(n - 1, auxiliary, source, target);
    }
}

int main() {
    int n;

    printf("�п�J�L�l���ƶq: ");
    scanf("%d", &n);

    printf("���ʶ��Ǧp�U�G\n");
    hanoi(n, 'A', 'B', 'C');

    return 0;
}