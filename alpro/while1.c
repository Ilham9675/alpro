#include <stdio.h>


int main(){
    int penghitung;
    int jumlah;
    printf("masukan jumlah array :");
    scanf("%d",&jumlah);
    int tabint[jumlah];
    for(penghitung = 0;penghitung < jumlah;penghitung++){
        printf("masukan angka ke-%d :",penghitung+1);
        scanf("%d",&tabint[penghitung]);
    }
    penghitung = 0;
    while((tabint[penghitung] != 999) && (penghitung < jumlah)){
        printf("angka ke-%d :%d\n",penghitung+1,tabint[penghitung]);
        penghitung++;
    }
    return 0;
}