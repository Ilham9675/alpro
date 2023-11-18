/*
Saya ilham akbar[2201017] mengerjakan soal
kuis 1 dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include "header.h"

void mencari(int angkat , int selisih, int jarak,int cek){
    if(jarak == 1){// jika jarak sudah mencapai satu maka arinya itu sudah berada di akhir prgram dan tidak ada lagi spasi
        printf("%d\n", angkat);
    }else{// jika jarak belum sama dengan nol maka printf angka dan tambahkan spasi
        printf("%d ", angkat);
    }
    if(jarak == cek){// jika angak berada di tengah maka angka akan di printf dan di tambahkan selisih
        angkat += selisih;// penambahan selisih dengan angka
        printf("%d ",angkat);
    }

    if(jarak != 1){// jika jarak tidak samadengan nol maka akan terus rekursif atau mengulang
        mencari(angkat + selisih, selisih, jarak - 1,cek);
    }
}