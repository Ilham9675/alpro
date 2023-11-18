/*
Saya ilham akbar[2201017] mengerjakan soal
kuis 3 dalam mata kuliah algoritma dan pemrograman 1
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"
int menghitung(balok p[100],int terpanjang, int j){
    if(p[j].masukan1 > terpanjang){// untuk mmelihat apakan masukan pertama itu lebih panjang atau tidak
        terpanjang = p[j].masukan1;
    }
    if(p[j].masukan2 > terpanjang){// untuk mmelihat apakan masukan kedua itu lebih panjang atau tidak
        terpanjang = p[j].masukan2;
    }
    if(p[j].masukan3 > terpanjang){// untuk mmelihat apakan masukan ketiga itu lebih panjang atau tidak
        terpanjang = p[j].masukan3;
    }
    return terpanjang;
}