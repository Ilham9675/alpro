/*
Saya ilham akbar[2201017] mengerjakan soal
UAS dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include "header.h"

int main(){
    char pita[500];// waha untuk string yang di guanakan untuk teks atau wadah 
    char kunci;// wadah untuk kata kunci 
    int cek1 = 0,cek2 = 0;// wadah untuk pengecekan pertama dan kedua 
    int hasil = 0;// wadah untuk hasil yang memenuhi syarat
    scanf("%449[^\n]s",&pita);// pemasukan kalimat dari user
    scanf("\n%c",&kunci);// pemasukan karakter kunci
    start(pita);// memulai mesin karakter
    if(getcc() == kunci){// pengecekan apakah karakter sama dengan kunci jika sama makan pengecekan satu akan bernilai 1 
        cek1 = 1;
    }
    while(eop() == 0){// pengeulangan dengan batasan jika eop bernilai satu
        inc(pita);// pemendahkan karakter 
        if(getcc() == kunci){// pengecekan karakter apakah sama dengan kunci jika sam amakan akan amsuk ke kondisi
            if(cek1 == 0){// kondisi jika nilai pengecekan satu bernilai nol itu artinya belum ada yang sam sebelumnya tau sudah ada tapi sidah di cek
                cek1 = 1;// penambahan nilai pengecekan satu
            }else{// jika nilai cek 1 maka akan dada pengecekan lagi
                if(cek2 > 0 && cek2 <= 2){// jika pengecekan 2 masih nol maka akan dilewat untuk ini jika pengecekan 2 sudah ada 1 atau dua maka akan masuk ke dalam kondisi tapi jika pengecekan dua melebihi 2 maka akan di anggap tidak memenuhi syarat
                    hasil++;
                    cek1 = 0;
                    cek2 = 0;
                }else{// jika tidak memenuhi syarat di atas maka akan pengecekan 2 akan di ke nol kan
                    cek2 = 0;
                }
            }
        }else{// jika tidak tidak sama maka akan masuk ke kondisi ini
            if(cek1 == 1){// jika pengecekan 1 bernilai satu makan akan masuk kondisi jika bernilai nol maka kondisi akan di lewat
                if(getcc() == ' '){// jika karakter bernilai spasi maka akan mereset semua pengecekan
                    cek1 = 0;
                    cek2 = 0;
                }else{// jika tidak maka akan menambahkan pengecekan 2
                    cek2++;
                }
            }
        }
    }
    printf("%d\n", hasil);// untuk mengeluarkan berapa yang sudah memenuhi syarat
    return 0;
}