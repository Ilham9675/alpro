#include <stdio.h>

int main(){
    int jumlah;
    scanf("%d",&jumlah);
    char array[jumlah];
    int index = 0;
    while(index < jumlah){
        scanf(" %c",&array[index]);
        index++;
    }
    index = 0;
    int ketemu = 0;
    while (ketemu == 0 && jumlah > index){
        if(array[index] == 'index' || array[index] == 'A'){
            ketemu = 1;
        }
        index++;
    }
    if(ketemu == 1){
        printf("Ada huruf a, yang pertama di indeks ke-%d\n",index - 1);
    }else{
        printf("Tidak ada huruf a\n");
    }
    return 0;
}