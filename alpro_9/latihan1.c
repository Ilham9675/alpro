#include <stdio.h>
#include <string.h>

int main(){
    int jumlah;
    scanf("%d",&jumlah);
    char array1[jumlah][100];
    char array2[jumlah][100];
    for(int i=0; i<jumlah; i++){
        scanf("%s",array1[i]);
    }
    for(int i=0; i<jumlah; i++){
        scanf("%s",array2[i]);
    }
    int spasi = 0;
    for(int i=0; i<jumlah; i++){
        printf("%s\n",array1[i]);
        spasi += strlen(array1[i]) - 1;
        for(int j=0; j<strlen(array2[i]); j++){
            for(int a = 0;a < spasi; a++){
                printf(" ");
            }
            printf("%c",array2[i][j]);
            if(strlen(array2[i]) - 1 != j){
                printf("\n");
            }else{
                spasi++;
            }
        }
    }
    printf("\n");
    return 0;
}