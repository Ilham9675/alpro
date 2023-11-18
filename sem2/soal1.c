#include <stdio.h>
#include <string.h>

typedef struct
{
    int nim;
    char nama[100];
    char kelas[10];
} namaBungkusan;

int main()
{
    int baris, kolom;
    scanf("%d %d", &baris, &kolom);
    namaBungkusan matriks[baris][kolom];
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            scanf("%d %s %s", &matriks[i][j].nim, &matriks[i][j].nama, &matriks[i][j].kelas);
        }
    }
    printf("=================================\n");
    for (int i = 0; i < baris; i++)
    {
        printf("Baris ke-%d:\n", i);
        for (int j = 0; j < kolom; j++)
        {
            printf("Variabel 1 : %d\n",matriks[i][j].nim);
            printf("Variabel 2 : ");
            for(int k = 0;k < strlen(matriks[i][j].nama);k++){
                printf("%c",matriks[i][j].nama[k]);
            }
            printf("\n");
            printf("Variabel 3 : ");
            for(int k = 0;k < strlen(matriks[i][j].kelas);k++){
                printf("%c",matriks[i][j].kelas[k]);
            }
            printf("\n");
            printf("---------------------------------\n");
        }
        printf("=================================\n");
    }
    return 0;
}
