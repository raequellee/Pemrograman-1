#include <stdio.h>

int main() {
    int batas;
    scanf("%d", &batas);
    int angka[batas];

    for (int i = 0; i < batas; i++) {
        scanf("%d", &angka[i]);
    }

    for (int i = 0; i < batas; i++) {
        printf("%d ", angka[i] * (i + 1));
    }

    return 0;
}