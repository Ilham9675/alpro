/*
Saya ilham akbar[2201017] mengerjakan soal
kuis 3 dalam mata kuliah algoritma dan pemrograman 1
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

int main(){
    int jumlah;//wadah untuk jumlah setring kata
    scanf("%d", &jumlah);// masukan user
    char nama[jumlah][100];// wadah untuk array of string
    for(int i = 0; i < jumlah; i++){//pengulangan untuk memasukna nama
        scanf("%s",nama[i]);
    }
    int kata;//wadah untuk memasukan jumlah nama yang akan di print
    scanf("%d",&kata);// masukna jumlah dari user
    print_program(kata,nama,jumlah);// memanggil prosedur untuk menjalankan prosesnya
    return 0;
}