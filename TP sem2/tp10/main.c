/*
Saya ilham akbar[2201017] mengerjakan soal
TP10 dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include "header.h"

int main(){

    
    char pita[300];

    start(pita);
    printf("%c\n",getcc());    
    while (eop() == 0){
        inc(pita);
        printf("%c\n",getcc());
    }
    
    //scanf("%c",&kunci);
    /* scanf("%299[^\n]s",&pita);
    startkata(pita,kunci);
    
    while (eopkata(pita) == 0){
        inckata(pita,kunci);
        if(teks_kunci == 1){
            printf("%s\n",getckata());
        }
    } */
    
    return 0;
}