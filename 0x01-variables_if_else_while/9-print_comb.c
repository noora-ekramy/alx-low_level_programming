#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i < 10; i++) {
        for (j = i; j < 10; j++) {
            putchar((i * 10 + j) / 10 + '0');
            putchar((i * 10 + j) % 10 + '0');
            if (i != 9 || j != 9) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return 0;
}
