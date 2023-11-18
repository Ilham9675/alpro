/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal
TP2 dalam mata kuliah algoritma dan pemlograman 2
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
#include <stdio.h>
#include <string.h>



typedef struct{
    char nama[100];// wadah untuk nama peserta
    char ukuran[10];// untuk ukuran toga
}wisuda;

typedef struct{
    char namasebelum[100];// wadah untuk nama pertam
    char namasesudah[100];// wadah untuk nama kedua
    int indekkolom[2];// wadah untuk koordinat baris nama pertama dan kedua
    int indekbaris[2];// wadah untuk koordinat kolom nama pertama dan kedua
    char ukuran[2][10];// wada untuk ukuran toga nama pertama dan kedua
}peserta;

void mencari_ukuran(int n,peserta pindah[100],int k,int *nilai);// untuk mencari berapa nilai dari ukuran toga
void pertukaran(int k,int kolom,int baris,peserta pindah[100],wisuda mahasiswa[baris][kolom]);// untuk menukar nama dan ukuran toga
void tampilan(int kolom,int baris,wisuda mahasiswa[baris][kolom],int terbesar[kolom]);// untuk menampilkan tempat duduk
void mencari_terbesar(int kolom,int baris,wisuda mahasiswa[baris][kolom],int terbesar[kolom]);// untuk mencari string terpanjang di dalam kolom
void pemindahan(int n,int k,int j,int i,int kolom,int baris,peserta pindah[100],wisuda mahasiswa[baris][kolom]);// untuk menidahkan ukuran toga dan koordinat nama peserta