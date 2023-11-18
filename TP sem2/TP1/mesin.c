/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal
TP1 dalam mata kuliah algoritma dan pemlograman 2
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
#include "header.h"
// tidak bisa pake prosedur dan fungsi dikarenakan hasilnya akab berbeda tapi kode nya sama dan di cspc nya terindetifikasi salah
void transpose(int baris, int kolom, int terbanyak, int matriks[terbanyak][terbanyak]) // untuk  mentranpose matriks
{
    printf("\nMatriks akhir hasil transpose :\n");
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            if (j == 0)
            { // menampilkan matriks
                printf("%d", matriks[j][i]);
            }
            else
            {
                printf(" %d", matriks[j][i]);
            }
        }
        printf("\n");
    }
    printf("You are the Winner!\n");
}

void refleksi(int baris, int kolom, int terbanyak, int matriks[terbanyak][terbanyak])
{ // untuk menrefleksi matriks
    printf("\nMatriks akhir hasil refleksi :\n");
    int cermin_matriks[kolom][baris]; // wadah untuk cerminan matriks
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cermin_matriks[i][j] = matriks[i][kolom - (j + 1)]; // mencerminkan matrik dengan membalik indek j atau kolom
            if (j == 0)
            { // menampilkan matriks
                printf("%d", cermin_matriks[i][j]);
            }
            else
            {
                printf(" %d", cermin_matriks[i][j]);
            }
        }
        printf("\n");
    }
    printf("Oops You Lose the game!\n");
}

void tampilan_awal(int baris_awal, int kolom_awal, int awal[baris_awal][kolom_awal])
{ // untu menampilkan matriks awal
    for (int i = 0; i < baris_awal; i++)
    {
        for (int j = 0; j < kolom_awal; j++)
        {
            if (j == 0)
            {
                printf("%d", awal[i][j]);
            }
            else
            {
                printf(" %d", awal[i][j]);
            }
        }
        printf("\n");
    }
}
// untuk menindahkan matrik satu ke matrik dua
void penyalin(int baris, int kolom, int terbanyak, int matriks[terbanyak][terbanyak], int matriks_sementara[terbanyak][terbanyak])
{
    for (int j = 0; j < baris; j++)
    {
        for (int k = 0; k < kolom; k++)
        {
            matriks[j][k] = matriks_sementara[j][k];
        }
    }
}

int terbesar(int baris, int kolom, int matriks[baris][kolom])
{ // untuk mencari nilai terbanyak antara baris dan kolom
    int jumlahbaris = 0;
    int jumlahkolom = 0;

    for (int i = 0; i < baris; i++)
    {
        jumlahbaris += matriks[i][0];
    }
    for (int i = 0; i < kolom; i++)
    {
        jumlahkolom += matriks[0][i];
    }

    return jumlahbaris + jumlahkolom;
    ;
}

int pembanding(int baris, int kolom, int matriks[baris][kolom], int nilai_awal[baris][kolom])
{ // untuk membandingkan nilai matriks 1 dan matriks 2
    int cek = 0;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            if (matriks[i][j] == nilai_awal[i][j])
            {
                cek++;
            }
        }
    }
    return cek;
}