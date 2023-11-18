#include "header.h"

int main(){
    int masukan;
    scanf("%d",&masukan);
    char array[masukan][100];
    for(int i = 0;i < masukan;i++){
        scanf("%s",array[i]);
    }
    
    int layar = 0;
 
    char baru[masukan][100];
    for(int a = 0;a < masukan;a++){
        int jumlah = strlen(array[a]) - 2;
        for(int b = 0;b < jumlah;b){
            int cek = 0;
            
            cek = vokal(array[a][b],cek);
            
            cek = konsonan(array[a][b + 1],cek);
            
            cek = vokal(array[a][b + 2],cek);
           
            
            if(3 == cek){
                baru[layar][0] = array[a][b];
                
                baru[layar][1] = array[a][b + 1];
                
                baru[layar][2] = array[a][b + 2];
                
                b += 3;
                layar++;
            }else{
                b++;
            }
        }
        
    }
    for(int i = 0; i < layar;i++){
        if(i == 0){
            printf("%c%c%c\n", baru[i][0], baru[i][1], baru[i][2]);
        }else if(i == layar - 1){
            printf("%c%c%c\n", baru[i][0], baru[i][1], baru[i][2]);
        }else{
            printf("   %c%c%c\n", baru[i][0], baru[i][1], baru[i][2]);
        }
    }
    return 0;
}