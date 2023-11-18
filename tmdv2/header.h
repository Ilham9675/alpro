/*Saya ilham akbar mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah 
Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>



typedef struct// struk untuk nama table dan digunakan untuk mengambil bonus jika ad=nda tidak mengambil bonus maka bisa di abaikan
{
    char nama[100];
}list_table;

typedef struct// struk untuk code dua kolom
{
    char code[100];
    char nama[100];
    char nama_table[100];
}table_data;

typedef struct// struk untuk code empat kolom
{
    char code[100];
    char nama[100];
    char code_barang[100];
    char code_waktu[100];
    char nama_table[100];
}table_data2;


// variabel global untuk mesin karakter
int indeks_karakter;
char cc;

// variabel global untuk mesin kata
int indeks_kata;
int panjang_kata;
char ckata[100];

// variabel global
int indek_global;
int wadah_hasil_global;
int wadah_pengecekan_global;





// mesin karkater
void start_karakter(char data[100]);// untuk memulai mesin karakter
void inc_karakter(char data[100]);// untuk memanggil kata dan memajukan karakter
int eop_karakter(char data[100]);// untuk mengecek apakah sudah di ujung atau belum

// mesin kata
void start_kata(char data[100]);// memulai mesin kata 
void resetkata();// merestar semua indek yang ada dan ij=ni juga tidak terlalu di butuhkan
void inc_kata(char data[100]);// memindah kan kata ke kata selanjutnya
char* get_kata();// mengambil kata dengan menggunakan pointer
int get_panjang_kata();// untuk mengembalikan panjang kata ini juga di sesuaikan jika di butuhkan pake jika tidah hapus juga gam masalah
int eop_kata(char data[]);// pengecekan aoaj=kah sudah sampai ujung kalimat


// prosedur dan fumgsi di gunakan
// isi data dari file ke struck
void pemasukan_data_table(table_data data[100], char lokasi[100]);// memasukan data dari file ke dalam struck
void pemasukan_data_table_pelanggan(table_data2 data[100], char lokasi[100]);// pemasukan data dari file ke struck
void pemasukan_data_list_table(list_table data[100], char lokasi[100]);// memasukan data dari file ke dalam struck lis data
void pemasukan_data_table_pelanggan_akhir(table_data2 data[100], char lokasi[100]);// memasukan data yang sudah di ganti forenkey nya

// isi data dari struck ke file
void mengisi_data(table_data tb[100],char filename[50],char data1[100],char data2[100]);// mengisi data ke file 
void mengisi_data_pelanggan(table_data2 tb[100],char filename[50],char data1[100],char data2[100],char data3[100],char data4[100]);// pemasukn data dari table ke dalam file

// update atau ubah data
void update_data(table_data tb[100],char filename[50],char data1[100],char data2[100]);// update data jadi misalnya datanya ada itu bakah di ganti jadi data yang sudah di perbarui
void update_data2(table_data2 tb[100],char filename[50],char data1[100],char data2[100],char data3[100],char data4[100]);// untuk update data

// menghapus data
void delete_data2(table_data2 tb[100],char filename[50],char data1[100]);// menghapus data empat kolom
void delete_data(table_data tb[100],char filename[50],char data1[100]);// menghapus data dua kolom

// pengecekan data
int pengecekan_data( table_data tb[100],char data[100]);// pengecekan apakah adata ada di dalam tabel atau tidak
int pengecekan_data2( table_data2 tb[100],char data[100]);// pengecekan data
int pengecekan_data_table(list_table data[100],char nama_table[100]);// pengecekan apakah ada nama tabel yang di imputkan
int pengecekan_data_table_kolom(table_data2 tb[100],char data[100],int kolom); // penecekan kolom 

// pemasukan foreign key
void table_hasil_kolom4(table_data2 tb[100],char filename[50],table_data data2[100]);// pemasukan forenkey kolom 4
void table_hasil_kolom3(table_data2 tb[100],char filename[50],table_data data2[100]);// pemasukna forenkey kolom 3

// mengubah karakter ke karakter kecil
void persamaan(char kata[100]);

// penyusun tabel
void bagian1_baris_tabel(int tp);
void bagian2_spasi_tabel(int tp,int jumlah);

// menampilkan data dalam bentuk tabel
void tampilka_table(table_data tb[100],char head1[100],char head2[100]);
void tampilka_table_empat_kolom(table_data2 tb[100],char head1[100],char head2[100],char head3[100],char head4[100]);// menampilkan table secara ribet




