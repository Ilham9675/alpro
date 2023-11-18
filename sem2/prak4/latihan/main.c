#include "header.h"

int main()
{
    int jumlah;// wadah untuk jumlah 
    scanf("%d", &jumlah);// mauskan julah dari user
    char kata[jumlah][100];// wadah untuk kata
    jumlah++;// untuk menambahkan jumlah unurk wadah
    masukan(jumlah, kata);// memasukan kata dari user dengan menggunkan prosedur
    char pilihan[100];// wadah untuk pilihan sorting
    scanf("%s", pilihan);// masukan pilihan dari user
    if(strcmp("insertion",pilihan) == 0){// jika user memilih insertion maka akaan masuk ke if
        insertion(jumlah, kata);// mengurutkan pakai insertion 
    }else{// jika tidak maka akan masuk ke dalam else dan di memilih selection
        selection(jumlah, kata);// mengurutkan pakai selection
    }
    tampilan(jumlah, kata);// untuk menampilkan hasil 
    return 0;
}