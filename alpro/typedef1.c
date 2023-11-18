#include <stdio.h>

typedef struct{
    int x;
    int y;
    int hasil;
}titik;

int main(){
    int penghitung;
    int jumlah;
    //printf("masukan jumlah array :");
    scanf("%d",&jumlah);
    titik tabint[jumlah];
    for(penghitung = 0;penghitung < jumlah;penghitung++){
        //printf("masukan x ke-%d :",penghitung+1);
        scanf("%d",&tabint[penghitung].x);
        //printf("masukan y ke-%d :",penghitung+1);
        scanf("%d",&tabint[penghitung].y);
    }
    printf("titik yang memenuhui syarat\n");
    for(penghitung = 0;penghitung < jumlah;penghitung++){
        if(tabint[penghitung].x % 2 == 1 && (tabint[penghitung].y > tabint[penghitung].x)){
            printf("titik x ke-%d :%d %d\n",penghitung,tabint[penghitung].x,tabint[penghitung].y);
        }
    }
    return 0;
}