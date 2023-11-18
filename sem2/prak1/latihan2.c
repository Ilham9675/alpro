#include <stdio.h>

void mencari(int baris ,int kolom,int matriks[baris][kolom]){
    int angka_yang_dicari;
    scanf("%d",&angka_yang_dicari);
    printf("letak dari nilai %d pada matriks yaitu:\n",angka_yang_dicari);
    for(int i = 0;i < baris;i++){
        for(int j = 0;j < kolom; j++){
            if(matriks[i][j] == angka_yang_dicari){
                printf("- baris ke-%d dan kolom k3-%d\n",i+1,j+1);
            }
        }
    }
}

void mengkali(int baris ,int kolom,int matriks[baris][kolom]){
    int angka_yang_dikali;
    scanf("%d",&angka_yang_dikali);
    for(int i = 0;i < baris;i++){
        for(int j = 0;j < kolom; j++){
            matriks[i][j] *= angka_yang_dikali;
            if(j == 0){
                printf("%d",matriks[i][j]);
            }else{
                printf(" %d",matriks[i][j]);
            }
        }
        printf("\n");
    }
}

void transpose(int baris ,int kolom,int matriks[baris][kolom]){
    int transpose_matriks[kolom][baris];
    for(int i = 0;i < baris;i++){
        for(int j = 0;j < kolom;j++){
            transpose_matriks[j][i] = matriks[i][j];
        }
    }
    for(int i = 0;i < kolom;i++){
        for(int j = 0;j < baris;j++){
            if(j == 0){
                printf("%d",transpose_matriks[i][j]);
            }else{
                printf(" %d",transpose_matriks[i][j]);
            }
        }
        printf("\n");
    }
}

void cermin(int baris ,int kolom,int matriks[baris][kolom]){
    int cermin_matriks[kolom][baris];
    for(int i = 0;i < baris;i++){
        for(int j = 0;j < kolom;j++){
            cermin_matriks[i][kolom - (j + 1)] = matriks[i][j];
        }
    }
    for(int i = 0;i < baris;i++){
        for(int j = 0;j < kolom;j++){
            if(j == 0){
                printf("%d",cermin_matriks[i][j]);
            }else{
                printf(" %d",cermin_matriks[i][j]);
            }
        }
        printf("\n");
    }
}

void perbandingan(int baris ,int kolom,int matriks[baris][kolom]){
    int pembanding_baris_matriks;
    int pembanding_kolom_matriks;
    scanf("%d",&pembanding_baris_matriks);
    scanf("%d",&pembanding_kolom_matriks);
    int pembanding_matriks[pembanding_baris_matriks][pembanding_kolom_matriks];
    int indikator = 0;
    for(int i = 0;i < pembanding_baris_matriks;i++){
        for(int j = 0;j < pembanding_kolom_matriks;j++){
            scanf("%d",&pembanding_matriks[i][j]);
            if(pembanding_matriks[i][j] == matriks[i][j]){
                indikator++;
            }
        }
    }
    if(indikator == baris * kolom){
        printf("kedua matriks memiliki nilai yang sama!\n");
    }else{
        printf("kedua matriks tidak memiliki nilai yang sama!\n");
    }
}

int main(){
    int baris, kolom;
    scanf("%d %d",&baris,&kolom);
    int matriks[baris][kolom];
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            scanf("%d",&matriks[i][j]);
        }
    }
    int menu;
    scanf("%d",&menu);
    switch(menu){
        case 1:{
            mencari(baris,kolom,matriks);
            break;
        }
        case 2:{
            mengkali(baris,kolom,matriks);
            break;
        }
        case 3:{
            transpose(baris,kolom,matriks);
            break;
        }
        case 4:{
            cermin(baris,kolom,matriks);
            break;
        }
        case 5:{
            perbandingan(baris,kolom,matriks);
            break;
        }
        default:{
            break;
        }
    }
    return 0;
}