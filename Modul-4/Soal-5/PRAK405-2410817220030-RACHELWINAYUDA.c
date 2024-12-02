#include <stdio.h>

int hitung_kelipatan(int n, int kelipatan) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        int baris_total = 0;
        printf("(");
        for (int j = i; j >= 1; j--) {
            baris_total += j * kelipatan;
            printf("%d * %d", j, kelipatan);
            if (j > 1) {
                printf(") + (");
            }
        }
        printf(") = %d\n", baris_total);
        total += baris_total;
    }
    return total;
}

int main() {
    int n, kelipatan;
    scanf("%d", &n);
    scanf("%d", &kelipatan);
    int total = hitung_kelipatan(n, kelipatan);
    printf("%d\n", total);
    return 0;
}