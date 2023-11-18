#include "header.h"

void mencari(int baris ,int kolom,int matriks[baris][kolom]){
    int angka_yang_dicari;// wadah untuk angka yang di cari
    scanf("%d",&angka_yang_dicari);// masukan angka yang di cari
    printf("letak dari nilai %d pada matriks yaitu:\n",angka_yang_dicari);
    for(int i = 0;i < baris;i++){
        for(int j = 0;j < kolom; j++){
            if(matriks[i][j] == angka_yang_dicari){// mencari angka dan membandingan di dalam matrik jika ada akan langsung di tampilkan lewat koordinat
                printf("- baris ke-%d dan kolom ke-%d\n",i+1,j+1);//menampilkan di koordinat berapa angka tersebut berada
            }
        }
    }
}

void mengkali(int baris ,int kolom,int matriks[baris][kolom]){
    int angka_yang_dikali;// wadang untuk angka berapa yang akan di kali
    scanf("%d",&angka_yang_dikali);// memasukan angka yang akan di kali
    for(int i = 0;i < baris;i++){
        for(int j = 0;j < kolom; j++){
            matriks[i][j] *= angka_yang_dikali;// mengkalikan angka dengan semua matriks
            if(j == 0){// menampilkan matriks
                printf("%d",matriks[i][j]);
            }else{
                printf(" %d",matriks[i][j]);
            }
        }
        printf("\n");
    }
}

void transpose(int baris ,int kolom,int matriks[baris][kolom]){
    int transpose_matriks[kolom][baris];// wadah untuk transpose
    for(int i = 0;i < baris;i++){
        for(int j = 0;j < kolom;j++){
            transpose_matriks[j][i] = matriks[i][j];// mengubah matriks ke transpose matriks
        }
    }
    for(int i = 0;i < kolom;i++){
        for(int j = 0;j < baris;j++){
            if(j == 0){// menampilkan matriks
                printf("%d",transpose_matriks[i][j]);
            }else{
                printf(" %d",transpose_matriks[i][j]);
            }
        }
        printf("\n");
    }
}

void cermin(int baris ,int kolom,int matriks[baris][kolom]){
    int cermin_matriks[kolom][baris];// wadah untuk cerminan matriks
    for(int i = 0;i < baris;i++){
        for(int j = 0;j < kolom;j++){
            cermin_matriks[i][kolom - (j + 1)] = matriks[i][j];// mencerminkan matrik dengan membalik indek j atau kolom
        }
    }
    for(int i = 0;i < baris;i++){
        for(int j = 0;j < kolom;j++){
            if(j == 0){// menampilkan matriks
                printf("%d",cermin_matriks[i][j]);
            }else{
                printf(" %d",cermin_matriks[i][j]);
            }
        }
        printf("\n");
    }
}

void perbandingan(int baris ,int kolom,int matriks[baris][kolom]){
    int pembanding_baris_matriks; // wadah untuk nama baris matriks pembanding
    int pembanding_kolom_matriks; // wadah untuk nama kolom
    scanf("%d",&pembanding_baris_matriks);// masukan baris matriks pembanding
    scanf("%d",&pembanding_kolom_matriks);// masukan kolom matriks pembanding
    int pembanding_matriks[pembanding_baris_matriks][pembanding_kolom_matriks];// wadah untuk matriks pembanding
    for(int i = 0;i < pembanding_baris_matriks;i++){// untuk memasukan nilai matriks dua
        for(int j = 0;j < pembanding_kolom_matriks;j++){
            scanf("%d",&pembanding_matriks[i][j]);
        }
    }
    int indikator = 0;// inisialisasi untuk mengecek apakah semua bilangan matriks satu dan matriks dua sama
    for(int i = 0;i < pembanding_baris_matriks;i++){
        for(int j = 0;j < pembanding_kolom_matriks;j++){
            scanf("%d",&pembanding_matriks[i][j]);
            if(pembanding_matriks[i][j] == matriks[i][j]){// mengecek mangecek matriks satu dan matrik dua apakah sama atau tidak
                indikator++;
            }
        }
    }
    if(indikator == baris * kolom){// untuk mengecek ada berapa bilangan atau angka yang sama
        printf("kedua matriks memiliki nilai yang sama!\n");
    }else{
        printf("kedua matriks tidak memiliki nilai yang sama!\n");
    }
}