/*
Saya ilham akbar[2201017] mengerjakan soal
uas dalam mata kuliah algoritma dan pemrograman 1
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include "header.h"

int main(){
    int masukan;// wadah untuk jumlah masukan struct integer
    scanf("%d",&masukan);// pemasukan jumlah struct integer
    kotak m[masukan];// pemasukan jumlah struct
    // pemasukan inputan dari user
    for(int i = 0;i < masukan;i++){// pengulangan untuk jumlah struct
        for(int j = 0;j < 4;j++){// pengulangan untuk jumlah integer
            scanf("%d",&m[i].balok[j]);// masukan dari user
        }
    }
    int spasi = 0;// wadah untuk menampung jumlah spasi
    int hasil[2];// wadah untuk menampung jumlah hasil
    int indek = 0;// wadah untuk menampung indek hasil
    for(int i = 0;i < masukan;i++){// pengulangan jumlah struct yang akan di cari nilai tengahnya
        int plus;
            int max;// wadah untuk nilai minimum
            int min;// wadah untuk nilai maksimum
            indek = 0;// meriset indek hasil
            // untuk mencari nilai minimum
            for(int k = 0;k < 4;k++){
                if(k == 0){
                    min = m[i].balok[k];
                }else{
                    if(min > m[i].balok[k]){
                        min = m[i].balok[k];
                    }
                }
            }
            // untuk mencari nilai maksimum
            for(int k = 0;k < 4;k++){
                if(k == 0){
                    max = m[i].balok[k];
                }else{
                    if(max < m[i].balok[k]){
                        max = m[i].balok[k];
                    }
                }
            }
            //untuk menonaktifkan setiap nilai agar mempermudah pencarian nilai tengah
            for(int k = 0;k < 4;k++){
                if(min == m[i].balok[k]){
                    m[i].balok[k] = 0;
                }
                if(max == m[i].balok[k]){
                    m[i].balok[k] = 0;
                }
            }
            // untuk mencari nilai tengah dari struct
            for(int k = 0;k < 4;k++){
                if(m[i].balok[k] != 0){
                    hasil[indek] = m[i].balok[k];
                    indek++;
                }
            }
            tampilan(spasi);// penambahan sepasi untuk menjadi sebuah pola
            
            if(hasil[0] < hasil[1]){// mencari nilai terbesar antara dua integer
                plus = pengeluaran(hasil[0]);// mencari nilai plus yang nanti di konversi menjadi spasi
                spasi += plus;// konversi plus ke hasil
                printf("%d",hasil[0]);// printf hasil
                printf(" ");// keluaran spasi untuk ada jarak di kedua integer
                plus = pengeluaran(hasil[1]);// mencari nilai plus yang nanti di konversi menjadi spasi
                printf("%d\n",hasil[1]);// printf hasil
                spasi += plus + 1;// konversi plus ke hasil di tambah dengan spasi pemisah
            }else{
                plus = pengeluaran(hasil[1]);// mencari nilai plus yang nanti di konversi menjadi spasi
                spasi += plus;// konversi plus ke hasil
                printf("%d",hasil[1]);// printf hasil
                printf(" ");// keluaran spasi untuk ada jarak di kedua integer
                plus = pengeluaran(hasil[0]);// mencari nilai plus yang nanti di konversi menjadi spasi
                printf("%d\n",hasil[0]);// printf hasil
                spasi += plus + 1;// konversi plus ke hasil di tambah dengan spasi pemisah
            }
    }
    return 0;
}