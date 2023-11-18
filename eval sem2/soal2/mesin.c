/*
Saya ilham akbar[2201017] mengerjakan soal
eval dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"


// mesin kata

void start_kata(char data[100]){
    indeks_kata = 0;// awalan indeks 
    panjang_kata = 0;// awalan panjang
    
    while(data[indeks_kata] == ' '){// melewatkan spasi
        indeks_kata++;
    }
    
    while(data[indeks_kata] != ' ' && data[indeks_kata] != '!'){// mencari spasi dan memindahkannya ke ke dalam ckata
        ckata[panjang_kata] = data[indeks_kata];// memindahkan karakter dari data ke dalam ckata
        indeks_kata++;
        panjang_kata++;
    }
    ckata[panjang_kata] = '\0';// pembatasan untk kata di ckata
}

void resetkata(){
    panjang_kata = 0;
    ckata[panjang_kata] = '\0';
}

void inc_kata(char data[100]){
    panjang_kata = 0;// awalan panjang
    while(data[indeks_kata] == ' '){// melewatkan spasi
        indeks_kata++;
        
    }
    while(data[indeks_kata] != ' ' && data[indeks_kata] != '!'){// mencari spasi dan memindahkannya ke ke dalam ckata
        ckata[panjang_kata] = data[indeks_kata];// memindahkan karakter dari data ke dalam ckata
        indeks_kata++;
        panjang_kata++;
    }
    ckata[panjang_kata] = '\0';// pembatasan untk kata di ckata
}
char* get_kata(){
    return ckata;// mengembalikan kata
}

int get_panjang_kata(){
    return panjang_kata;// mengembalikan panjang kata
}

int eop_kata(char data[100]){
    if(data[indeks_kata] == '!'){// pengecekan batas apkah sudah di batas atau belum
        return 1;
    }else{
        return 0;
    }
}

void nambah_data(tk tiket[100],char data1[100],char data2[100],char data3[100]){
    int indek = 0;// untuk indeks
    while (strcmp(tiket[indek].code,"####") != 0)// pengulangan untuk mencari batasan atau jumlah data yang ada 
    {
        indek++;
    }
    // untuk memasukan data darai user kedalam list atau bungkusan
    strcpy(tiket[indek].code,data1);
    strcpy(tiket[indek].nama,data2);
    strcpy(tiket[indek].harga,data3);
    indek++;
    // memasukan batasan bungkusan
    strcpy(tiket[indek].code,"####");
    strcpy(tiket[indek].nama,"####");
    strcpy(tiket[indek].harga,"####");
}
void hapus_data(tk tiket[100],char data1[100],tk sem[100]){
    int indek1 = 0,indek2 = 0;

    while (strcmp(tiket[indek1].code,"####") != 0)// pengulangan sejumlah data yanga ada dengan batasan "####" 
    {
        if(strcmp(tiket[indek1].code,data1) != 0){// dan syarat yang akan di pindahkan itu harus tidak sam dengan data 1
            // perpindahhan dari tiket ke dalam data 1
            strcpy(sem[indek2].code,tiket[indek1].code);
            strcpy(sem[indek2].nama,tiket[indek1].nama);
            strcpy(sem[indek2].harga,tiket[indek1].harga);
            indek2++;
        }
        indek1++;
    }
    // batsan unutk data
    strcpy(sem[indek2].code,"####");
    strcpy(sem[indek2].nama,"####");
    strcpy(sem[indek2].harga,"####");
    indek1 = 0;
    while (strcmp(sem[indek1].code,"####") != 0)
    {
        // perpindahan kembali dari data sem ke data tiket
        strcpy(tiket[indek1].code,sem[indek1].code);
        strcpy(tiket[indek1].nama,sem[indek1].nama);
        strcpy(tiket[indek1].harga,sem[indek1].harga);
        indek1++; 
    }
    // batsan data
    strcpy(tiket[indek1].code,"####");
    strcpy(tiket[indek1].nama,"####");
    strcpy(tiket[indek1].harga,"####");
}

void tampilkan(tk tiket[100]){
    int indek = 0;
    int ter1= 8,ter2 = 9,ter3 = 5;// unutk terpanjangan data 1,2 dan 3 serta nilai default
    // pencarian nilai terpanjang data 1
    while(strcmp(tiket[indek].code,"####") != 0){
        if(strlen(tiket[indek].code) > ter1){
            ter1 = strlen(tiket[indek].code);
        }
        indek++;
    }
    indek = 0;
    // pencarian nilai terpangan data 2
    while(strcmp(tiket[indek].nama,"####") != 0){
        if(strlen(tiket[indek].nama) > ter2){
            ter2 = strlen(tiket[indek].nama);
        }
        indek++;
    }
    indek = 0;
    // pencarian nilai terpangan data 3
    while(strcmp(tiket[indek].harga,"####") != 0){
        if(strlen(tiket[indek].harga) + 2 > ter3){
            ter3 = strlen(tiket[indek].harga) + 2;
        }
        indek++;
    }
    indek = 0;
    // tampilan untuk garis tabel yang penuh
    for(int i = 0;i < ter1 + ter2 + ter3 + 10;i++){
        printf("~");
    }
    printf("\n");
    // penampilan header tabel 
    printf("!");
    printf(" ID Tiket");
    for(int i = 0;i < ter1 - 8;i++){
        printf(" ");
    }
    printf(" ! Deskripsi");
    for(int i = 0;i < ter2 - 9;i++){
        printf(" ");
    }
    printf(" ! Harga");
    for(int i = 0;i < ter3 - 5;i++){
        printf(" ");
    }
    printf(" !\n");
    // tampilan untuk garis tabel yang penuh
    for(int i = 0;i < ter1 + ter2 + ter3 + 10;i++){
        printf("~");
    }
    printf("\n");
    // pengeluaran data tabel yang ada di dalam struck
    while (strcmp(tiket[indek].code,"####") != 0)
    {
        printf("! %s",tiket[indek].code);
        
        for(int i = 0;i < ter1 - strlen(tiket[indek].code);i++){
            printf(" ");
        }
        printf(" ! %s",tiket[indek].nama);
        for(int i = 0;i < ter2 - strlen(tiket[indek].nama);i++){
            printf(" ");
        }
        printf(" ! Rp%s",tiket[indek].harga);
        for(int i = 0;i < (ter3 - strlen(tiket[indek].harga)) -2;i++){
            printf(" ");
        }
        printf(" !\n");
        indek++;
    }
    // tampilan untuk garis tabel yang penuh
    for(int i = 0;i < ter1 + ter2 + ter3 + 10;i++){
        printf("~");
    }
    printf("\n");
}