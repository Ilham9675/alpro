#include "header.h"

int main(){
    char huruf[50];
    char nama[4][100];
    for(int i = 0;i < 4;i++){
        scanf("\n%[^\n]s",nama[i]);
    }
    scanf("\n%[^\n]s",huruf);
    char baru[4][100];
    int indek = 0;
    for(int i = 0;i < 4;i++){
        indek = 0;
        for(int j = 0;j < strlen(nama[i]);j++){
            if(nama[i][j] != 32){
                baru[i][indek] = nama[i][j];
                indek++;
            }
        }
        baru[i][indek] = '\0';
    }
    int cek[4];
    for(int i = 0;i < 4;i++){
        cek[i] = 0;
        for(int j = 0;j < strlen(baru[i]);j++){
            for(int k = j + 1;k < strlen(baru[i]);k++){
                if(baru[i][j] == baru[i][k]){
                    cek[i]++;
                }
            }
        }
    }
    int s1 = 0;
    if(cek[0] != 0 || cek[1] != 0 || cek[2] != 0 || cek[3] != 0){
        s1++;
    }

    for(int i = 0; i < 4;i++){
        cek[i] = 0;
        if((baru[i][0] != baru[i][1] - 1) && (baru[i][1] != baru[i][2] - 1)){
            cek[i]++;
        }
        if((baru[i][3] != baru[i][4] - 1) && (baru[i][4] != baru[i][5] - 1)){
            cek[i]++;
        }
        if((baru[i][6] != baru[i][7] - 1) && (baru[i][7] != baru[i][8] - 1)){
            cek[i]++;
        }
        if((baru[i][9] != baru[i][10] - 1) && (baru[i][11] != baru[i][12] - 1)){
            cek[i]++;
        }
    }
    int s2 = 0;
    if(cek[0] != 0 || cek[1] != 0 || cek[2] != 0 || cek[3] != 0){
        s2++;
    }
    int total = 0;
    for(int i = 0;i < 4;i++){
        for(int j = 0;j < strlen(baru[i]);j++){
            total += baru[i][j];
        }
    }
    int pindah = total % 26;
    if(s1 == 0 || s2 == 0){
        for(int i = 0;i < strlen(huruf);i++){
            huruf[i] = move(huruf[i],pindah);
        }
        printf("%s",huruf);
        hasil(s1,s2);
    }else{
        printf("%s Cannot be Decrypted.\n",huruf);
    }
    return 0;
}