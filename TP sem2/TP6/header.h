/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal
TP6 dalam mata kuliah algoritma dan pemlograman 2
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
#include <stdio.h>
#include <string.h>

typedef struct{
    char nama[100];
    char nama_sihir[100];
    char code;
    int magicpower;
}ps;

void masukan(int jumlah,ps asrama[jumlah],char cip);
void insert_sort(int jumlah,ps asrama[jumlah],char tipe[100]);
void merge(int n1,ps asrama1[n1],int n2,ps asrama2[n2],int jumhasil,ps hasil[jumhasil], char tipe[100]);