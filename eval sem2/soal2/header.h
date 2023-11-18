/*
Saya ilham akbar[2201017] mengerjakan soal
eval dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <string.h>


typedef struct// struk untuk code dua kolom
{
    char code[100];
    char nama[100];
    char harga[100];
}tk;


// variabel global untuk mesin kata
int indeks_kata;
int panjang_kata;
char ckata[100];




// mesin kata
void start_kata(char data[100]);// memulai mesin kata 
void resetkata();// merestar semua indek yang ada dan ij=ni juga tidak terlalu di butuhkan
void inc_kata(char data[100]);// memindah kan kata ke kata selanjutnya
char* get_kata();// mengambil kata dengan menggunakan pointer
int get_panjang_kata();// untuk mengembalikan panjang kata ini juga di sesuaikan jika di butuhkan pake jika tidah hapus juga gam masalah
int eop_kata(char data[100]);// pengecekan aoaj=kah sudah sampai ujung kalimat

void nambah_data(tk tiket[100],char data1[100],char data2[100],char data3[100]);// penambahan data 
void hapus_data(tk tiket[100],char data1[100],tk sem[100]);// menhapus data tadu bisa dikatakan mengupdate data
void tampilkan(tk tiket[100]);