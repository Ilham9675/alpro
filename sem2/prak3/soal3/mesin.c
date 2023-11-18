#include "header.h"


void pola(int n,int m){
    printf("%d - %d\n",n,m);// mengeluaran nilai yang pertama itu di bagi dan yang ke dua itu di kali
    if(n != 1){// jika n itu tidak sama dengan satu maka jalankan program ini dan memanggil prosedur ini lagi dengan di bagi dua dan di kali dua
        pola(n/2,m*2);
    }
}