/*
Saya ilham akbar[2201017] mengerjakan soal
UAS dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

void start(char pita[500]){
    indeks = 0;// pemulaian indek dari nol 
    cc = pita[indeks];// mesakukan kata ke dalam cc
}

void inc(char pita[500]){
    indeks++;// penambahan indek untuk manjalankan mesin
    cc = pita[indeks];// memasukan karakter
}


char getcc(){
    return cc;// pengembalikan karakter
}

int eop(){
    if(cc == '.'){// pengecekan apakah udah melewati batas atau tidak jika sudah maka kan mengembalikan satu
        
        return 1;
    }else{// jika belum maka akan mengembalikan nol
        return 0;
    }
}