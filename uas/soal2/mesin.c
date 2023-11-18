/*
Saya ilham akbar[2201017] mengerjakan soal
uas dalam mata kuliah algoritma dan pemrograman 1
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include "header.h"
// untuk mencari spasi atau jarang yang akan di timbulkan oleh integer untuk stract selanjutnya
int pengeluaran(int hasil){
    int plus;
    if(hasil < 10){
        plus = 1;
    }else if(hasil < 100){
        plus = 2;
    }else if(hasil < 1000){
        plus = 3;
    }else{
        plus = 4;
    }
    return plus;
}
// untuk menampilkan hasil tengah
void tampilan(int spasi){
    for(int k = 0;k < spasi;k++){
        printf(" ");
    }
}