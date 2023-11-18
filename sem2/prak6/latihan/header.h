#include <stdio.h>
#include <string.h>

typedef struct{
    char nama[100];
    int nim;
}mh;

void merge(int n1,mh mahasiswa1[n1],int n2,mh mahasiswa2[n2],int jumhasil,mh hasil[jumhasil]);
void insert_sort(int jumlah,mh mahasiswa[jumlah]);
void masukan(int jumlah,mh mahasiswa[jumlah]);