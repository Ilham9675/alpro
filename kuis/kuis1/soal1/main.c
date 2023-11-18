/*
Saya ilham akbar[2201017] mengerjakan soal
kuis 1 dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include "header.h"

int main(){
    int kolom,baris;// wadah untuk kolom da baris 
    scanf("%d %d",&baris,&kolom);// masukan baris dan kolom dari user
    RGB warna[baris][kolom];// inisialisasi bungkusan rgb untuk matriks utama
    masukan_matriks(baris,kolom,warna);// untuk memasukan sis matrisk besar dari user
    int dimensi;// untuk dimensi matriks kecil
    scanf("%d",&dimensi);// pemasukan ukuran matriks kecil
    RGB hasil[dimensi][dimensi];// inisialisasi bungkusan rgb untuk matrisk kecil
    masukan_matriks_kecil(dimensi, baris, kolom,hasil, warna);//  memasukan isi matriks kecil dengan koordiat yang di masukan dari user
    int putaran;// untuk perputaran matriks kecil
    scanf("%d",&putaran);// masukan putaran matriks kecil dari user
    mengelinding(putaran,dimensi, hasil);//utuk pengelindingan matris kecil
    tampilan(dimensi,hasil);// // untuk menampilkan matriks kecil
    return 0;
}