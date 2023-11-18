#include <stdio.h>


int main(){
    int penghitung;
    int ketemu;
    int jumlah;
    printf("masukan jumlah array :");
    scanf("%d",&jumlah);
    int tabint[jumlah];
    for(penghitung = 0;penghitung < jumlah;penghitung++){
        printf("masukan angka ke-%d :",penghitung+1);
        scanf("%d",&tabint[penghitung]);
    }
    ketemu = 0;
    penghitung = 0;
    while((ketemu == 0) && (penghitung < jumlah)){
        if((tabint[penghitung] % 2) == 1){
            ketemu = 1;
        }else{
            penghitung++;
        }
    }
    if(ketemu == 0){
        printf("tidak ada angka ganjil\n");
    }else{
        printf("ada angka ganjil");
    }
    return 0;
}