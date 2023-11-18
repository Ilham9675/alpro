/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal
TP4 dalam mata kuliah algoritma dan pemlograman 2
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
#include <stdio.h>
#include <string.h>

void insertion(int jumlah,char nama[jumlah][100],int nilai[jumlah],char kode[5]);// sistem sorting insertion
void selection(int jumlah,char nama[jumlah][100],int nilai[jumlah], char kode[5]);// sistem sorting selection
void tampilan(int jumlah_ascii_nama,int jumlah_ascii_umur,int jumlah,char nama[jumlah][100],int umur[jumlah]);// menampilkan hasil
void masukan(int jumlah,char nama[jumlah][100],int umur[jumlah]);// memasukan nilai
int cari_jumlah(int jumlah,char nama[jumlah][100]);// unutk mencari ascii kalimat