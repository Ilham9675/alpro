#include "header.h"
int main(){
    int jumlah;
    scanf("%d",&jumlah);
    pecahan angka[jumlah];
    masukan(jumlah,angka);
    char kode;
    scanf(" %c",&kode);
    if(kode == 'b'){
        Bubble_sort(jumlah,angka);
    }else{
        quicksortpivottegah(jumlah,angka,0,jumlah - 1);
    }
    tampilan(jumlah,angka);
    return 0;
}