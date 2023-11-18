#include <stdio.h>

typedef struct{
    float pembilang;
    float penyebut;
    float hasil;
}pecahan;

void quicksortpivottegah(int jumlah,pecahan angka[jumlah],int l,int r);
void Bubble_sort(int jumlah,pecahan angka[jumlah]);
void masukan(int jumlah,pecahan angka[jumlah]);
void tampilan(int jumlah,pecahan angka[jumlah]);