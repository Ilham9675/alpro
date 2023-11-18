#include <stdio.h>
#include <string.h>

typedef struct{
    int pembilang;
    int penyebut;
}bilangan;

void insertion_sort(int jumlah,bilangan angka[jumlah],char pilihan[100]){
    for(int i = 1;i < jumlah; i++){
        int data_sisip1 = angka[i].pembilang;
        int data_sisip2 = angka[i].penyebut;
        int j = i - 1;
        if(strcmp(pilihan,"pembilang") == 0){
            while((data_sisip1 > angka[j].pembilang) && (j >= 0)){
                angka[j + 1].pembilang = angka[j].pembilang;
                angka[j + 1].penyebut = angka[j].penyebut;
                j--;
            }
        }else{
            while((data_sisip2 > angka[j].penyebut) && (j >= 0)){
                angka[j + 1].pembilang = angka[j].pembilang;
                angka[j + 1].penyebut = angka[j].penyebut;
                j--;
            }
        }
        angka[j + 1].pembilang = data_sisip1;
        angka[j + 1].penyebut = data_sisip2;
    }
}
int main(){
    int jumlah;
    scanf("%d",&jumlah);
    bilangan angka[jumlah];
    for(int i=0;i<jumlah;i++){
        scanf("%d",&angka[i].pembilang);
        scanf("%d",&angka[i].penyebut);
    }
    char pilihan[100];
    scanf("%s",&pilihan);
    insertion_sort(jumlah,angka,pilihan);
    
    for(int i=0;i<jumlah;i++){
        printf("%d %d\n",angka[i].pembilang,angka[i].penyebut);
    }
    
    return 0;
}
