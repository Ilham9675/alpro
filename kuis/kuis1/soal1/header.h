/*
Saya ilham akbar[2201017] mengerjakan soal
kuis 1 dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include <stdio.h>

typedef struct{
    int red;// untuk warna merah
    int green;// untuk warna hijau
    int blue;// untuk warna biru
}RGB;

void mengelinding(int putaran,int dimensi, RGB hasil[dimensi][dimensi]);// untuk mengelindingkan matriks
void tampilan(int dimensi, RGB hasil[dimensi][dimensi]);// untuk menampilkan matriks
void masukan_matriks_kecil(int dimensi, int baris, int kolom,RGB hasil[dimensi][dimensi], RGB warna[baris][kolom]);// untuk memasukan isian matriks kecil
void masukan_matriks(int baris,int kolom, RGB warna[baris][kolom]);// untuk memasukan matris utama sari user