/*
Saya ilham akbar[2201017] mengerjakan soal
uas dalam mata kuliah algoritma dan pemrograman 1
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include "header.h"
// untuk mengeluarkan hasil
void pengeluaran(int pengulangan, char kata1, char kata2, char kata3){
    if(pengulangan % 2 == 0){// pengecekan apakah pengeulangan tersebut ganjil atau genap kalau ganjil ada spasi kalau genap tidak ada spasi
        printf("%c%c%c\n",kata1,kata2,kata3);
    }else{
        printf("   %c%c%c\n",kata1,kata2,kata3);
    }
}
// untuk menecek apakah carakter tersebut konsonan atau tidak
int pengecekankonsonan(char kata,int cek){
    if(kata != 'a' && kata != 'i' && kata != 'u' && kata != 'e' && kata != 'o'){
        cek++;
    }
    return cek;
}
// untuk menecek apakah carakter tersebut konsonan atau tidak
int pengecekanvokal(char kata,int cek){
    if(kata == 'a' || kata == 'i' || kata == 'u' || kata == 'e' || kata == 'o'){
        cek++;
    }
    return cek;
}