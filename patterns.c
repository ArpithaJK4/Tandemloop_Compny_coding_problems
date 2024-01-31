#include <stdio.h>

void printPattern();

int main() {
    printPattern();
    return 0;
}

void printPattern() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {

      

        int num = (i % 2 == 0) ? 1 : i + 1;
        for (int k = 0; k <= i; k++) {
            if (i != 0 && k != 0) {
                printf(" # %d", num);
                num = (i % 2 == 0) ? num + 1 : num - 1;
            } else {
                printf(" %d", num);
                num = (i % 2 == 0) ? num + 1 : num - 1;
            }
        }
        printf("\n");
    }
}
