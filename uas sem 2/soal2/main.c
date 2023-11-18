/*
Saya ilham akbar[2201017] mengerjakan soal
UAS dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include "header.h"

int main(){
    char pita[500];// wadah untuk kalimat
    int hasil;// wadh untuk hasil yang memenuhi syarat
    scanf("%499[^\n]s",&pita);// masukan untuk kalimat
    scanf("\n%c %d",&kunci,&min);// masukan untuk kata kunci dan nilai minimum
    startkata(pita);// memulai mesin sekaligus mengambil kata pertama
    /*
        syarat 
        1. harus ada karakter kunci
        2. karakter kunci harus lebih dari nilai minimum
    */
    if(cek >= min){// pengecekan di kata pertama apakah ada yang memenuhi syarat
        hasil++;
    }
    while (eopkata(pita) == 0){// pengecekan apakah di selanjutnya ada kata atau tidak jika tidak maka mesin akan mati
        inckata(pita);// mengambil kata dan di simpan di ckata 
        if(cek >= min){// pengecekan apakah memebuhi syarat atau tidak jika iyaa maka hasil akan di tambahkan
            hasil++;
        }
        resetkata();// untuk merestar kata 
    }
    printf("%d\n",hasil);// menampilkan hasilnya
    return 0;
}