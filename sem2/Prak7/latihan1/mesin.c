#include "header.h"

void sequentialsearch(int jumlah, int arr[jumlah],int value[jumlah], int target){
    int i = 0;// indek pengulangan 
    while(i < jumlah){// pengulangan dengan batasan jumlah
        if(((arr[i] % 100) / 10) == target){// jika array indek i di modulo 100 dan di bagi 10 iti sama syaratnya maka akan value akan di set 1 berarti ada
            value[i] = 1;
        }else{// jika tidak sama dengan maka akan di set 0 dan itu diarikan nilai tersebut bukan nilai yang di cari
            value[i] = 0;
        }
        i++;
    }
}