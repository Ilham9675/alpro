/*
Saya ilham akbar[2201017] mengerjakan soal
TP10 dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

void startkata(char pita[300],char kunci){
    teks_kunci = 0;
    indeks = 0;
    panjangkata = 0;
    while(pita[indeks] == ' '){
        indeks++;
    }
    while((pita[indeks] != ' ') && (pita[indeks] != '.')){
        ckata[panjangkata] = pita[indeks];
        if(pita[indeks] == kunci){
            teks_kunci = 1;
        }
        indeks++;
        panjangkata++;
    }
    ckata[panjangkata] = '\0';
}

void resetkata(){
    panjangkata = 0;
    ckata[panjangkata] = '\0';
}

void inckata(char pita[300],char kunci){
    teks_kunci = 0;
    panjangkata = 0;
    while(pita[indeks] == ' '){
        indeks++;
    }
    while((pita[indeks] != ' ') && pita[indeks] != '.'){
        ckata[panjangkata] = pita[indeks];
        if(pita[indeks] == kunci){
            teks_kunci = 1;
        }
        indeks++;
        panjangkata++;
    }
    ckata[panjangkata] = '\0';
}

char* getckata(){
    return ckata;
}

int getpanjangkata(){
    return panjangkata;
}

int eopkata(char pita[300]){
    if(pita[indeks] == '.'){
        return 1;
    }else{
        return 0;
    }
}

void start(char pita[100]){
    indeks = 0;
    cc = 0;
    scanf("%c", &kunci);
}

void inc(char pita[100]){
    scanf("%c", &pita[indeks]);
    cc = pita[indeks];
    indeks++;
}



char getcc(){
    return cc;
}

int eop(){
    if(cc == '.'){
        return 1;
    }else{
        return 0;
    }
}