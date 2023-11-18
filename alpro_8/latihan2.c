#include <stdio.h>
#include <string.h>

int main(){
    char nama[100];
    char namadepan[50];
    char namabelakang[50];
    scanf("%s",nama);
    int jumnama = strlen(nama);
    int jumdepan;
    if(jumnama % 2 == 1){
        jumdepan = (jumnama / 2) + 1;
    }else{
        jumdepan = jumnama / 2;
    }
    int a = jumnama;
    do{
        a--;
        printf("%c",nama[a]);
    }while(a > jumdepan);
    printf("\n");
    a = jumdepan;
    do{
        a--;
        printf("%c",nama[a]);
    }while(a > 0);
    printf("\n");
    return 0;
}