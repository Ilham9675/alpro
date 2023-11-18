#include "header.h"


void kebalik(char n){
    if(n != 90){// jika belum sampai Z rekursif tidak akan berhenti
        kebalik(n + 1);// memanggil prosedur denagn menambah n dengan satu
    }
    printf("%c ", n);// menampilkan karakter
}