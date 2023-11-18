/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal
TP8 dalam mata kuliah algoritma dan pemlograman 2
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char nama[100],code1[10],code2[10],code3[10];
}list_barang;
typedef struct
{
    char nama[100],code[10];
}barang;

typedef struct
{
    char nama[100],kategori[100],merk[100],toko[100];
}hasil_list_barang;
int tp1,tp2,tp3,tp4,tp5,tp6,tp7,pj;
int jumk,jumm,jumt;

void masukan_data1(list_barang lb[100], char lokasi[100]);
void masukan_data2(barang atribut[100], char lokasi[100],int *jum);
int sequentialsearch(barang db[100], char target[100]);
void mengisi_data(list_barang lb[100],barang kategori[100],barang merk[100],barang toko[100],char filename[50],hasil_list_barang hasil[100]);
void garis_awal(int tp1,int tp2,int tp3,int tp4);
void kata_awal(int tp1,int tp2,int tp3,int tp4);
void garis_tengah(int tp1,int tp2,int tp3,int tp4);
void menampilkan_data(hasil_list_barang hasil[100]);
void pilihan1();
void pilihan11();
void pilihan12();
void pilihan13();
void sorting(barang data[100],int jumlah);
void menampilkan_data2(barang data[100],int p1,int p2,char jenis[50],int p3);
int menambahkan_data(barang data[100],char filename[100]);
int mencari_data(barang data[100],int jumlah,char dicari[50],int p,char mencari[50],int tp);