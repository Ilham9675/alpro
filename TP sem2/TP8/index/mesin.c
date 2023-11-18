/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal
TP8 dalam mata kuliah algoritma dan pemlograman 2
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
#include "header.h"

void masukan_data1(list_barang lb[100], char lokasi[100]){
    int jumlah = 0;// wadah untuk indek
    FILE *flist_barang;// inisialisi file 
    flist_barang = fopen(lokasi, "r");// membuka file
    fscanf(flist_barang, "%s %s %s %s", 
           lb[jumlah].nama,lb[jumlah].code1,lb[jumlah].code2,lb[jumlah].code3);// memsukan data ke bungkusan untuk pengecekan data apakah ada atu gak
    while (strcmp(lb[jumlah].nama, "####") != 0)
        {
            
            jumlah++; // maju ke penampung data berikutnya
            fscanf(flist_barang, "%s %s %s %s", 
            lb[jumlah].nama,lb[jumlah].code1,lb[jumlah].code2,lb[jumlah].code3);// pemasukan data ke bungkusan
            
        }
    fclose(flist_barang);// penutupan file
}
void masukan_data2(barang atribut[100], char lokasi[100], int *jum){
    int jumlah = 0;// wadah untuk indek
    FILE *fatribut;// inisialisi file 
    fatribut = fopen(lokasi, "r");// membuka file
    fscanf(fatribut, "%s %s", 
    atribut[jumlah].code,atribut[jumlah].nama);// memsukan data ke bungkusan untuk pengecekan data apakah ada atu gak
    while (strcmp(atribut[jumlah].nama, "####") != 0)
        {
            jumlah++; // maju ke penampung data berikutnya
            fscanf(fatribut, "%s %s", 
            atribut[jumlah].code,atribut[jumlah].nama);// pemasukan data ke bungkusan
            
        }
    *jum = jumlah;
    fclose(fatribut);// penutupan file
}

int sequentialsearch(barang db[100], char target[100]){
    int found = 0;
    int i = 0;
    // pwncarian data apakah ada atau tidak
    while((strcmp(db[i].nama,"####") != 0 ) && (found == 0)){
        if(strcmp(target, db[i].code) == 0){
            found = 1;
        }else{
            i++;
        }
    }
    return i;// dan akan mengembalikan indeks
}

void mengisi_data(list_barang lb[100],barang kategori[100],barang merk[100],barang toko[100],char filename[50],hasil_list_barang hasil[100]){
    
    
    int jum = 0;// wadah untuk indek
    FILE *fdata;// inisialisi file 
    fdata = fopen(filename, "w"); // membuka file
    // memasukan sebuah data keseluluhan data yang ada ke dalam satu file
    while(strcmp(lb[jum].nama,"####") != 0 ){
        // unutk mencari code yang di cari itu di indek ke berapa
        int indek1 = sequentialsearch(kategori,lb[jum].code1);
        int indek2 = sequentialsearch(merk,lb[jum].code2);
        int indek3 = sequentialsearch(toko,lb[jum].code3);
        // pemindahan ke struct hasil
        strcpy(hasil[jum].nama,lb[jum].nama);
        strcpy(hasil[jum].kategori,kategori[indek1].nama);
        strcpy(hasil[jum].merk,merk[indek2].nama);
        strcpy(hasil[jum].toko,toko[indek3].nama);
        fprintf(fdata, "%s %s %s %s\n", lb[jum].nama,kategori[indek1].nama,merk[indek2].nama,toko[indek3].nama);// pemasukan ke dalam file
        if(strlen(hasil[jum].nama) > tp1){//mencari kata terpanjang data pertama
            tp1 = strlen(hasil[jum].nama);
        }
        if(strlen(hasil[jum].kategori) > tp2){//mencari kata terpanjang data Kedua
            tp2 = strlen(hasil[jum].kategori);
        }
        if(strlen(hasil[jum].merk) > tp3){//mencari kata terpanjang data Ketiga
            tp3 = strlen(hasil[jum].merk);
        }
        if(strlen(hasil[jum].toko) > tp4){//mencari kata terpanjang data keempat
            tp4 = strlen(hasil[jum].toko);
        }
        jum++;
    }
    fprintf(fdata, "%s %s %s %s\n", "####","####","####","####");// pemasukan batas ke file
    // pemasukan batas ke dalam struct
    strcpy(hasil[jum].nama,"####");
    strcpy(hasil[jum].kategori,"####");
    strcpy(hasil[jum].merk,"####");
    strcpy(hasil[jum].toko,"####");
    // "tutup file"
    fclose(fdata);
}
void garis_awal(int tp1,int tp2,int tp3,int tp4){// garis awal untuk tabel
    printf("%c%c",201,205);
    for(int i = 0;i < tp1;i++){
        printf("%c",205);
    }
    printf("%c%c%c",205,203,205);
    for(int i = 0;i < tp2;i++){
        printf("%c",205);
    }
    printf("%c%c%c",205,203,205);
    for(int i = 0;i < tp3;i++){
        printf("%c",205);
    }
    printf("%c%c%c",205,203,205);
    for(int i = 0;i < tp4;i++){
        printf("%c",205);
    }
    printf("%c%c\n",205,187);
}
void kata_awal(int tp1,int tp2,int tp3,int tp4){// unutk kata sesudah garis awal atau unutk judul tabel
    printf("%c ",186);
    for(int i = 0;i < (tp1 - 6)/2;i++){
        printf(" ");
    }
    printf("Barang");
    for(int i = 0;i < (tp1 - 6)/2;i++){
        printf(" ");
    }
    if(tp1 % 2 == 1){
        printf(" ");
    }
    printf(" %c ",186);
    for(int i = 0;i < (tp2 - 8)/2;i++){
        printf(" ");
    }
    printf("Kategori");
    for(int i = 0;i < (tp2 - 8)/2;i++){
        printf(" ");
    }
    if(tp2 % 2 == 1){
        printf(" ");
    }
    printf(" %c ",186);
    for(int i = 0;i < (tp3 - 4)/2;i++){
        printf(" ");
    }
    printf("Merk");
    for(int i = 0;i < (tp3 - 4)/2;i++){
        printf(" ");
    }
    if(tp3 % 2 == 1){
        printf(" ");
    }
    printf(" %c ",186);
    for(int i = 0;i < (tp4 - 4)/2;i++){
        printf(" ");
    }
    printf("Toko");
    for(int i = 0;i < (tp4 - 4)/2;i++){
        printf(" ");
    }
    if(tp4 % 2 == 1){
        printf(" ");
    }
    printf(" %c\n",186);
}
void garis_tengah(int tp1,int tp2,int tp3,int tp4){// garis pembatas tabel antara judul dengan isi
    printf("%c%c",204,205);
    for(int i = 0;i < tp1;i++){
        printf("%c",205);
    }
    printf("%c%c%c",205,206,205);
    for(int i = 0;i < tp2 ;i++){
        printf("%c",205);
    }
    printf("%c%c%c",205,206,205);
    for(int i = 0;i < tp3;i++){
        printf("%c",205);
    }
    printf("%c%c%c",205,206,205);
    for(int i = 0;i < tp4;i++){
        printf("%c",205);
    }
    printf("%c%c\n",205,185);
}

void garis_akhir(int tp1,int tp2,int tp3,int tp4){// garis penutup tabel
    printf("%c%c",200,205);
    for(int i = 0;i < tp1;i++){
        printf("%c",205);
    }
    printf("%c%c%c",205,202,205);
    for(int i = 0;i < tp2;i++){
        printf("%c",205);
    }
    printf("%c%c%c",205,202,205);
    for(int i = 0;i < tp3;i++){
        printf("%c",205);
    }
    printf("%c%c%c",205,202,205);
    for(int i = 0;i < tp4;i++){
        printf("%c",205);
    }
    printf("%c%c\n",205,188);
}

void menampilkan_data(hasil_list_barang hasil[100]){
    int jum = 0;
    if(tp1 < 6){
        tp1 = 6;
    }
    if(tp2 < 8){
        tp2 = 8;
    }
    if(tp3 < 4){
        tp3 = 4;
    }
    if(tp4 < 4){
        tp4 = 4;
    }
    // menampilkan tabel awal
    garis_awal(tp1,tp2,tp3,tp4);
    kata_awal(tp1,tp2,tp3,tp4);
    garis_tengah(tp1,tp2,tp3,tp4);
    // tampilan isi tabel 
    while(strcmp(hasil[jum].nama,"####") != 0 ){
        printf("%c ",186);
            printf("%s",hasil[jum].nama);
        for(int i = 0;i < tp1 - strlen(hasil[jum].nama);i++){
            printf(" ");
        }
        printf(" %c ",186);
            printf("%s",hasil[jum].kategori);
        for(int i = 0;i < tp2 - strlen(hasil[jum].kategori);i++){
            printf(" ");
        }
        printf(" %c ",186);
            printf("%s",hasil[jum].merk);
        for(int i = 0;i < tp3 - strlen(hasil[jum].merk);i++){
            printf(" ");
        }
        printf(" %c ",186);
            printf("%s",hasil[jum].toko);
        for(int i = 0;i < tp4 - strlen(hasil[jum].toko);i++){
            printf(" ");
        }
        printf(" %c\n",186);
        jum++;
    }
    // tabel akhir
    garis_akhir(tp1,tp2,tp3,tp4);
}

void pilihan1(){// menampilkan menu pertama
    printf("%c",201);
    for (int i = 0; i < 4; i++)
    {
        printf("%c",205);
    }
    printf("%c",203);
    for (int i = 0; i < 18; i++)
    {
        printf("%c",205);
    }
    
    printf("%c\n",187);
    printf("%c No %c     list menu    %c\n",186,186,186);
    printf("%c",204);
    for (int i = 0; i < 4; i++)
    {
        printf("%c",205);
    }
    printf("%c",206);
    for (int i = 0; i < 18; i++)
    {
        printf("%c",205);
    }
    printf("%c\n",185);
    printf("%c 1  %c menampilkan data %c\n",186,186,186);
    printf("%c 2  %c menambahkan data %c\n",186,186,186);
    printf("%c 3  %c mencari data     %c\n",186,186,186);
    printf("%c 4  %c keluar           %c\n",186,186,186);
    printf("%c",200);
    for (int i = 0; i < 4; i++)
    {
        printf("%c",205);
    }
    printf("%c",202);
    for (int i = 0; i < 18; i++)
    {
        printf("%c",205);
    }
    printf("%c\n",188);
}
void pilihan11(){// menampilkan menu ke dua
    printf("%c",201);
    for (int i = 0; i < 4; i++)
    {
        printf("%c",205);
    }
    printf("%c",203);
    for (int i = 0; i < 18; i++)
    {
        printf("%c",205);
    }
    
    printf("%c\n",187);
    printf("%c No %c     list menu    %c\n",186,186,186);
    printf("%c",204);
    for (int i = 0; i < 4; i++)
    {
        printf("%c",205);
    }
    printf("%c",206);
    for (int i = 0; i < 18; i++)
    {
        printf("%c",205);
    }
    printf("%c\n",185);
    printf("%c 1  %c Data keseluruhan %c\n",186,186,186);
    printf("%c 2  %c Data kategori    %c\n",186,186,186);
    printf("%c 3  %c Data Merk        %c\n",186,186,186);
    printf("%c 4  %c Data Toko        %c\n",186,186,186);
    printf("%c 5  %c Kembali          %c\n",186,186,186);
    printf("%c 6  %c Keluar           %c\n",186,186,186);
    printf("%c",200);
    for (int i = 0; i < 4; i++)
    {
        printf("%c",205);
    }
    printf("%c",202);
    for (int i = 0; i < 18; i++)
    {
        printf("%c",205);
    }
    printf("%c\n",188);
}
void pilihan12(){// menampilkan menu ke tiga
    printf("%c",201);
    for (int i = 0; i < 4; i++)
    {
        printf("%c",205);
    }
    printf("%c",203);
    for (int i = 0; i < 27; i++)
    {
        printf("%c",205);
    }
    
    printf("%c\n",187);
    printf("%c No %c         list menu         %c\n",186,186,186);
    printf("%c",204);
    for (int i = 0; i < 4; i++)
    {
        printf("%c",205);
    }
    printf("%c",206);
    for (int i = 0; i < 27; i++)
    {
        printf("%c",205);
    }
    printf("%c\n",185);
    printf("%c 1  %c menambahkan data katagori %c\n",186,186,186);
    printf("%c 2  %c menambahkan data Merk     %c\n",186,186,186);
    printf("%c 3  %c menambahkan data toko     %c\n",186,186,186);
    printf("%c 4  %c Kembali                   %c\n",186,186,186);
    printf("%c 5  %c Keluar                    %c\n",186,186,186);
    printf("%c",200);
    for (int i = 0; i < 4; i++)
    {
        printf("%c",205);
    }
    printf("%c",202);
    for (int i = 0; i < 27; i++)
    {
        printf("%c",205);
    }
    printf("%c\n",188);
}

void menampilkan_data2(barang data[100],int p1,int p2,char jenis[50],int p3){// untuk menampilkan data 
    system("cls");
    printf("%c%c",201,205);
    for (int i = 0; i < p2; i++)
    {
        printf("%c",205);
    }
    printf("%c%c%c",205,203,205);
    for (int i = 0; i < p1; i++)
    {
        printf("%c",205);
    }
    
    printf("%c%c\n",205,187);
    printf("%c ",186);
    for(int i = 0;i < (p2 - 4)/2;i++){
        printf(" ");
    }
    printf("Code");
    for(int i = 0;i < (p2 - 4)/2;i++){
        printf(" ");
    }
    if(p2 % 2 == 1){
        printf(" ");
    }
    printf(" %c ",186);
    for(int i = 0;i < (p1 - p3)/2;i++){
        printf(" ");
    }
    printf("%s",jenis);
    for(int i = 0;i < (p1 - p3)/2;i++){
        printf(" ");
    }
    if(p1 % 2 == 1){
        printf(" ");
    }
    printf(" %c\n",186);
    printf("%c%c",204,205);
    for (int i = 0; i < p2; i++)
    {
        printf("%c",205);
    }
    printf("%c%c%c",205,206,205);
    for (int i = 0; i < p1; i++)
    {
        printf("%c",205);
    }
    printf("%c%c\n",205,185);
    int jumlah = 0;
    // menmapilkan data keseluluhan yang ada di struct
    while(strcmp(data[jumlah].nama,"####") != 0){
        printf("%c ",186);
        for(int i = 0;i < (p2 - strlen(data[jumlah].code))/2;i++){
            printf(" ");
        }
        printf("%s",data[jumlah].code);
        for(int i = 0;i < (p2 - strlen(data[jumlah].code))/2;i++){
            printf(" ");
        }
        if((p2 - strlen(data[jumlah].code)) % 2 == 1){
            printf(" ");
        }
        printf(" %c ",186);
        for(int i = 0;i < (p1 - strlen(data[jumlah].nama))/2;i++){
            printf(" ");
        }
        printf("%s",data[jumlah].nama);
        for(int i = 0;i < (p1 - strlen(data[jumlah].nama))/2;i++){
            printf(" ");
        }
        if((p1 - strlen(data[jumlah].nama)) % 2 == 1){
            printf(" ");
        }
        printf(" %c\n",186);
        jumlah++;
    }
    printf("%c%c",200,205);
    for (int i = 0; i < p2; i++)
    {
        printf("%c",205);
    }
    printf("%c%c%c",205,202,205);
    for (int i = 0; i < p1; i++)
    {
        printf("%c",205);
    }
    
    printf("%c%c\n",205,188);
}

int menambahkan_data(barang data[100],char filename[100]){
    int jum = 0;
    int valid = 0;
    FILE *fdata; 
    fdata = fopen(filename, "w"); // membuka file
    char codebaru[100];// wadah untuk kode baru
    char databaru[100];// wadah untuk data atau nama yang ingin di tambahkan
    while(valid == 0){// pengecekan code apakah uda aada atau belum jika sudah ada maka akan di imta memasukan code kembali
        printf("masukan kode kategori yang ingin di tambahkan: ");
        scanf("%s",codebaru);// pemasukan kode dari user
        int cek = 0,per = 0;
        while(strcmp(data[per].nama,"####") != 0){// pengecekan code
            if(strcmp(codebaru,data[per].code) == 0){
                cek++;
            }
            per++;
        }
        if(cek == 0){
            valid = 1;
        }else{
            printf("code sudah ada silahkan masukan code lagi!!!!\n");
        }
    }
    printf("masukan nama data baru: ");
    scanf("%s",databaru);// pemasukan data dri user
    while(strcmp(data[jum].nama,"####") != 0 ){// pemasukan kembali data ynga sebelumnya ada
        fprintf(fdata, "%s %s\n",data[jum].code,data[jum].nama);
        jum++;
    }
    fprintf(fdata, "%s %s\n",codebaru,databaru);// penambahan data
    fprintf(fdata, "%s %s\n","####","####");// batasan data
    pj = strlen(databaru);
    int set = strlen(codebaru);
    fclose(fdata);// penutupan data
    return set;
}

void pilihan13(){// menampilkan tabel menu ke empat
    printf("%c",201);
    for (int i = 0; i < 4; i++)
    {
        printf("%c",205);
    }
    printf("%c",203);
    for (int i = 0; i < 27; i++)
    {
        printf("%c",205);
    }
    
    printf("%c\n",187);
    printf("%c No %c         list menu         %c\n",186,186,186);
    printf("%c",204);
    for (int i = 0; i < 4; i++)
    {
        printf("%c",205);
    }
    printf("%c",206);
    for (int i = 0; i < 27; i++)
    {
        printf("%c",205);
    }
    printf("%c\n",185);
    printf("%c 1  %c mencari data katagori     %c\n",186,186,186);
    printf("%c 2  %c mencari data Merk         %c\n",186,186,186);
    printf("%c 3  %c mencari data toko         %c\n",186,186,186);
    printf("%c 4  %c mencari data keseluluhan  %c\n",186,186,186);
    printf("%c 5  %c Kembali                   %c\n",186,186,186);
    printf("%c 6  %c Keluar                    %c\n",186,186,186);
    printf("%c",200);
    for (int i = 0; i < 4; i++)
    {
        printf("%c",205);
    }
    printf("%c",202);
    for (int i = 0; i < 27; i++)
    {
        printf("%c",205);
    }
    printf("%c\n",188);
}
void sorting(barang data[100],int jumlah){// untuk mensorting data dengan menggunakan bubble sort
    int cek = 1;
    char temp1[100];
    while(cek == 1){
        cek = 0;
        for(int i = 0;i < jumlah - 1;i++){
            if(strcmp(data[i].code, data[i+1].code) > 0){
                strcpy(temp1, data[i].code);
                strcpy(data[i].code, data[i + 1].code);
                strcpy(data[i + 1].code, temp1);

                strcpy(temp1, data[i].nama);
                strcpy(data[i].nama, data[i + 1].nama);
                strcpy(data[i + 1].nama, temp1);
                cek = 1;
            }
        }
    }
}
int mencari_data(barang data[100],int jumlah,char dicari[50],int p,char mencari[50],int tp){// mecari data yang diinginkan
   
    int found = 0;
    int i = 0,j = jumlah -1 ,mid;
    sorting(data,jumlah);
    
    

    while((i <= j) && (found == 0)){
        mid = (i + j) / 2;
        if(strcmp(data[mid].code,mencari) == 0){
            printf("%c",201);
            for(int i = 0;i < tp + 2;i++){
                printf("%c",205);
            }
            printf("%c\n",187);
            printf("%c ",186);
            printf("%s",dicari);
            for(int i = 0;i < tp - p;i++){
                printf(" ");
            }
            printf(" %c\n",186);
            printf("%c",204);
            for(int i = 0;i < tp + 2;i++){
                printf("%c",205);
            }
            printf("%c\n",185);
            printf("%c",186);
            printf(" %s",data[mid].nama);
            for(int i = 0;i < (tp - strlen(data[mid].nama));i++){
                printf(" ");
            }
            printf(" %c\n",186);
            printf("%c",200);
            for(int i = 0;i < tp + 2;i++){
                printf("%c",205);
            }
            printf("%c\n",188);
            found = 1;
        }else{
            if(strcmp(data[mid].code,mencari) >= 0){
                j = mid - 1;
            }else{
                i = mid + 1;
            }
        }
    }
    
    return found;
}
