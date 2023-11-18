#include <stdio.h>
#include <string.h>

typedef struct{
    char nama[100];
    float nilai;
    char nim[100];
}nilaimatkul;

int main(){
    int jumlah;
    scanf("%d",&jumlah);
    nilaimatkul tabel[jumlah];
    for(int i=0; i<jumlah; i++){
        scanf("%s %s %f",&tabel[i].nim,&tabel[i].nama,&tabel[i].nilai);
    }
    char dicari[100];
    scanf("%s",&dicari);
    int i = 0,ketemu = 0;
    while ((i < jumlah) && (ketemu == 0))
    {
        if(strcmp(tabel[i].nim,dicari) == 0){
            ketemu = 1;
        }else{
            i++;
        }
    }
    if(ketemu == 0){
        printf("tidak ketemu");
    }else{
        printf("ketemu");
    }
    return 0;
}