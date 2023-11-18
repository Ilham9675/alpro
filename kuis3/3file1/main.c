/*
Saya ilham akbar[2201017] mengerjakan soal
kuis 3 dalam mata kuliah algoritma dan pemrograman 1
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

int main(){
    int n;// dekrasasi untuk banyakya angka
    scanf("%d",&n);// masukan dari user
    balok p[n];
    //memasukan data dari user
    for(int i = 0;i < n; i++){
        scanf("%d %d %d",&p[i].masukan1,&p[i].masukan2,&p[i].masukan3);
    }
    int banyak;// wadah untuk dekrasasi banyaknya yang harus di printf
    scanf("%d",&banyak);// masukan daru user
    int terpanjang[banyak];
    int cek = 0;// untuk penecekan pertama
    int cek2 = 0;// pengecekan kedua
    for(int i = 0;i < banyak; i++){
        terpanjang[i] = 0;
        cek = 0;
        for(int j = 0;j < n; j++){// pencari nilai terbesar dari ketiga bilangan
            terpanjang[i] = menghitung(p,terpanjang[i],j);
        }
        for(int j = 0;j < n; j++){// menghapus bilangan terbesar dari array dengan sama dengan 0
            if(p[j].masukan1 == terpanjang[i]){
                p[j].masukan1 = 0;
            }
            if(p[j].masukan2 == terpanjang[i]){
                p[j].masukan2 = 0;
            }
            if(p[j].masukan3 == terpanjang[i]){
                p[j].masukan3 = 0;
            }
        }
            //printf(" %d ",terpanjang[i]);
    }
    for(int i = 0;i < banyak;i++){// menampilkan hasil kelayar
        printf("%d\n",terpanjang[i]);
    }
    return 0;
}