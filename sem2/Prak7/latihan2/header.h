#include <string.h>
#include <stdio.h>
int indek;
typedef struct{
    int nim;// untuk nim mahasisiwa
    char nama[100];// untuk nama mahasisiwa
    char jurusan[100];// untuk jurusan mahasiswa
}data_mh;
int binarysearch(int n, data_mh arr0fint[n], int target);
void bubblesort(int jumlah, data_mh arr0fint[jumlah]);
