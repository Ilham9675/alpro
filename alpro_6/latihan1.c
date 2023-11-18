#include <stdio.h>
typedef struct{
    char nama[100];
    char index[100];
    int indexhasil[100];
    int biner[50];
    int jumlahnama,jumlahindex,jumlahbiner;
    int jumlahascii;
}data;
int main(){
    int jumlah;
    scanf("%d",&jumlah);
    data sempel[jumlah];
    int a = 0;
    while(jumlah > a){
        int b = 0;
        scanf(" %c",&sempel[a].nama[b]);
        while(100 > b && sempel[a].nama[b] != ';'){
            b++;
            scanf(" %c",&sempel[a].nama[b]);
        }
        
        sempel[a].jumlahnama = b;
        b = 0;
        scanf(" %c",&sempel[a].index[b]);
        while(100 > b && sempel[a].index[b] != '.'){
            b++;
            scanf(" %c",&sempel[a].index[b]);
        }
        sempel[a].jumlahindex = b;
        a++;
    }
    a = 0;
    sempel[0].jumlahascii = 0;
    while(a < jumlah){
        int b = 0;
        int total = 0;
        while(sempel[a].jumlahindex > b){
            sempel[a].indexhasil[b] = sempel[a].index[b] - 48;
            b++;
        }
        b = 0;
        while(sempel[a].jumlahindex > b){
            int i = sempel[a].indexhasil[b];
            char d = sempel[a].nama[i];
            total += d;
            b++;
        }

        sempel[a].jumlahascii = total;
        a++;
    }
    a = 0;
    while (a < jumlah){
        int b = 0;
        int binermax = 0;
        sempel[a].jumlahbiner = 0;
        while(b < 20 && sempel[a].jumlahascii > binermax){
           
            if(b == 0){
                binermax = 1;
                sempel[a].jumlahbiner++;
            }else if(b == 1){
                binermax = 2;
                sempel[a].jumlahbiner++;
            }else{
                binermax *= 2;
                sempel[a].jumlahbiner++;
            }
            b++;
        }
        sempel[a].jumlahbiner--;
        binermax /= 2;
        b = 0;
        if(a == 0){
            printf("Biner Awal\n");
        }
        int ascii = sempel[a].jumlahascii;
        while (sempel[a].jumlahbiner > b){
            if(ascii / binermax == 1){
                ascii -= binermax;
                sempel[a].biner[b] = 1;
                printf("%d",sempel[a].biner[b]);
            }else{
                sempel[a].biner[b] = 0;
                printf("%d",sempel[a].biner[b]);
            }
            binermax /= 2;
            b++;
        }
        if(sempel[a].jumlahascii == 0){
            printf("%d",sempel[a].jumlahascii);
        }
        printf("\n");
        a++;
    }
    a = 0;
    printf("\nKode Rahasia\n");
    while(a < jumlah){
        int jumnama = sempel[a].jumlahnama - 1;
        printf("%c%c-",sempel[a].nama[0],sempel[a].nama[jumnama]);
        printf("%d",sempel[a].jumlahascii);
        int b = 0;
        if(sempel[a].jumlahascii == 0){
            while(b < 6){
            printf("-%d",sempel[a].jumlahascii);
            b++;
            printf("%d",sempel[a].jumlahascii);
            b++;
            }
        }else{
            while(b < 6){
                printf("-%d",sempel[a].biner[b]);
                b++;
                printf("%d",sempel[a].biner[b]);
                b++;
            }
        }
        printf("\n");
        a++;
    }

    
    return 0;
}