#include <stdio.h>

int main() {
    int angka1, angka2, i, j;

    scanf("%d", &angka1);
    scanf("%d", &angka2);

    if (angka1 < angka2) {
        for (i = angka1, j = angka2; i <= angka2 && j >= angka1; i++, j--) {
            printf("%d %d", i, j);
            if (i < angka2) {
                printf(" - ");
            }
        }
    } else {
        for (i = angka1, j = angka2; i >= angka2 && j <= angka1; i--, j++) {
            printf("%d %d", i, j);
            if (i > angka2) {
                printf(" - ");
            }
        }
    }
    return 0;
}