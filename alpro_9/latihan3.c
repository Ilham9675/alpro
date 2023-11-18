#include <stdio.h>
#include <string.h>

int main(){
    int panjang;
    scanf("%d",&panjang);
    char array[panjang][100];
    for(int a = 0;a < panjang;a++){
        scanf("%s",array[a]);
    }
    int setengah;
    
    for(int a = 0;a < panjang;a += 2){
        printf("%s",array[a]);
        if(a + 2 < panjang){
            for(int b = 0;b < strlen(array[a+1]);b++){
                printf(" ");
            }
        }
    }
    printf("\n");
    for(int a = 0;a < strlen(array[0]);a++){
        printf(" ");
    }
    for(int a = 1;a < panjang;a += 2){
        printf("%s",array[a]);
        if(a + 2 < panjang){
            for(int b = 0;b < strlen(array[a+1]);b++){
                printf(" ");
            }
        }
    }
    printf("\n");
    for(int a = 0;a < panjang;a += 2){
        for(int b = strlen(array[a]) - 1;b >= 0;b--){
            printf("%c",array[a][b]);
        }
        if(a + 2 < panjang){
            for(int b = 0;b < strlen(array[a+1]);b++){
                printf(" ");
            }
        }
    }
    printf("\n");
    for(int a = 0;a < strlen(array[0]);a++){
        printf(" ");
    }
    for(int a = 1;a < panjang;a += 2){
        for(int b = strlen(array[a]) - 1;b >= 0;b--){
            printf("%c",array[a][b]);
        }
        if(a + 2 < panjang){
            for(int b = 0;b < strlen(array[a+1]);b++){
                printf(" ");
            }
        }
    }
    printf("\n");
    return 0;
}