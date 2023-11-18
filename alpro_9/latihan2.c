#include <stdio.h>
#include <string.h>

int main(){
    int panjang;
    scanf("%d",&panjang);
    char array[panjang][100];
    for(int a = 0;a < panjang;a++){
        scanf("%s",array[a]);
    }
    int total = 0;
    for(int a = 0;a < panjang;a++){
        for(int b = 0;b < strlen(array[a]);b++){
            total += array[a][b];
        }
    }
    printf("%d",total);
    if(total % 2 == 0){
        for(int a = 0;a < panjang;a++){
            for(int b = strlen(array[a]) - 1;b >= 0;b--){
                printf("%c",array[a][b]);
            }
            if(a < panjang - 1){
                printf(" ");
            }
        }
    }else{
        for(int a = panjang - 1;a >= 0;a--){
            printf("%s",array[a]);
            if(a > 0){
                printf(" ");
            }
        }
    }
    return 0;
}