#include <stdio.h>

int main() {
    int kelipatan;
    char simbol;

    scanf("%d", &kelipatan);
    scanf(" %c", &simbol);

    for (int i = 1; i <= 50; i++) {
        if (i % kelipatan == 0) {
            printf("%c ", simbol);
        } else {
            printf("%d ", i);
        }
    }
    return 0;
}