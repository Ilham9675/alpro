#include <stdio.h>

typedef struct{
    int x;
    int y;
    int hasil;
}titik;

int main(){
    int penghitung;
    int jumlah;
    printf("masukan jumlah array :");
    scanf("%d",&jumlah);
    titik tabint[jumlah];
    for(penghitung = 0;penghitung < jumlah;penghitung++){
        printf("masukan x ke-%d :",penghitung+1);
        scanf("%d",&tabint[penghitung].x);
        printf("masukan y ke-%d :",penghitung+1);
        scanf("%d",&tabint[penghitung].y);
    }
    int total = 0;
    int totalx = 0;
    int totaly = 0;
    for(penghitung = 0;penghitung < jumlah;penghitung++){
        tabint[penghitung].hasil = tabint[penghitung].x + tabint[penghitung].y;
        printf("hasil penjumlahan ke-%d :%d\n",penghitung+1,tabint[penghitung].hasil);
        total += tabint[penghitung].hasil;
        totalx += tabint[penghitung].x;
        totaly += tabint[penghitung].y;
    }
    printf("hasil penjumlahan semuanya array adalah :%d\n",total);
    printf("hasil penjumlahan semuanya x adalah :%d\n",totalx);
    printf("hasil penjumlahan semuanya y adalah :%d\n",totaly);
    return 0;
}