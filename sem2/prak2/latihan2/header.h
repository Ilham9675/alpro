#include <stdio.h>
#include <string.h>
typedef struct{
    char nama[100];// nama
    int nilai;// nilai 
}asprak;

typedef struct{
    char nama[100];// nama
    int nilai;// nilai
    int baris;// baris
    int kolom;// kolom
}cr;
void pencarian(int baris,int kolom, asprak mahasiswa[baris][kolom],cr dicari[2]);// prosedur untuk mencari indek barsi kolom yang akan di tukar
void perpindahan(int baris,int kolom, asprak mahasiswa[baris][kolom],cr dicari[2]);// menukar nilai 
