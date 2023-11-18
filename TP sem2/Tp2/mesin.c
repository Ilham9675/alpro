/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal
TP2 dalam mata kuliah algoritma dan pemlograman 2
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
#include "header.h"

void mencari_ukuran(int n,peserta pindah[100],int k,int *nilai){
    /*
    kondisi di bawah untuk mencari nilai dari ukuran toga
    */
    if(strcmp(pindah[k].ukuran[n],"XS") == 0){
        *nilai = 32;
    }else if(strcmp(pindah[k].ukuran[n],"S") == 0){
        *nilai = 36;
    }else if(strcmp(pindah[k].ukuran[n],"M") == 0){
        *nilai = 37;
    }else if(strcmp(pindah[k].ukuran[n],"L") == 0){
        *nilai = 38;
    }else if(strcmp(pindah[k].ukuran[n],"XL") == 0){
        *nilai = 40;
    }else if(strcmp(pindah[k].ukuran[n],"XXL") == 0){
        *nilai = 42;
    }else{
        *nilai = 45;
    }
}

void pertukaran(int k,int kolom,int baris,peserta pindah[100],wisuda mahasiswa[baris][kolom]){
    char wadah[100];// wadah sementara untuk string 
    /* untuk memindahkan nama dan ukuran toga dari satu titik ke titik lainnya */
    strcpy(wadah,mahasiswa[pindah[k].indekbaris[1]][pindah[k].indekkolom[1]].nama);
    strcpy(mahasiswa[pindah[k].indekbaris[1]][pindah[k].indekkolom[1]].nama,mahasiswa[pindah[k].indekbaris[0]][pindah[k].indekkolom[0]].nama);
    strcpy(mahasiswa[pindah[k].indekbaris[0]][pindah[k].indekkolom[0]].nama,wadah);
    strcpy(mahasiswa[pindah[k].indekbaris[1]][pindah[k].indekkolom[1]].ukuran,pindah[k].ukuran[0]);
    strcpy(mahasiswa[pindah[k].indekbaris[0]][pindah[k].indekkolom[0]].ukuran,pindah[k].ukuran[1]);
}

void tampilan(int kolom,int baris,wisuda mahasiswa[baris][kolom],int terbesar[kolom]){
    for(int i = 0;i < baris;i++){// pengulangan sejumlah baris
        for(int j = 0;j < kolom;j++){// pengulangan sejumlah kolom
            if(kolom - 1 == j){// jika string berada di ujung maka tidak di perlukan spasi
                printf("%s",mahasiswa[i][j].nama);// untuk menampilkan nama peserta
            }else{// jika kondidi=si tidak berada di ujung
                printf("%s",mahasiswa[i][j].nama);// untuk menampilkan nama peserta
                for(int k = 0;k <= terbesar[j] - strlen(mahasiswa[i][j].nama);k++){// untuk menambahkan spasi di antara satu kolom dengan kolom lainya agar sejajar
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}

void mencari_terbesar(int kolom,int baris,wisuda mahasiswa[baris][kolom],int terbesar[kolom]){
    for(int i = 0;i < kolom;i++){// pengulangan sejumlah baris
        terbesar[i] = 0;// inisialisasi nol karena nanti bakan di bandingkan 
        for(int j = 0;j < baris;j++){// pengulangan sejumlah kolom
            if(terbesar[i] < strlen(mahasiswa[j][i].nama)){// pembandingan untuk mencari tau mana yang terbesar
                terbesar[i] = strlen(mahasiswa[j][i].nama);// untuk menidahkan nilai
            }
        }
    }
}

void pemindahan(int n,int k,int j,int i,int kolom,int baris,peserta pindah[100],wisuda mahasiswa[baris][kolom]){
    strcpy(pindah[k].ukuran[n],mahasiswa[i][j].ukuran);// untuk menambahnkan ukuran 
    pindah[k].indekbaris[n] = i;// untuk memnidahkan koordinat baris
    pindah[k].indekkolom[n] = j;// untuk memnidahkan koordinat kolom
}