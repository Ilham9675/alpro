#include <stdio.h>

int main()
{
    int baris, kolom;
    printf("masukan jumlah baris matriks :");
    scanf("%d", &baris);
    printf("masukan jumlah kolom matriks :");
    scanf("%d", &kolom);
    int matriks[baris][kolom];
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            scanf("%d", &matriks[i][j]);
        }
    }
    int perputaran = 0;
    int arah;
    printf("ketik 0 untuk ke kiri\nketik 1 untuk ke kanan\n");
    printf("masukan arahnya :");
    scanf("%d", &arah);

    printf("masukan jumlah putaran :");
    scanf("%d", &perputaran);

    if (arah == 0)
    {
        for (int k = 0; k < perputaran; k++)
        {
            int matriks_sementara[kolom][baris];
            for (int i = 0; i < baris; i++)
            {
                for (int j = 0; j < kolom; j++)
                {
                    matriks_sementara[kolom - (j + 1)][i] = matriks[i][j];
                }
            }
            int wadah = baris;
            baris = kolom;
            kolom = wadah;
            printf("\n");
            for (int i = 0; i < baris; i++)
            {
                for (int j = 0; j < kolom; j++)
                {
                    matriks[i][j] = matriks_sementara[i][j];
                    if (j == 0)
                    {
                        printf("%d", matriks[i][j]);
                    }
                    else
                    {
                        printf(" %d", matriks[i][j]);
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
    }
    else
    {
        for (int k = 0; k < perputaran; k++)
        {
            int matriks_sementara[kolom][baris];
            for (int i = 0; i < baris; i++)
            {
                for (int j = 0; j < kolom; j++)
                {
                    matriks_sementara[j][baris - (i + 1)] = matriks[i][j];
                }
            }
            int wadah = baris;
            baris = kolom;
            kolom = wadah;
            for (int i = 0; i < baris; i++)
            {
                for (int j = 0; j < kolom; j++)
                {
                    matriks[i][j] = matriks_sementara[i][j];
                    if (j == 0)
                    {
                        printf("%d", matriks[i][j]);
                    }
                    else
                    {
                        printf(" %d", matriks[i][j]);
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
    }

    return 0;
}