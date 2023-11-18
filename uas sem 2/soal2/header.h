/*
Saya ilham akbar[2201017] mengerjakan soal
UAS dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include <stdio.h>
#include <string.h>


int indeks;// masukan untuk indeks untuk penetu string di mesin kata
int panjangkata;// masukan untuk panjang kata 
char ckata[50];// untuk menampung kata yang sudah di ambil dari kalimat
int min,cek;// min untuk menecek minimal kata kunci yang harus ada di kata dan cek untuk menecek berapa kata kunci yang ada di kata tersebut
char kunci;// kunci untuk sebuah huruf yang harus ada di kata


void startkata(char pita[500]);// untuk memulai mesin kata dan mengembila kata awal
void resetkata();// untuk mereset kata
void inckata(char pita[500]);// untuk mengambil kata 
char* getckata();// untuk meampilkan kata atau untuk mengambil kata keluar dari mensin kata
int getpanjangkata();// untuk meliah panjang kata
int eopkata(char pita[500]);// untuk pengecekan apakah di selanjutnya ada kata atau tidak