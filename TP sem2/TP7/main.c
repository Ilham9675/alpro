/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal
TP7 dalam mata kuliah algoritma dan pemlograman 2
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
#include "header.h"

int main(){
    int jumlah;// wadah untuk jumlah
    scanf("%d",&jumlah);// masukan jumlah dari user
    atom bom[jumlah];// wadah untuk bungkusan senyawa
    for(int i=0; i<jumlah; i++){
        scanf("%s %d %d",&bom[i].nama,&bom[i].nomeratom,&bom[i].power);// masukan untuk nama senyawa , nomer atom  dan power senyawa 
    }
    total kes[jumlah*jumlah*jumlah];// wadah untuk bungkusan kombinasi
    int a = kemungkinan(jumlah,kes,bom);// masukan untuk jumlah dan mencari dan memasukan 
    sorting(a,kes);
    
    printf("Hasil Seleksi:\n");
    sequentialsearch(a, kes);// untuk mencari nilai yang lebih besar dari 1.5 dan menampilkanya
    if(binarysearch(a,kes) == 1){// untuk mencari pakah ada nilai yang 3.00 pas dan menampilkan kata di bawah ininjika ada
        printf("ada kombinasi barang dengan rasio tepat 3 kali lipat\n");
        printf("James T. Kirk berhasil menghancurkan starship Narada\n");
    }else{// dan jika tidak ada maka tampilkan else
        printf("Tidak ada kombinasi atom dengan rasio tepat 3 kali lipat\n");
        printf("James T. Kirk gagal menghancurkan starship Narada\n");
    }
    

    return 0;
}