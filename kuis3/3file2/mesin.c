/*
Saya ilham akbar[2201017] mengerjakan soal
kuis 3 dalam mata kuliah algoritma dan pemrograman 1
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include "header.h"

void print_program(int kata,char nama[][100],int jumlah){

    int indek = 0;
    char baru[10000];// buat array baru untuk menampung array yang sudsh di hilangkan alfabetnya
    // pengulangan untuk penghilangan alfabet
    for(int i = 0; i < jumlah;i++){
        for(int j = 0;j < strlen(nama[i]);j++){
            if(nama[i][j] != 'a' && nama[i][j] != 'i' && nama[i][j] != 'u' && nama[i][j] != 'e' && nama[i][j] != 'o'){
                baru[indek] = nama[i][j];
                indek++;
            }
        }
        if(i == kata - 1){
            baru[indek] = '\0';// untuk batasan array agar ada sebuah pembatas
        }
    }
    int spasi = 0;// wadah untuk spasi
    int indek2 = 0;// untuk indek 2 yang akan di bandingkan nanti
    int indikator = 0;// indikator untuk pengecekan ganjil genap
    // pengulangan untuk menambahnkan keluaran nya
    for(int j = 0;j < indek;j){
        int k = 0;
        while(k < kata && indek2 != indek){// pengecekan bilangan 
            if(indikator % 2 == 0){
                if(k == 0){// jika ganjil maka printf ke samping
                    for(int i = 0;i < spasi;i++){
                        printf(" ");
                    }
                }
                printf("%c",baru[indek2]);
                indek2++;
            }else{// untuk printf ke bawah
                for(int i = 0;i < spasi;i++){
                    printf(" ");
                }
                printf("%c",baru[indek2]);
                indek2++;
                printf("\n");
                
            }
            k++;
        }
        if(indikator % 2 == 0){// jika ganjil maka menambahkan spasi dan new line
            spasi += kata - 1;
            printf("\n");
        }
        indikator++;
        j += kata;// untuk menjadi patokan saya
    }
}