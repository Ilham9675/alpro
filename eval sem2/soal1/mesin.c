

#include "header.h"





// mesin kata

void start_kata(char data[100]){
    indeks_kata = 0;
    panjang_kata = 0;
    
    while(data[indeks_kata] == ' '){
        indeks_kata++;
        
    }
    
    while(data[indeks_kata] != ' ' && data[indeks_kata] != '!'){
        ckata[panjang_kata] = data[indeks_kata];
        indeks_kata++;
        panjang_kata++;
    }
    ckata[panjang_kata] = '\0';
}

void resetkata(){
    panjang_kata = 0;
    ckata[panjang_kata] = '\0';
}

void inc_kata(char data[100]){
    panjang_kata = 0;
    
    while(data[indeks_kata] == ' '){
        indeks_kata++;
        
    }
    while(data[indeks_kata] != ' ' && data[indeks_kata] != '!'){
        ckata[panjang_kata] = data[indeks_kata];
        indeks_kata++;
        panjang_kata++;
    }
    ckata[panjang_kata] = '\0';
}
char* get_kata(){
    return ckata;
}

int get_panjang_kata(){
    return panjang_kata;
}

int eop_kata(char data[100]){
    if(data[indeks_kata] == '!'){
        return 1;
    }else{
        return 0;
    }
}

void nambah_data(tk tiket[100],char data1[100],char data2[100],char data3[100]){
    int indek = 0;
    while (strcmp(tiket[indek].code,"####") != 0)
    {
        indek++;
    }
    strcpy(tiket[indek].code,data1);
    strcpy(tiket[indek].nama,data2);
    strcpy(tiket[indek].harga,data3);
    if(strlen(tiket[indek].code) > terpanjang1){
        terpanjang1 = strlen(tiket[indek].code);
    }
    if(strlen(tiket[indek].nama) > terpanjang2){
        terpanjang2 = strlen(tiket[indek].nama);
    }
    if(strlen(tiket[indek].harga) + 2 > terpanjang3){
        terpanjang3 = strlen(tiket[indek].harga) + 2;
    }
    indek++;
    strcpy(tiket[indek].code,"####");
    strcpy(tiket[indek].nama,"####");
    strcpy(tiket[indek].harga,"####");
}
void hapus_data(tk tiket[100],char data1[100],tk sem[100]){
    int indek1 = 0,indek2 = 0;
    while (strcmp(tiket[indek1].code,"####") != 0)
    {
        if(strcmp(tiket[indek1].code,data1) != 0){
            strcpy(sem[indek2].code,tiket[indek1].code);
            strcpy(sem[indek2].nama,tiket[indek1].nama);
            strcpy(sem[indek2].harga,tiket[indek1].harga);
            indek2++;
        }
        indek1++;
    }
    strcpy(sem[indek2].code,"####");
    strcpy(sem[indek2].nama,"####");
    strcpy(sem[indek2].harga,"####");
    indek1 = 0;
    while (strcmp(sem[indek1].code,"####") != 0)
    {
        
        strcpy(tiket[indek1].code,sem[indek1].code);
        strcpy(tiket[indek1].nama,sem[indek1].nama);
        strcpy(tiket[indek1].harga,sem[indek1].harga);
        indek1++; 
    }
    strcpy(tiket[indek1].code,"####");
    strcpy(tiket[indek1].nama,"####");
    strcpy(tiket[indek1].harga,"####");
}

void tampilkan(tk tiket[100]){
    int indek = 0;
    int panjang_tabel = terpanjang1 + terpanjang2 + terpanjang3 + 10;
    for(int i = 0;i < panjang_tabel;i++){
        printf("~");
    }
    printf("\n");
    printf("!");
    printf(" ID Tiket");
    for(int i = 0;i < terpanjang1 - 8;i++){
        printf(" ");
    }
    printf(" ! Deskripsi");
    for(int i = 0;i < terpanjang2 - 9;i++){
        printf(" ");
    }
    printf(" ! Harga");
    for(int i = 0;i < terpanjang3 - 5;i++){
        printf(" ");
    }
    printf(" !\n");
    for(int i = 0;i < panjang_tabel;i++){
        printf("~");
    }
    printf("\n");
    while (strcmp(tiket[indek].code,"####") != 0)
    {
        printf("! %s",tiket[indek].code);
        
        for(int i = 0;i < terpanjang1 - strlen(tiket[indek].code);i++){
            printf(" ");
        }
        printf(" ! %s",tiket[indek].nama);
        for(int i = 0;i < terpanjang2 - strlen(tiket[indek].nama);i++){
            printf(" ");
        }
        printf(" ! Rp%s",tiket[indek].harga);
        for(int i = 0;i < (terpanjang3 - strlen(tiket[indek].harga)) -2;i++){
            printf(" ");
        }
        printf(" !\n");
        indek++;
    }
    for(int i = 0;i < panjang_tabel;i++){
        printf("~");
    }
    printf("\n");
}