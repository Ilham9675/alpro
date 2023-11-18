/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal
TP6 dalam mata kuliah algoritma dan pemlograman 2
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
#include "header.h"
int main(){
    // memasukan data pertama
    int jum1;// jumlah data pertama
    scanf("%d",&jum1);// masukan jumlah data
    ps asrama1[jum1];// bungkusan untuk data pertama 
    masukan(jum1,asrama1,'@');// masukan data pertama dari user
    // masukan data kedua
    int jum2;// jumlah data kedua
    scanf("%d",&jum2);// masukan jumlah data
    ps asrama2[jum2];// bungkusan untuk data kedua
    masukan(jum2,asrama2,'&');// masukan data kedua dari user
    // memasukan data ketiga
    int jum3;// jumlah data ketiga
    scanf("%d",&jum3);// masukan jumlah data
    ps asrama3[jum3];// bungkusan untuk data ketiga
    masukan(jum3,asrama3,'!');// masukan data ketiga dari user
    // memasukan data keempat
    int jum4;// jumlah data keempat
    scanf("%d",&jum4);// masukan jumlah data
    ps asrama4[jum4];// bungkusan untuk data keempat 
    masukan(jum4,asrama4,'$');// masukan data keempat dari user

    char tipe[100];// wadah untuk tipe untuk pengurutan atau sorting
    int batas;// batasan waktu yang akan menjaga kastil

    scanf("%d %s",&batas,&tipe);// masukan batas dan tipe sorting
    
    insert_sort(jum1,asrama1,tipe);// melakukan sorting data asrama1
    insert_sort(jum2,asrama2,tipe);// melakukan sorting data asrama2
    insert_sort(jum3,asrama3,tipe);// melakukan sorting data asrama3
    insert_sort(jum4,asrama4,tipe);// melakukan sorting data asrama4

    int jumhasil;// wadah untuk jumlah data keseluruhan
    int sem;// wadah untuk jumlah data pertama
    ps hasil1[jum1+jum2+jum3+jum4];// bungkusan untuk hasil data pertama
    ps hasil2[jum1+jum2+jum3+jum4];// bungkusan untuk hasil data kedua
    jumhasil = jum1 + jum2;// jumlah data penggabungan pertama
    merge(jum1,asrama1,jum2,asrama2,jumhasil,hasil1, tipe);// penggabungan data satu dan data dua
    sem = jumhasil;// jumlah sata penggabungan data pertama
    jumhasil += jum3;// jumlah data penggabungan kedua
    merge(jum3,asrama3,sem,hasil1,jumhasil,hasil2, tipe);// penggabungan data tiga dan gabungan data  pertama
    sem = jumhasil;// jumlah sata penggabungan data kedua
    jumhasil += jum4;// jumlah data penggabungan ketiga
    merge(jum4,asrama4,sem,hasil2,jumhasil,hasil1, tipe);// penggabungan data tiga dan gabungan data  kedua

    int terbanyak = 0;
    // pencari panjang nama terpanjangn yang akan di jadikan patokan tampilan 
    for (int i = 0; i < jumhasil; i++)
    {
        if (terbanyak < strlen(hasil1[i].nama))
        {                                             
            terbanyak = strlen(hasil1[i].nama); 
        }
    }
    int total1 = 0,total2 = 0,total3 = 0;
    printf("*-,_,-*`*-,_,-*`*-,_,-*`*-,_,-*`*-,_,-*\n\n");
    printf("= A L L   W I Z A R D S =\n");
    // untuk menampilkan data
    for(int i=0;i<jumhasil;i++){
        printf("%s",hasil1[i].nama);// tampilan nama 
        for(int j=0;j<=terbanyak - strlen(hasil1[i].nama);j++){// spasi nama degan kode 
            printf(" ");
        }
        printf("%c %d %s\n",hasil1[i].code,hasil1[i].magicpower,hasil1[i].nama_sihir); // menampilkan kode , magicpower dan nama sihir
        total1 += hasil1[i].magicpower;// pemasukan total pertama
    }
    
    int indek = jumhasil - 1;// pemasukan indek untuk penghitungan dari belakang
    int cek2 = 0;
    while(batas > 0){// mencari siapa saja yang akan menjaka istana dan di mulai dari belakang
        total2 += hasil1[indek].magicpower;// pemasukan total ke 2
        batas -= hasil1[indek].magicpower;
        cek2++;
        indek--;
        
    }

    
    printf("\n*-,_,-*`*-,_,-*`*-,_,-*`*-,_,-*`*-,_,-*\n\n");
    printf("= B A T T L E   L I N E U P =\n");
    for(int i=0;i<jumhasil - cek2;i++){// penampilan data kedua yang sudah di kurangi dengan yang menjaga menara
        printf("%s",hasil1[i].nama);// tampilan nama
        for(int j=0;j<=terbanyak - strlen(hasil1[i].nama);j++){// spasi antara nama dan kode
            printf(" ");
        }
        printf("%c %d %s\n",hasil1[i].code,hasil1[i].magicpower,hasil1[i].nama_sihir); // menampilkan kode , magicpower dan nama sihir
        total3 += hasil1[i].magicpower;// pemasukan total ke tiga
    }
    printf("\n*-,_,-*`*-,_,-*`*-,_,-*`*-,_,-*`*-,_,-*\n\n");
    // penampilan data terakhir
    printf("= P O W E R   S T A T I S T I C S =\n");
    printf("Total Power      : %d\n",total1);
    printf("Battle Power     : %d\n",total3);
    printf("Evacuation Power : %d\n",total2);
    printf("\n*-,_,-*`*-,_,-*`*-,_,-*`*-,_,-*`*-,_,-*\n");

    return 0;
}