#include <stdio.h>
#include <string.h>

char* shiftAndReverse(char* str);
char* shift1(char* str);

int main() {
    char str[] = "abdef";
    
    char output3[100];
    char* output2;

    strcpy(output3, shiftAndReverse(str));
    output2 = shift1(output3);

    printf("%s\n", output2);

    return 0;
}

char* shiftAndReverse(char* str) {
    char result[100];
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        char ch = str[i];
        char shifted = (char) ((ch - 'a' + 1) % 26 + 'a');
        result[i] = shifted;
    }

    result[len] = '\0';
    return strdup(result);
}

char* shift1(char* str) {
    int len = strlen(str);
    char rev[100];

    for (int i = len - 1; i >= 0; i--) {
        char ch = str[i];
        rev[len - i - 1] = ch;
    }

    rev[len] = '\0';
    return strdup(rev);
}
