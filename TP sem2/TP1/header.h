/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal
TP1 dalam mata kuliah algoritma dan pemlograman 2
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
#include <stdio.h>
#include <string.h>

void penyalin(int baris, int kolom , int terbanyak, int matriks[terbanyak][terbanyak], int matriks_sementara[terbanyak][terbanyak]);
void refleksi(int baris, int kolom,int terbanyak , int matriks[terbanyak][terbanyak]);
int terbesar(int baris, int kolom,int  matriks[baris][kolom]);
void transpose(int baris, int kolom,int terbanyak , int matriks[terbanyak][terbanyak]);
void tampilan_awal(int baris_awal,int kolom_awal, int awal[baris_awal][kolom_awal]);
int pembanding(int baris, int kolom,int matriks[baris][kolom] , int nilai_awal[baris][kolom]);