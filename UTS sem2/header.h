/*
Saya ilham akbar[2201017] mengerjakan soal
UTS dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <string.h>

typedef struct{
    char nama[100];// nama batangan
    int emas,logam,katalis,lainnya;// material 
    int emas_murni;// hasil penggabungan materian dan menggasilkan emas murni dan akan di sinpan di wadah ini
}batangan_emas;

void masukan(int jumlah,batangan_emas bahan[jumlah]);
void bubble(int jumlah,batangan_emas bahan[jumlah]);
void merge(int n1,batangan_emas bahan1[n1],int n2,batangan_emas bahan2[n2],int jumhasil,batangan_emas hasil[jumhasil]);
void insert(int jumlah,batangan_emas bahan[jumlah]);
void quick(int jumlah,batangan_emas bahan[jumlah],int l, int r);
void selection(int jumlah,batangan_emas bahan[jumlah]);