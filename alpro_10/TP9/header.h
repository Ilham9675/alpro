/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal
TP9 dalam mata kuliah algoritma dan pemlograman
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
#include <stdio.h>
#include <string.h>
//membuat type struct untuk nama karakter jumlah health,attack,defense dan nama jurus karakter
typedef struct
{
    char nama[101];
    int health,attack,defense;
    char jurus[100];
}naruto;
//membuat type struct untuk kode serangan , nama karakter yang menyerang dan di serang
typedef struct
{
    char kode;
    char namatarget[100];
    char namapenyerang[100];
}pergerakan;
void scan_naruto(naruto *pok);// dekralasi fungsi untuk scan masukan user
void printf_naruto(int health1,int health2,int health3,int health4,char musuh[100]);// dekralasi fungsi untuk keluaran program untuk menampilkan desa siapa yang juara