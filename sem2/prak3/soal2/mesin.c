#include "header.h"


int pangkat(int n,int m){
    if(m == 0){// pengecek apakah pangkat sudah bernilai satu atau belum juka sudah maka rekursif akan selesai
        return 1;// mengembalikan nilai satu
    }else{// jika tidak bernilai 0 maka progra ini yang berjalan 
        return n * pangkat(n,m-1);// mengembalikan nilai dan memanggil fungsi dirinya sendiri dengan nilai m di kurang satu
    }
    
}