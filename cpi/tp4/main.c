#include "header.h"

int main() {
    int jumlah;
    scanf("%d",&jumlah);
    char nama[jumlah][100];
    int umur[jumlah];
    char kode[5];
    for (int i = 0; i < jumlah; i++){
        scanf("%s %d",nama[i],&umur[i]);
    }
    scanf("%s",kode);
    int indikator1 = 0, indikator2;
    for (int i = 0; i < strlen(nama[0]); i++)
    {
        indikator1 += nama[0][i];
    }
    
    indikator2 = umur[0];
    
    if(kode[0] == 'I'){
        insertion(jumlah, nama, umur, kode);
    }else{
        selection(jumlah, nama, umur, kode);
    }
    for (int i = 0; i < strlen(nama[0]); i++)
    {
        indikator1 += nama[0][i];
    }
    indikator2 += umur[0];
    int terpanjang = 0;
    for(int i = 0; i < jumlah;i++){
        if(terpanjang < strlen(nama[i])){
            terpanjang = strlen(nama[i]);
        }
    }
    printf("Hasil setelah diurutkan :\n");
    for (int i = 0; i < jumlah; i++){
        printf("%s  ",nama[i]);
        for (int k = 0; k < terpanjang - strlen(nama[i]); k++){
            printf(" ");
        }
        printf("%d\n",umur[i]);
        
    }
    printf("Selamat, Anda masuk ke asrama ");
    if((indikator1%2 == 0) && (indikator2%2 == 0)){
        printf("Gryffindor!\n");
    }else if((indikator1 % 2 == 0) && (indikator2%2 == 1)){
        printf("Hufflepuff!\n");
    }else if((indikator1 % 2 == 1) && (indikator2%2 == 1)){
        printf("Ravenclaw!\n");
    }else{
        printf("Slytherin!\n");
    }
    return 0;
}