#include "header.h"

int main(){
    int baris, kolom;//wadah untuk masukan baris dan kolom
    scanf("%d %d",&baris,&kolom);// memasukan baris dan kolom ke dalam variabel
    int matriks[baris][kolom];// wadah untuk matriks dengan batasan baris dan kolom yang tadi di imput

    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            scanf("%d",&matriks[i][j]);// memasukan bilangan matrik sesuai urutan dan koordinat baris kolom
        }
    }
    int menu;// wadah untuk menu pilihan
    scanf("%d",&menu);// masukan untuk menu
    switch(menu){
        case 1:{
            mencari(baris,kolom,matriks);// untuk menu pertama 
            break;
        }
        case 2:{
            mengkali(baris,kolom,matriks);// untuk menu kedua
            break;
        }
        case 3:{
            transpose(baris,kolom,matriks);// untuk menu kedua
            break;
        }
        case 4:{
            cermin(baris,kolom,matriks);// untuk menu ketiga
            break;
        }
        case 5:{
            perbandingan(baris,kolom,matriks);// untuk menu keempat
            break;
        }
        default:{
            printf("manu yang anda pilih tidak ada!!")
            break;
        }
    }
    
    
    return 0;
}