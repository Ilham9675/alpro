#include "header.h"

void pencarian(int baris,int kolom, asprak mahasiswa[baris][kolom],cr dicari[2]){
    for(int i = 0;i < baris;i++){
        for(int j = 0;j < kolom;j++){
            if(strcmp(mahasiswa[i][j].nama,dicari[0].nama) == 0){// mencari indek baris dan kolom yang akan di tukar
                dicari[0].nilai = mahasiswa[i][j].nilai;// memasukan nilai ke dalam wadah semntara
                dicari[0].baris = i;// memasukan baris ke berapa nama tersebut berada
                dicari[0].kolom = j;// memasukan kolom ke berapa nama tersebut berada
            }
            if(strcmp(mahasiswa[i][j].nama,dicari[1].nama) == 0){
                dicari[1].nilai = mahasiswa[i][j].nilai;// memasukan nilai ke dalam wadah semntara
                dicari[1].baris = i;// memasukan baris ke berapa nama tersebut berada
                dicari[1].kolom = j;// memasukan kolom ke berapa nama tersebut berada
            }
            terbesar(baris, kolom, mahasiswa, dicari);// untuk mencari nilai yang terbesar
        }
    }
}

void terbesar(int baris,int kolom, asprak mahasiswa[baris][kolom],cr dicari[2]){
    int nilai = 0;
    for(int i = 0;i < baris;i++){
        for(int j = 0;j < kolom;j++){
            if(mahasiswa[i][j].nilai > nilai){// mencari nilai terbesar
                strcpy(dicari[0].namatertinggi,mahasiswa[i][j].nama);// memindahkan nama yang terbesar kedalam wadah
                dicari[0].nilai = mahasiswa[i][j].nilai;// memindahkan nilai terbesar
                nilai = mahasiswa[i][j].nilai;// memindahkan nilai terbesar untuk ini pembandingan 
            }
        }
    }
}

void perpindahan(int baris,int kolom, asprak mahasiswa[baris][kolom],cr dicari[2]){
    mahasiswa[dicari[1].baris][dicari[1].kolom].nilai = dicari[0].nilai;// untuk ngganti nilai pertama jadi nilai yang kedua
    mahasiswa[dicari[0].baris][dicari[0].kolom].nilai = dicari[1].nilai;// untuk ngganti nilai kedua jadi nilai yang pertama
}