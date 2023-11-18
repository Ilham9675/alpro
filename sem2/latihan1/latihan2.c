#include <stdio.h>

int main(){
    int baris1;
    int kolom1;
    printf("matriks pertama\n");
    printf("masukan baris matriks :");
    scanf("%d",&baris1);
    printf("masukan kolom matriks :");
    scanf("%d",&kolom1);
    int matriks1[baris1][kolom1];
    for(int i = 0; i < baris1;i++){
        for(int j = 0;j < kolom1;j++){
            scanf("%d",&matriks1[i][j]);
        }
    }
    printf("matriks kedua\n");
    int baris2;
    int kolom2;
    printf("masukan baris matriks :");
    scanf("%d",&baris2);
    printf("masukan kolom matriks :");
    scanf("%d",&kolom2);
    int matriks2[baris2][kolom2];
    for(int i = 0; i < baris2;i++){
        for(int j = 0;j < kolom2;j++){
            scanf("%d",&matriks2[i][j]);
        }
    }
    int hasil[baris1][kolom2];
    if(kolom1 != baris2){
        printf("error");
        return 0;
    }
    for(int i = 0; i < baris1;i++){
        for(int j = 0;j < kolom2;j++){
            hasil[i][j] = 0;
            for(int k = 0;k < baris2;k++){
                hasil[i][j] += matriks1[i][k] * matriks2[k][j];
            }
        }
    }
    printf("\n");
    
    printf("matriks hasil\n");
    for(int i = 0; i < baris1;i++){
        for(int j = 0;j < kolom2;j++){
            if(j == 0){
                printf("%d",hasil[i][j]);
            }else{
                printf(" %d",hasil[i][j]);
            }
        }
        printf("\n");
    }


    return 0;
}