
#include "header.h"

int spasiangka(int hasil){
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