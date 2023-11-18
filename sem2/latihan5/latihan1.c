#include <stdio.h>

typedef struct{
    int nilai;
}nl;

void bubble_sort(int jumlah,nl angka[jumlah]){
    int tukar = 1,temp;
    do{
        tukar = 0;
        for(int i = 0;i < jumlah - 1;i++){
            if(angka[i].nilai > angka[i + 1].nilai){
                temp = angka[i].nilai;
                angka[i].nilai = angka[i + 1].nilai;
                angka[i + 1].nilai = temp;
                tukar = 1;
            }
        }
    }while(tukar == 1);
}

int main()
{
    int jumlah;
    scanf("%d", &jumlah);
    nl angka[jumlah];
    for(int i = 0; i < jumlah; i++){
        printf("masukan nilai ke-%d :", i + 1);
        scanf("%d", &angka[i].nilai);
    }
    bubble_sort(jumlah,angka);
    for(int i = 0; i < jumlah; i++){
        printf("nilai ke-%d = %d\n", i + 1,angka[i].nilai);
    }
    return 0;
}
