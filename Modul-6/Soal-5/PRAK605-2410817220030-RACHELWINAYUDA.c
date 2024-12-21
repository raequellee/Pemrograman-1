#include <stdio.h>
#include <string.h>

int main() {
    int ordo;
    scanf("%d", &ordo);

    int matrikspertama[ordo][ordo];
    int matrikskedua[ordo][ordo];
    int hasil[ordo][ordo];
    char awalnama1[100];
    char namamatriks1[100];
    char awalnama2[100];
    char namamatriks2[100];

    getchar();
    scanf("%s %s", &awalnama1, &namamatriks1);
    namamatriks1[strcspn(namamatriks1, "\n")]= '\0';

    for(int baris=0; baris<ordo; baris++){
        for(int kolom=0; kolom<ordo; kolom++){
            scanf("%d", &matrikspertama[baris][kolom]);
            }
        }
    getchar();

    scanf("%s %s", &awalnama2, &namamatriks2);
    namamatriks2[strcspn(namamatriks2, "\n")]= '\0';

    for(int baris=0; baris<ordo; baris++){
        for(int kolom=0; kolom<ordo; kolom++){
            scanf("%d", &matrikskedua[baris][kolom]);
        }
    }

    for(int i=0; i<ordo; i++){
    for(int j=0; j<ordo; j++){
        hasil[i][j]=0;
    for(int k=0; k<ordo; k++){
        hasil[i][j]+=matrikspertama[i][k]*matrikskedua[k][j];
    } } }

    printf("\n");
    printf("Matriks %sX%s \n", namamatriks1, namamatriks2);
    for(int i=0; i<ordo; i++){
        for(int j=0; j<ordo; j++){
            printf("%d ", hasil[i][j]);
        } printf("\n");
    }
    return 0;
}