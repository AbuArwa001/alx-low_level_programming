#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i <= 99; i++) {
        for (j = (i == 40) ? 91 : 1; j <= 99; j++) {
            if (i == 93 && j == 95)
                break;

            putchar('0' + i / 10);
            putchar('0' + i % 10);
            putchar(' ');
            putchar('0' + j / 10);
            putchar('0' + j % 10);
            if (!(i == 99 && j == 99) && !(i == 93 && j == 94)) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return 0;
}
