/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal
TP4 dalam mata kuliah algoritma dan pemlograman 2
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
#include "header.h"

int main() {
    int jumlah;// untuk wadah jumlah 
    scanf("%d",&jumlah);// masukan jumlah dari user 
    char nama[jumlah][100];// untuk wadah nama 
    int umur[jumlah];// wadah unutk umur 
    char kode[5];// wadah untuk kode 
    masukan(jumlah,nama, umur);// untuk memasukan nama dan nilai
    scanf("%s",kode);// untuk memasukan kode 
    int jumlah_ascii_nama = 0;// untuk jumlah ascii nama pertama
    int jumlah_ascii_umur;// untuk jumlah umur pertama
    jumlah_ascii_nama += cari_jumlah(jumlah, nama); // menambahkan nilai ascii nama
    jumlah_ascii_umur = umur[0];// menambahkan umur pertama ke dalam wadah
    //printf("%d",jumlah_ascii_nama)
    
    if(kode[2] == 'I'){// memilih metode sorting dengan indikator kode indek 2
        insertion(jumlah, nama, umur, kode);
    }else{
        selection(jumlah, nama, umur, kode);
    }
    jumlah_ascii_nama += cari_jumlah(jumlah, nama);// menambahkan nilai ascii nama
    jumlah_ascii_umur += umur[0];// menambahkan umur pertama ke dalam wadah
    //printf("%d ",jumlah_ascii_nama);
    tampilan(jumlah_ascii_nama, jumlah_ascii_umur,jumlah,nama,umur);// menampilkan hasilnya
    return 0;
}