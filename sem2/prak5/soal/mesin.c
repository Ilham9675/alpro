#include "header.h"
void quicksortpivottegah(int jumlah,pecahan angka[jumlah],int l,int r){
    int i = l,j = r;
    float temp2, temp1;
    float pivot = angka[(l+r)/2].hasil;
    do
    {
        while ((angka[i].hasil > pivot) && (i <= j))
        {
            i++;
        }
        while ((angka[j].hasil < pivot) && (i <= j))
        {
            j--;
        }
        if(i < j){
            temp1 = angka[i].pembilang;
            angka[i].pembilang = angka[j].pembilang;
            angka[j].pembilang = temp1;

            temp1 = angka[i].penyebut;
            angka[i].penyebut = angka[j].penyebut;
            angka[j].penyebut = temp1;
            
            temp2 = angka[i].hasil;
            angka[i].hasil = angka[j].hasil;
            angka[j].hasil = temp2;
            i++;
            j--;
        }
    } while (i < j);
    if((l < j) && (j < r)){
        quicksortpivottegah(jumlah, angka,l,j);
    }
    if((i < r) && (i > l)){
        quicksortpivottegah(jumlah, angka,i,r);
    }
}

void Bubble_sort(int jumlah,pecahan angka[jumlah]){
    int swap;
    float temp2,temp1;
    do
    {
        swap = 0; 
        for (int i = 0; i < jumlah - 1; i++)
        { 
            if (angka[i].hasil > angka[i + 1].hasil)
            { 
                temp1 = angka[i].pembilang;
                angka[i].pembilang = angka[i + 1].pembilang;
                angka[i+1].pembilang = temp1;

                temp1 = angka[i].penyebut;
                angka[i].penyebut = angka[i + 1].penyebut;
                angka[i+1].penyebut = temp1;

                temp2 = angka[i].hasil;
                angka[i].hasil = angka[i + 1].hasil;
                angka[i+1].hasil = temp2;

                swap = 1;
            }
        }
    } while (swap  == 1);

}

void masukan(int jumlah,pecahan angka[jumlah]){
    for (int i = 0; i < jumlah; i++){
        scanf("%f %f",&angka[i].pembilang,&angka[i].penyebut);
        angka[i].hasil = angka[i].pembilang / angka[i].penyebut;
    }
}

void tampilan(int jumlah,pecahan angka[jumlah]){
    for (int i = 0; i < jumlah; i++){
        printf("%0.f ",angka[i].pembilang);
    }
    printf("\n");
    for (int i = 0; i < jumlah; i++){
        printf("- ");
    }
    printf("\n");
    for (int i = 0; i < jumlah; i++){
        printf("%0.f ",angka[i].penyebut);
    }
    printf("\n");
}