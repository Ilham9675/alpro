/*
Saya ilham akbar[2201017] mengerjakan soal
kuis 2 dalam mata kuliah algoritma dan pemrograman 1
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <string.h>

int main (){
    int panjang; // unuk wadah jumlah panjang kalimat
    scanf("%d",&panjang);// masukan panjang kalimat
    char array1[panjang][200];// dekralasi array dengan panjang array sesuai masukan
    int a; // wadah untuk pengulangan 
    // pengulangan untuk pemasukan kata
    for(a = 0;a < panjang;a++){
        scanf("%s",array1[a]);
    }
    int total;// wadah untuk total tepanjang
    // penulangan untuk menghitung terpanjang
    for(a = 0;a < panjang;a++){
        // kondisi jika pengulangan pertama dan pemasukan total array akan masuk ke dalam total
        if(a == 0){
            total = strlen(array1[a]);
        }else{
            // pengecekan kondidi jika pengulangan total lebih kecil dari total kata indek ke-a
            if(total < strlen(array1[a])){
                total = strlen(array1[a]);// pemasukan array jika memenuhi kondisi
            }
        }
    }
    // pengulangan untuk printf panjang array
    for(a = 0;a < panjang;a++){
        int depan;// wadah untuk depan sebelum spasi
        // kondisi di mana kata itu berjumlah ganjil dan kata tidak yang terpanjang
        if(strlen(array1[a]) % 2 == 1 && strlen(array1[a]) != total){
            depan = strlen(array1[a]) / 2 + 1; // jika memenuhi itu jumlah kata di bagi dua dan di tambah satu
        }else{
            depan = strlen(array1[a]) / 2; // jika tidak memenuhi jumlah kata hanya di bagi dua
        }
        int belakang = depan;// untuk memulai index belakang dan di mulai dari depan karna yang depan itu hanya di pake untuk panjang bukan index
        // pengulangan untuk printf kata yang di pisah di depan
        for(int b = 0;b < depan;b++){
            printf("%c",array1[a][b]);
        }
        // pengulangan untuk printf spasi antara kata depan dan belakang
        for(int b = 0;b < total - strlen(array1[a]);b++){
            printf(" ");
        }
        // pengulangan untuk printf kata kata yang di pisah di depan
        for(int b = belakang;b < strlen(array1[a]);b++){
            printf("%c",array1[a][b]);
        }
        printf("\n");
    }


    return 0;
}