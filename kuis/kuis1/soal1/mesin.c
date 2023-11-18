/*
Saya ilham akbar[2201017] mengerjakan soal
kuis 1 dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include "header.h"

void mengelinding(int putaran,int dimensi, RGB hasil[dimensi][dimensi]){
    for(int i = 0;i < putaran % 4;i++){// berapa kali matriks berputar dan di modulo 4 karena setiap kelipatan 4 matriks akan kembali ke posisi semula
        RGB wadah[dimensi][dimensi];// untuk wadah penampung sementara
        for(int j = 0;j < dimensi;j++){// pengulangan untuk baris matrisk 
            for(int k = 0;k < dimensi;k++){// pengulangan untuk kolom matrisk
                wadah[j][k].red = hasil[dimensi - (k + 1)][j].red;// untuk memindahkan posisi matrik ke dalam posisi berputar dan di simpan di dalam wadah sementara
                wadah[j][k].green = hasil[dimensi - (k + 1)][j].green;// untuk memindahkan posisi matrik ke dalam posisi berputar dan di simpan di dalam wadah sementara
                wadah[j][k].blue = hasil[dimensi - (k + 1)][j].blue;// untuk memindahkan posisi matrik ke dalam posisi berputar dan di simpan di dalam wadah sementara
            }
        }
        for(int j = 0;j < dimensi;j++){// pengulangan untuk baris matrisk kecil
            for(int k = 0;k < dimensi;k++){// pengulangan untuk baris matrisk kecil
                hasil[j][k].red = wadah[j][k].red;// untuk mengembakukan mempebarui posisi matrikas
                hasil[j][k].green = wadah[j][k].green;// untuk mengembakukan mempebarui posisi matrikas
                hasil[j][k].blue = wadah[j][k].blue ;// untuk mengembakukan mempebarui posisi matrikas
            }
        }
    }
}
void tampilan(int dimensi, RGB hasil[dimensi][dimensi]){
    for(int i = 0;i < dimensi;i++){// pengulangan untuk baris matrisk 
        for(int j = 0;j < dimensi;j++){// pengulangan untuk kolom matrisk 
            printf("%d %d %d\n",hasil[i][j].red,hasil[i][j].green,hasil[i][j].blue);// untuk menampilkan isi dari matriks
        }
    }
}

void masukan_matriks_kecil(int dimensi, int baris, int kolom,RGB hasil[dimensi][dimensi], RGB warna[baris][kolom]){
    for(int i = 0;i < dimensi;i++){// pengulangan untuk baris matrisk 
        for(int j = 0;j < dimensi;j++){// pengulangan untuk kolom matrisk 
            int b,k;// untuk madah sementara koordinata untuk matriks hasil atau matriks kecil
            scanf("%d %d",&b,&k);// mauskan dari user untuk koordinat isi matriks hasil
            hasil[i][j].red = warna[b][k].red;
            hasil[i][j].green = warna[b][k].green;
            hasil[i][j].blue = warna[b][k].blue;
        }
    }
}

void masukan_matriks(int baris,int kolom, RGB warna[baris][kolom]){
    for(int i = 0;i < baris;i++){// pengulangan untuk baris matrisk 
        for(int j = 0;j < kolom;j++){// pengulangan untuk kolom matrisk 
            scanf("%d %d %d",&warna[i][j].red,&warna[i][j].green,&warna[i][j].blue);// masukan dari user untuk matrisk 
        }
    }
}