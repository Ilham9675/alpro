/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal
TP5 dalam mata kuliah algoritma dan pemlograman 2
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
#include <stdio.h>
#include <string.h>

typedef struct{
    char nama[100];// nama mantra sihir
    int mp; // untuk magic power
    int waktu; // waktu yang di butuhkan untuk menguasai magic power
}data;
void masukan_data(int jumlah,data peserta[jumlah]);// untuk memasukan data dari user
void Bubble_sort(int jumlah,data peserta[jumlah],char kode2[10]);// prosedur bubble sorting
void quicksort(int jumlah,data peserta[jumlah],int l,int r,char kode2[10]);// prosedur quick sorting
void tabel_garis(int jumlah,int terbanyak);// untuk membuat garis batas horizontal
void tabel_header(int jumlah,int terbanyak);// untuk membuat nama header kolom atau entitas
int tabel_data(int jumlah,data peserta[jumlah],int terbanyak,int batas_waktu);// fungsi untuk menampilkan data2 dan mengembalikan sebuah nilai untuk menetahui seberapa banyak jumlah magic power yang ingin di kuasai