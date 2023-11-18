#include "header.h"

int main(){
    int baris;// wadah untuk baris
    int kolom;// wadah untuk kolom
    scanf("%d %d",&baris,&kolom);// masukan kolom dan baris dari user

    asprak mahasiswa[kolom][baris];// deklarasi untuk matriks tipe bungkusan
    for(int i = 0;i < baris;i++){
        for(int j = 0;j < kolom;j++){
            scanf("%s",mahasiswa[i][j].nama);// masukan nama dari user 
            scanf("%d",&mahasiswa[i][j].nilai);// masukan nilai dari user 
        }
    }
    
    cr dicari[2];// deklarasi untuk matriks tipe bungkusan
    for(int i = 0; i < 2; i++){
        scanf("%s",dicari[i].nama);// masukan nama yang ingin di tukar nilainya
    }

    pencarian(baris,kolom, mahasiswa, dicari);// untuk mencari indek baris dan kolom yang ingin di tukar
    perpindahan(baris,kolom, mahasiswa, dicari);// untuk menukar nilai mahasiswa

    for(int i = 0;i < baris;i++){
        for(int j = 0;j < kolom;j++){
            printf("%s %d\n",mahasiswa[i][j].nama,mahasiswa[i][j].nilai);// tampilan hasil yang sudah di ubah
        }
    }

    return 0;
}