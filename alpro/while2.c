#include <stdio.h>
#include <stdlib.h>

int main(){
    int penghitung;
    int maks;
    int jumlah;
    printf("masukan jumlah array :");
    scanf("%d",&jumlah);
    system("cls");
    int tabint[jumlah];
    for(penghitung = 0;penghitung < jumlah;penghitung++){
        printf("masukan angka ke-%d :",penghitung+1);
        scanf("%d",&tabint[penghitung]);
    }
    system("cls");
    maks = 0;
    penghitung = 0;
    while((maks < 3) && (penghitung < jumlah)){
        if(tabint[penghitung] % 2 == 0){
            maks++;
            printf("angka genap ke-%d :%d\n",maks,tabint[penghitung]);
        }
        penghitung++;
    }
    return 0;
}