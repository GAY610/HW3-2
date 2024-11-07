#include <stdio.h>
#include <ctype.h>


char* uppercase(const char* str) {
    static char result[100];
    int i = 0;

    while (str[i] != '\0') {
        result[i] = toupper(str[i]);
        i++;
    }
    result[i] = '\0';
    return result;
}


char* lowercase(const char* str) {
    static char result[100];
    int i = 0;

    while (str[i] != '\0') {
        result[i] = tolower(str[i]);
        i++;
    }
    result[i] = '\0';
    return result;
}

int main(void)
{
    char text[100];

    printf("輸入一個英文字串: ");
    scanf("%99s", text);

    printf("Original: %s\n", text);


    printf("Uppercase: %s\n", uppercase(text));
    printf("Lowercase: %s\n", lowercase(text));

    return 0;
}