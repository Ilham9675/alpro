/*
Saya ilham akbar[2201017] mengerjakan soal
uas dalam mata kuliah algoritma dan pemrograman 1
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include "header.h"

int main(){
    int masukan;//wadah untuk  jumlah array
    scanf("%d",&masukan);// pemasukan jumlah array dari user
    char array[masukan][100];// wadah untuk array 
    // masukan dari user
    for(int i = 0;i < masukan;i++){
        scanf("%s",array[i]);
    }
    int layar = 0;// untuk mengecek dimana karakter harus di printf apakah ada spasi atau tidak
    for(int a = 0;a < masukan;a++){// pengulangan jumlah array
        for(int b = 0;b < strlen(array[a]) - 2;b){// pengulangan jumlah karakter setiap array
            int cek = 0;
            cek = pengecekankonsonan(array[a][b],cek);
            cek = pengecekanvokal(array[a][b + 1],cek);
            cek = pengecekankonsonan(array[a][b + 2],cek);
            // menecek apakah ketiga kata memenuhi syarat kalau iya pengulangan di di plus 3 kalau tidak pengeulangan plur satu
            if(3 == cek){
                pengeluaran(layar,array[a][b],array[a][b + 1],array[a][b + 2]);
                b += 3;
                layar++;
            }else{
                b++;
            }
        }
    }
    return 0;
}