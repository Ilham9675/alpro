#include <stdio.h>

int main(){
    int pola; // variabel untuk memampung ukuran 
    printf("masukan ukuran pola piramida :");
    scanf("%d",&pola); // memasukan input dari user
    /*
    pola diamond saya bagi dua pengulangan baris yang pertama baris atas sama baris bawah
    */
    // baris atas
    for(int a = 0;a < pola;a++){
        // pengulangan untuk membuat pondasi kosong terbentuk sebuah segitiga sama sisi
        for(int b = a + 1; b < pola;b++){
            printf(" ");
        }
        // pengulangan untuk membuat segitiga siku_siku
        for(int b = 0; b <= a;b++){
            printf("*");
        }
        // pengulangan untuk membuat segitiga siku_siku yang kebalikan di atas dan di kurangi ukuranya satu
        for(int b = 0; b < a;b++){
            printf("*");
        }
        printf("\n");
    }
    // baris bawah
    for(int a = 0;a < pola - 1;a++){
        // pengulangan untuk membuat pondasi kosong terbentuk sebuah segitiga sama sisi
        for(int b = 0; b <= a;b++){
            printf(" ");
        }
        // pengulangan untuk membuat segitiga siku_siku yang kebalik
        for(int b = a + 1; b < pola;b++){
            printf("*");
        }
        // pengulangan untuk membuat segitiga siku_siku yang kebalikan di atas dan di kurangi ukuranya satu yang kebalik
        for(int b = a + 2; b < pola;b++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}