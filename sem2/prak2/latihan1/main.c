#include "header.h"

int main(){
    int baris;// wadah untuk baris
    int kolom;// wadah untuk kolom
    scanf("%d %d",&baris,&kolom);// masukan untuk baris dan kolom dari user
    warna matriks[baris][kolom];// deklarasi untuk matriks tipe bungkusan
    for(int i = 0;i < baris;i++){
        for(int j = 0;j < kolom;j++){
            scanf("%s",matriks[i][j].nama);// memasukan nama
            scanf("%d",&matriks[i][j].red);// memasukan warna merah
            scanf("%d",&matriks[i][j].green);// memasukan warna hijau
            scanf("%d",&matriks[i][j].blue);// memasukan warna biru
        }
    }
    char dicari[100];// deklarasi untuk nama yang di cari
    scanf("%s",dicari);// masukan mana yang di cari dari user
    int cek = 0;// wadah untuk pengecekan tampilan
    for(int i = 0;i < baris;i++){
        if(i == 0){
            printf("=======================\n");
            printf("Baris %d :\n",i + 1);// tampilan untuk baris pertama
        }
        cek = 0;
        for(int j = 0;j < kolom;j++){
            if(strcmp(dicari,matriks[i][j].nama) == 0){
                printf("Detail Warna Merah : %d\n",matriks[i][j].red);// tampilan untuk merah
                printf("Detail Warna Hijau : %d\n",matriks[i][j].green);// tampilan untuk hijau
                printf("Detail Warna biru : %d\n",matriks[i][j].blue);// tampilan untuk biru
                printf("---------------------------------------------\n");
                cek++;
            }
        }
        if(cek == 0){
            printf("Tidak ada warna %s\n",dicari);// jika tidak ada yang di tampilkan
        }
        printf("=======================\n");
    }

    return 0;
}