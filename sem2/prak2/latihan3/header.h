#include <stdio.h>
#include <string.h>
typedef struct{
    char nama[100];// untuk nama
    int nilai;// untuk nilai
}asprak;

typedef struct{
    char nama[100];// nama yang di cari
    char namatertinggi[100];// nama nilai tertinggi
    int nilai;// nilai tertinggi
    int baris;// baris nama 
    int kolom;// baris kolom
}cr;
void pencarian(int baris,int kolom, asprak mahasiswa[baris][kolom],cr dicari[2]);// prosedur untuk mencari indek barsi kolom yang akan di tukar
void perpindahan(int baris,int kolom, asprak mahasiswa[baris][kolom],cr dicari[2]);// menukar nilai 
void terbesar(int baris,int kolom, asprak mahasiswa[baris][kolom],cr dicari[2]);// untuk mencari nilai terbesar
