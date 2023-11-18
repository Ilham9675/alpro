/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal
TP9 dalam mata kuliah algoritma dan pemlograman
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
#include "header.h"

void scan_naruto(naruto *pok){  
    scanf("%s %d %d %d %s", &(*pok).nama, &(*pok).health, &(*pok).attack, &(*pok).defense, &(*pok).jurus);
}
void printf_naruto(int health1,int health2,int health3,int health4,char musuh[100]){
    if(health1 + health2 > health3 + health4){
        printf("\n>>> Konoha Village Passed <<<\n");
    }else if(health1 + health2 < health3 + health4){
        printf("\n>>> %s Village Passed <<<\n",musuh);
    }else{
        printf("\n>>> Both Village Passed <<<\n");
    }
}