#include <stdio.h>
#include <string.h>

int main(){
    int jumlahnama;
    scanf("%d",&jumlahnama);
    char nama[jumlahnama][100];
    for(int i=0; i<jumlahnama; i++){
        scanf("%s",nama[i]);
    }
    for(int j=0; j<jumlahnama; j++){
        int jumlah = 0;
        for(int i = 0;i < strlen(nama[j]);i++){
            jumlah += nama[j][i];
        }
        printf("%d %d %d %d\n",jumlah%strlen(nama[j]),jumlah,strlen(nama[j]),jumlah/strlen(nama[j]));
    }
}