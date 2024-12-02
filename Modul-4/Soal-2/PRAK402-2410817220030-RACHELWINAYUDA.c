#include <stdio.h>

int main() {
    int batas;
    
    scanf("%d", &batas);
    for (int i = 1; i <= batas; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    if (batas % 2 == 0) {
        for (int i = batas; i >= 2; i -= 2) {
            printf("%d ", i);
        }
    } else {
        for (int i = batas - 1; i >= 2; i -= 2) {
            printf("%d ", i);
        }
    }
    return 0;
}