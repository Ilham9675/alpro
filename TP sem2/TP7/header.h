/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal
TP7 dalam mata kuliah algoritma dan pemlograman 2
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
#include <stdio.h>
#include <string.h>

typedef struct{
    char nama[100];// nama senyawa
    int nomeratom;// nomer atom senyawa 
    int power;// power senyawa
}atom;

typedef struct{
    char nama1[100],nama2[100],nama3[100];// kobinasi nama nama senyawa
    int totalnoatom;// total no momer senyawa dari kombinasi ketiga
    int totalpower;// total power senyawa dari kombinasi ketiga
    double rasio;// rasio dengan perbandingan total power dibagi rasio

}total;

int kemungkinan(int jumlah,total kes[jumlah*jumlah*jumlah],atom bom[jumlah]);// mencari kemungkinan dan kombinasi
void sorting(int a,total kes[]);// unruk mensorting array
void sequentialsearch(int n, total kes[]);// untuk mencari nilai yang lebih dari 1.5 dan menampilkan nya
int binarysearch(int n, total kes[]);// untuk mencari nilai rasio yang tepat 3.00