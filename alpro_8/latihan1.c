#include <stdio.h>
#include <string.h>
int main(){
    char orang[100];
    char panjang[100];
    int i = -1;
    int cek;
    do{
        i++;
        scanf("%s",orang);
        int cek = strcmp(orang, "selesai");
        if(cek != 0){
            if(i == 0){
                strcpy(panjang,orang);
            }else{
                if(strlen(panjang) < strlen(orang)){
                    strcpy(panjang,orang);
                }
                if(strlen(panjang) == strlen(orang)){
                    if(strcmp(panjang,orang) > 0){
                        strcpy(panjang,orang);
                    }
                }
            }
        }
    }while (strcmp(orang, "selesai") != 0);
    printf("string terpanjang adalah %s dengan panjang %d karakter",panjang,strlen(panjang));
    return 0;
}