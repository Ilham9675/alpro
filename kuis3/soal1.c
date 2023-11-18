/*
Saya ilham akbar[2201017] mengerjakan soal
kuis 3 dalam mata kuliah algoritma dan pemrograman 1
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct{
    int masukan1,masukan2,masukan3;
}balok;

int main(){
    int n;
    scanf("%d",&n);
    balok p[n];
    for(int i = 0;i < n; i++){
        scanf("%d %d %d",&p[i].masukan1,&p[i].masukan2,&p[i].masukan3);
    }
    int banyak;
    scanf("%d",&banyak);
    int terpanjang[banyak];
    int cek = 0;
    int cek2 = 0;
    for(int i = 0;i < banyak; i++){
        terpanjang[i] = 0;
        cek = 0;
        for(int j = 0;j < n; j++){
            if(p[j].masukan1 > terpanjang[i]){
                terpanjang[i] = p[j].masukan1;
            }
            if(p[j].masukan2 > terpanjang[i]){
                terpanjang[i] = p[j].masukan2;
            }
            if(p[j].masukan3 > terpanjang[i]){
                terpanjang[i] = p[j].masukan3;
            }
        }
        for(int j = 0;j < n; j++){
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
    for(int i = 0;i < banyak;i++){
        printf("%d\n",terpanjang[i]);
    }
    return 0;
}