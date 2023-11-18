/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal
TP3 dalam mata kuliah algoritma dan pemlograman 2
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
#include "header.h"

long long NGeunah(long long nilai){
    if(nilai == 0){// untuk nilai sama dengan nol maka akan bernilai 6
        return 6;// mengembalikan nilai 6
    }else{// jika bukar sama dnegan nol makan akan menjalankan fungsi dan memanggil fungsi ini lagi
        return NGeunah(nilai - 1) * 2 - 3;// memanggil fungsi ini lagi dan menjalankan rumus folmula
    }
}

void spasi(int n){
    if(n < 10){// jika n lebih kecil dari spuluh maka tambahnkan dua spasi
        printf("  ");
    }else{// jika lebih besar sama dengan 10 maka tambahnkan satu spasi
        printf(" ");
    }
}

void tampilan(int a,int b){
    printf("%d",a);// keluaran untuk nilai bumbu a
    spasi(a);// menambahkan spasi
    printf("| ");// dekorasi pelengkap
    printf("%d",b);// tampilan bumbu b
    spasi(b);// menambahkan spasi
    if(a >= b){// mengecek apakah nilai bumbu a itu lebih besar sama dengan dari pada bumbu b
        printf("<< %lld\n",NGeunah(a-b));// memanggil fungsi ngunah untuk mencari nilai formula rahasia dari kombinasi bumbu a dan b dan menampilkanya
    }else{// jika tidak jalankan program di bawah
        printf("<< %lld\n",NGeunah(b-a));// memanggil fungsi ngunah untuk mencari nilai formula rahasia dari kombinasi bumbu a dan b dan menampilkanya
    }
}
void pengulangan(int a,int b){
    if(a == 1 || b == 1){// jika a sama dengan 1 atau b sama dengan 1 maka akan masuk ke program di bawah dan rekursif akan berhenti
        if(a >= b){// mengecek apakan nilai a itu lebih besar dari pada nilai b jika iya maka jalankan program di bawah ini
            tampilan(a,b);// untuk menampilkan nilai nilai yang sudah di hitung
        }else{// jika tidak maka jalankan progran di bawah ini
            tampilan(a,b);// untuk menampilkan nilai nilai yang sudah di hitung
        }
    }else{
        if(a >= b){
            tampilan(a,b);// untuk menampilkan nilai nilai yang sudah di hitung
            a /= 3;// membagi a dengan 3 dan memasukanya ke dalam a lagi dan akan di kombinasikan lagi si dalam proses tampilan
        }else{
            tampilan(a,b);// untuk menampilkan nilai nilai yang sudah di hitung
            b /= 3;// membagi b dengan 3 dan memasukanya ke dalam a lagi dan akan di kombinasikan lagi si dalam proses tampilan
        }
        pengulangan(a,b);
    }
}