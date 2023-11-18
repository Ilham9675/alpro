/*
Saya ilham akbar[2201017] mengerjakan soal
kuis 2 dalam mata kuliah algoritma dan pemrograman 1
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <string.h>

int main (){
    char array1[200];// dekralasi array yang pertama 
    char array2[200];// dekralasi array yang pertama 
    int panjangindex;// panjangindex gabungan yang akan di gabung 

    scanf("%s",array1);// pemasukan kata array pertama
    scanf("%s",array2);// pemasukan kata array kedua
    scanf("%d",&panjangindex); // pemasukan index panjang array yang akan di gabung

    char gabungan[400]; // dekralasi array gabungan dan batasan panjang nya adalah penjumlahanan dari batasan array pertama dan kedua
    int i = 0; // inisialisasi pengulangan pertama
    int j = 0; // inisialisasi pengulangan pertama
    int panjanggabungan = 0; // untuk menghitung panjang gabungan
    // kondisi di dalam while teprnuhi jika i tidak melebihi panjang array satu dan j tidak melebihi panjang array dua
    while(i < strlen(array1) || j < strlen(array2)){
        int a = 0;// untuk pengulangan kedua
        // kondisi memenuhu di dalam while jika a tidak melebihi panjang index dan j tidak melebihi panjang array dua
        while(panjangindex > a && i < strlen(array1)){
            gabungan[panjanggabungan] = array1[i]; // pemindahan array pertama ke dalam array gabungan
            panjanggabungan++;
            i++;
            a++;
        }
        a = 0;// untuk pengulangan kedua
        // kondisi memenuhu di dalam while jika a tidak melebihi panjang index dan j tidak melebihi panjang array dua
        while(panjangindex > a && j < strlen(array2)){
            gabungan[panjanggabungan] = array2[j];// pemindahan array pertama ke dalam array gabungan
            panjanggabungan++;
            j++;
            a++;
        }
    }
    i = 0;// inisialisasi
    //pengulangan untuk menampilkan array atau kata yang sudah di gabung
    while(panjanggabungan > i){
        printf("%c", gabungan[i]);// penampilan array gabungan perkarakter
        i++;
    }
    printf("\n");
    //gabungan[panjanggabungan] = '\0';
    //printf("%s\n",gabungan);
    return 0;
}