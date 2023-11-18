#include <stdio.h>
#include <string.h>

int main(){
    char kunci[100];
    scanf("%s",kunci);
    int jumlah;
    scanf("%d",&jumlah);
    char kalimat[jumlah][100];
    for(int a = 0; a < jumlah;a++){
        scanf("%s",kalimat[a]);
    }
    char dibersikan[jumlah][100];
    int jumlahbersih;
    for(int a = 0; a < jumlah;a++){
        jumlahbersih = 0;
        for(int b = 0; b < strlen(kalimat[a]);b++){
            if((kalimat[a][b] > 64 && kalimat[a][b] < 91) || (kalimat[a][b] > 96 && kalimat[a][b] < 123)){
                dibersikan[a][jumlahbersih] = kalimat[a][b];
                jumlahbersih++;
            }
            if(b == strlen(kalimat[a]) - 1){
                dibersikan[a][jumlahbersih] = '\0';
            }
        }
        //printf("*%s ",dibersikan[a]);
    }
    int total = 0;
    for(int a = 0; a < strlen(kunci); a++){
        total += kunci[a];
    }
    
    int k = total % 26;
    if(total % 2 == 1){
        for(int a = 0; a < jumlah; a++){
            for(int b = 0; b < strlen(dibersikan[a]); b++){
                int wadah = dibersikan[a][b];
                if((wadah > 64 && wadah < 91)){
                    wadah -= k;
                    if((wadah < 65)){
                        wadah += 26;
                    }
                    dibersikan[a][b] = wadah;
                }else{
                    wadah -= k;
                    if(wadah < 97){
                        wadah += 26;
                    }
                    dibersikan[a][b] = wadah;
                }
            }
        }
    }else{
        for(int a = 0; a < jumlah; a++){
            for(int b = 0; b < strlen(dibersikan[a]); b++){
                int wadah = dibersikan[a][b];
                if((wadah > 64 && wadah < 91)){
                    wadah += k;
                    if(wadah > 90){
                        wadah -= 26;
                    }
                    dibersikan[a][b] = wadah;
                }else{
                    wadah += k;
                    if(wadah > 122){
                        wadah -= 26;
                    }
                    dibersikan[a][b] = wadah;
                }
            }
        }
    }
    int ascii[jumlah];
    for(int a = 0; a < jumlah;a++){
        ascii[a] = 0;
        for(int b = 0; b < strlen(dibersikan[a]);b++){
            ascii[a] += dibersikan[a][b];
        }
    }
    int bohong = 0;
    int jujur = 0;
    for (int a = 0;a < jumlah;a++){
        if(ascii[a] % 2 == 0){
            jujur++;
        }else{
            bohong++;
        }
    }
    printf("%d\n",k);
    for(int a = 0;a < jumlah;a++){
        if(a == 0){
            printf("%s",dibersikan[a]);
        }else{
            printf(" %s",dibersikan[a]);
        }
    }
    printf("\n");
    int i = 0;
    printf("Kelompok kata kejujuran:\n");
    if(jujur == 0){
        printf("Dia tidak berkata jujur!\n");
    }else{
        for(int a = 0; a < jumlah;a++){
            if(ascii[a] % 2 == 0){
                for(int b = 0; b < 24 - strlen(dibersikan[a]);b++){
                    printf(" ");
                }
                if(i % 2 == 0){
                    for(int b = strlen(dibersikan[a]) - 1; b >= 0;b--){
                        printf("%c",dibersikan[a][b]);
                    }
                    printf("\n");
                }else{
                    printf("%s\n",dibersikan[a]);    
                }
                i++;
            }
        }
    }
    printf("\n");
    printf("Kelompok kata dicurigai kebohongan:\n");
    i = 0;
    if(bohong == 0){
        for(int a = 0; a < 17; a++){
            printf(" ");
        }
        printf("Dia berkata jujur!\n");
    }else{
        for(int a = 0; a < jumlah;a++){
            if(ascii[a] % 2 == 1){
                for(int b = 0; b < 35 - strlen(dibersikan[a]);b++){
                    printf(" ");
                }
                if(i % 2 == 1){
                    for(int b = strlen(dibersikan[a]) - 1; b >= 0;b--){
                        printf("%c",dibersikan[a][b]);
                    }
                    printf("\n");
                }else{
                    printf("%s\n",dibersikan[a]);    
                }
                i++;
            }
        }
    }
    return 0;
}