/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal kuis 2 dalam mata kuliah algoritma dan pemlograman 2
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
#include <stdio.h>
#include <string.h>

typedef struct{
    char nomer[10];// wadah untuk nomer pengawai
    char nama[50],jabatan[50];// wadah untuk nama dan jabatan pengawai
    long long gajip,tunjangan;// wadah untuk gaji pokok dan tunjangan 
}pegawai;


void sorting(int a,pegawai pg[],char urutan[20]);// untuk mengsorting data
void binarysearch1(int n, pegawai pg[], long long dicari,char urutan[20]);// untuk mencari nilai yang di cari
