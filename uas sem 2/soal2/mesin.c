/*
Saya ilham akbar[2201017] mengerjakan soal
UAS dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

/*
    pengecekan untuk kata kunci itu sebenanya ada dua cara yang pertama di dalam mesin kata 
    yang kedua di main dan saya mengguankan yang di dalam mesinya langsung dengan memeakai variabel 
    global karena menurut saya ini lebih simpel dan lebih mudah untuk di mengerti
*/

void startkata(char pita[500]){
    cek = 0;// untuk pemulainyan awalan penecekan
    indeks = 0;// untuk awal indeks array
    panjangkata = 0;// untuk awal penghitunagn indeks
    while(pita[indeks] == ' '){// untuk mencari awalan kata jika awalan kalimat ada spasi
        indeks++;
    }
    while((pita[indeks] != ' ') && (pita[indeks] != '.')){// pengulangan yang akan berhenti jika menemukan spasi dan tanda titik
        if(kunci == pita[indeks]){// jika ada kata kunci yang sam dengan pita indek maka akan di hitung 
            cek++;
        }
        ckata[panjangkata] = pita[indeks];// pemasukan kata ke dalam wadah kata dari wadah kalimat
        indeks++;// penambahan ideks array 
        panjangkata++;// penambahan indeks panjang kata 
    }
    ckata[panjangkata] = '\0';// membatasi array kaya agar bisa di kembalikan dengan bantuan fuang si atau tidak manual
}

void resetkata(){
    cek = 0;// untuk pemulainyan awalan penecekan
    panjangkata = 0;// panjang kata akan di kembalikan ke nol untuk merestar
    ckata[panjangkata] = '\0';// dan batasanya akan di kembalikan ke posisi yang kosong
}

void inckata(char pita[500]){
    while(pita[indeks] == ' '){// untuk mencari awalan kata jika awalan kalimat ada spasi
        indeks++;
    }
    while((pita[indeks] != ' ') && pita[indeks] != '.'){// pengulangan yang akan berhenti jika menemukan spasi dan tanda titik
        if(kunci == pita[indeks]){// jika ada kata kunci yang sam dengan pita indek maka akan di hitung 
            cek++;
        }
        ckata[panjangkata] = pita[indeks];// pemasukan kata ke dalam wadah kata dari wadah kalimat
        indeks++;// penambahan ideks array 
        panjangkata++;// penambahan indeks panjang kata 
    }
    ckata[panjangkata] = '\0';// membatasi array kaya agar bisa di kembalikan dengan bantuan fuang si atau tidak manual
}

char* getckata(){
    return ckata;// mengembalikan kata dengan bantuan pointer 
}

int getpanjangkata(){
    return panjangkata;// mengembalikan panjang kata 
}

int eopkata(char pita[500]){
    if(pita[indeks] == '.'){// pengecekan jika sudah mencapai batas atau belum jika sudah maka akan akan mengembalikan satu
        return 1;
    }else{// jika belum maka akan mengembalikan nol
        return 0;
    }
}