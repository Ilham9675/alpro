/*
Saya ilham akbar mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah 
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak 
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

void bentuk1(int ketebalan, int line, int akhir){// prosedur untuk mengeluarkan pola pertama tiap line dengan sebuah indikator
    if (line == 1){
        pola2(ketebalan, akhir);//keluaran pola baris pertama
    }else if (line == 2){
        pola1(ketebalan, akhir);//keluaran pola baris kedua
    }else if (line == 3){
        pola3(ketebalan, akhir);//keluaran pola baris ketiga
    }else if (line == 4){
        pola1(ketebalan, akhir);//keluaran pola baris keempat
    }else{
        pola2(ketebalan, akhir);//keluaran pola baris kelima
    }
}
void bentuk2(int ketebalan, int line, int akhir){// prosedur untuk mengeluarkan pola ke dua tiap line dengan sebuah indikator
    if (line == 1){
        pola1(ketebalan, akhir);
    }else if (line == 2){
        pola4(ketebalan, akhir);
    }else if (line == 3){
        pola3(ketebalan, akhir);
    }else if (line == 4){
        pola4(ketebalan, akhir);
    }else{
        pola1(ketebalan, akhir);
    }
}
void bentuk3(int ketebalan, int line, int akhir){// prosedur untuk mengeluarkan pola tiga tiap line dengan sebuah indikator
    if (line == 1){
        pola5(ketebalan, akhir);
    }else if (line == 2){
        pola5(ketebalan, akhir);
    }else if (line == 3){
        pola4(ketebalan, akhir);
    }else if (line == 4){
        pola6(ketebalan, akhir);
    }else{
        pola4(ketebalan, akhir);
    }
}
void bentuk4(int ketebalan, int line, int akhir){// prosedur untuk mengeluarkan pola ke empat tiap line dengan sebuah indikator
    if (line == 1){
        pola1(ketebalan, akhir);
    }else if (line == 2){
        pola6(ketebalan, akhir);
    }else if (line == 3){
        pola6(ketebalan, akhir);
    }else if (line == 4){
        pola6(ketebalan, akhir);
    }else{
        pola1(ketebalan, akhir);
    }
}
void bentuk5(int ketebalan, int line, int akhir){// prosedur untuk mengeluarkan pola ke lima tiap line dengan sebuah indikator
    if (line == 1){
        pola1(ketebalan, akhir);
    }else if (line == 2){
        pola6(ketebalan, akhir);
    }else if (line == 3){
        pola1(ketebalan, akhir);
    }else if (line == 4){
        pola6(ketebalan, akhir);
    }else{
        pola1(ketebalan, akhir);
    }
}
void bentuk6(int ketebalan, int line, int akhir){// prosedur untuk mengeluarkan pola ke enam tiap line dengan sebuah indikator
    if (line == 1){
        pola7(ketebalan, akhir);
    }else if (line == 2){
        pola7(ketebalan, akhir);
    }else if (line == 3){
        pola8(ketebalan, akhir);
    }else if (line == 4){
        pola6(ketebalan, akhir);
    }else{
        pola8(ketebalan, akhir);
    }
}
void bentuk7(int ketebalan, int line, int akhir){// prosedur untuk mengeluarkan pola ke tujuh tiap line dengan sebuah indikator
    if (line == 1){
        pola2(ketebalan, akhir);
    }else if (line == 2){
        pola2(ketebalan, akhir);
    }else if (line == 3){
        pola4(ketebalan, akhir);
    }else if (line == 4){
        pola6(ketebalan, akhir);
    }else{
        pola4(ketebalan, akhir);
    }
}
void bentuk8(int ketebalan, int line, int akhir){// prosedur untuk mengeluarkan pola ke delapan tiap line dengan sebuah indikator
    if (line == 1){
        pola8(ketebalan, akhir);
    }else if (line == 2){
        pola5(ketebalan, akhir);
    }else if (line == 3){
        pola8(ketebalan, akhir);
    }else if (line == 4){
        pola5(ketebalan, akhir);
    }else{
        pola8(ketebalan, akhir);
    }
}
void bentuk9(int ketebalan, int line, int akhir){// prosedur untuk mengeluarkan pola ke sembilan tiap line dengan sebuah indikator
    if (line == 1){
        pola7(ketebalan, akhir);
    }else if (line == 2){
        pola1(ketebalan, akhir);
    }else if (line == 3){
        pola4(ketebalan, akhir);
    }else if (line == 4){
        pola1(ketebalan, akhir);
    }else{
        pola1(ketebalan, akhir);
    }
}

void pola1(int ketebalan, int akhir){// bentuk pola untuk tapilan -H-
    for (int i = 0; i < ketebalan; i++){// printf tampilan setiap kolom
        printf(" ");
    }
    for (int i = 0; i < ketebalan; i++){
        printf("H");
    }
    if (akhir == 0){
        for (int i = 0; i < ketebalan; i++){
            printf(" ");
        }
    }
}

void pola2(int ketebalan, int akhir){// bentuk pola untuk tapilan ---
    for (int i = 0; i < ketebalan * 3; i++){
        if (akhir == 0){
            printf(" ");
        }
    }
}

void pola3(int ketebalan, int akhir){// bentuk pola untuk tapilan HHH
    for (int i = 0; i < ketebalan * 3; i++){
        printf("H");
    }
}

void pola4(int ketebalan, int akhir){// bentuk pola untuk tapilan -HH
    for (int i = 0; i < ketebalan; i++){
        printf(" ");
    }
    for (int i = 0; i < ketebalan * 2; i++){
        printf("H");
    }
}

void pola5(int ketebalan, int akhir){// bentuk pola untuk tapilan --H
    for (int i = 0; i < ketebalan * 2; i++){
        printf(" ");
    }
    for (int i = 0; i < ketebalan; i++){
        printf("H");
    }
}
void pola6(int ketebalan, int akhir){// bentuk pola untuk tapilan H-H
    for (int i = 0; i < ketebalan; i++){
        printf("H");
    }
    for (int i = 0; i < ketebalan; i++){
        printf(" ");
    }
    for (int i = 0; i < ketebalan; i++){
        printf("H");
    }
}
void pola7(int ketebalan, int akhir){// bentuk pola untuk tapilan H--
    for (int i = 0; i < ketebalan; i++){
        printf("H");
    }
    if (akhir == 0){
        for (int i = 0; i < ketebalan * 2; i++){
            printf(" ");
        }
    }
}

void pola8(int ketebalan, int akhir){// bentuk pola untuk tapilan -HH-
    for (int i = 0; i < ketebalan * 2; i++){
        printf("H");
    }
    if (akhir == 0){
        for (int i = 0; i < ketebalan; i++){
            printf(" ");
        }
    }
}

// fungsi untuk mencari tau apakah bentuk pada baris , selanjutnya itu memiliki sebuah pola atau bentuk akau tidak maka akan di kosongkan
int spasi(int jumlahtransisi, int i, int j, char nama[][100], int transisi[], int jumlahkata[], int akhir){
    for (int k = 0; k < jumlahtransisi; k++){// untuk memberikan batasan jika tidak maka akan ada karakter yang akan muncul
        nama[transisi[k] - 1][jumlahkata[k]] = '\0';// pemasukan batasan array
    }
    int cek1 = 0;// pengecekan satu untuk mengecek apakah di depan baris ada karakter lagi atau tidak kalau tidak maka akan di kosongkan
    int cek3 = 0;// menghitung berapa banyak baris kode yang ada di depan untuk nanti di bandingkan dengan pengecekan 1 
    int cek2;// untuk penulangan while 
    if (jumlahtransisi - 1 != j){// jika jumlah kode itu tidak sam dengan j maka pengulangan di lakukan
        cek2 = j + 1;
    }else{// jika sama dengan maka tidak di lakukan
        cek2 = j;
    }

    while (jumlahtransisi != cek2){// pengulangan dari j sampai jumlah printf atau jumlah kode 
        if (i == 1){// jika di barsi pertama
            cek3++;
            if ((strcmp(nama[transisi[cek2] - 1], "tolong") == 0) || (strcmp(nama[transisi[cek2] - 1], "aman") == 0)){// jika baris selanjunya itu tolong dan aman maka akan memenuhi kondisi dan menambahnkan cek2
                cek1++;
            }
            cek2++;
        }else if (i == 2){// jika di baris ke dua
            cek3++;
            if (strcmp(nama[transisi[cek2] - 1], "aman") == 0){// jika baris selanjunya itu aman maka akan memenuhi kondisi dan menambahnkan cek2
                cek1++;
            }
            cek2++;
        }else if (i == 5){// jika di baris ke lima
            cek3++;
            if (strcmp(nama[transisi[cek2] - 1], "tolong") == 0){// jika baris selanjunya itu tolong maka akan memenuhi kondisi dan menambahnkan cek2
                cek1++;
            }
            cek2++;
        }else{// jika di tidak termasuk di baris 1, 2 dan 5
            cek2 = jumlahtransisi;// untuk mengakhiri array
        }
    }
    if ((cek1 != 0) && (cek1 == cek3)){// pengecekan apakah di cek 1 itu tidak sama dengan 0 dan cek 1 juga harus sama dengan cek3 kalau memenuhi syarat kondisi akan di jalankan
        akhir = 1;
        return akhir;// pengebalian sebuah nilai
    }else{
        return akhir;// pengembalian sebuah nilai
    }
}