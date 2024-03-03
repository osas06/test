#include <stdio.h>

int main() {
    int x = 0;

    // Goto etiketi
    start:

    printf("x'in degeri: %d\n", x);
    x++;

    // Koşul kontrolü
    if (x < 5) {
        goto start; // Etikete geri dön
    }

    return 0;
}
