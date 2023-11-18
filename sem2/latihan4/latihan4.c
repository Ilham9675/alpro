#include <stdio.h>
#include <string.h>

typedef struct{
    int pembilang;
    int penyebut;
}bilangan;

void insertion_sort(int jumlah,bilangan angka[jumlah],char pilihan[100]){
    for(int i = 0;i < jumlah - 1; i++){
        int indek = i;
        if(strcmp(pilihan,"pembilang") == 0){
            for(int j = i + 1;j < jumlah; j++){
                if(angka[indek].pembilang < angka[j].pembilang){
                    indek = j;
                }
            }
        }else{
            for(int j = i + 1;j < jumlah; j++){
                if(angka[indek].penyebut < angka[j].penyebut){
                    indek = j;
                }
            }
        }
        int temp = angka[indek].pembilang;
        angka[indek].pembilang = angka[i].pembilang;
        angka[i].pembilang = temp;
        temp = angka[indek].penyebut;
        angka[indek].penyebut = angka[i].penyebut;
        angka[i].penyebut = temp;
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
