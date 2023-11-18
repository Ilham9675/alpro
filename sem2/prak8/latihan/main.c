#include "header.h"

int main()
{
    int jum = 0; // counter untuk jumlah data, khususnya data laptop


    mh mahasiswa[50]; // data laptop max 50
    data jurusan[50];
    data fakultas[50];


    masukan_data1(mahasiswa,"../data/mahasiswa.txt");
    masukan_data2(jurusan,"../data/jurusan.txt");
    masukan_data2(fakultas,"../data/fakultas.txt");

    // cek kolom id yang baru discan tadi apakah sama dengan -1?
    while(strcmp(mahasiswa[jum].nama,"####") != 0 ){
        int indek1 = sequentialsearch(jurusan,mahasiswa[jum].code1);
        int indek2 = sequentialsearch(fakultas,mahasiswa[jum].code2);
        printf("%s %s %s\n",mahasiswa[jum].nama,jurusan[indek1].nama,jurusan[indek2].nama);
        jum++;
    }
    return 0;
}