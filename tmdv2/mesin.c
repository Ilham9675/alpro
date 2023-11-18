#include "header.h"



// mesin karakter
void start_karakter(char data[100]){
    indeks_karakter = 0;
    
    scanf("%c",&cc);
    if(cc != '\n'){
        data[indeks_karakter] = cc;
    }else{
        indeks_karakter--;
    }
}
void inc_karakter(char data[100]){
    indeks_karakter++;
    scanf("%c",&cc);
    
    data[indeks_karakter] = cc;
}
int eop_karakter(char data[100]){
    if(cc == ';'){
        indeks_karakter++;
        data[indeks_karakter] = '\0';
        return 1;
    }else{
        return 0;
    }
}


// mesin kata
void start_kata(char data[100]){
    indeks_kata = 0;
    panjang_kata = 0;
    
    while(data[indeks_kata] == ' '){
        indeks_kata++;
        
    }
    
    while(data[indeks_kata] != ' ' && data[indeks_kata] != ';'){
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
    while(data[indeks_kata] != ' ' && data[indeks_kata] != ';'){
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
int eop_kata(char data[]){
    if(data[indeks_kata] == ';'){
        return 1;
    }else{
        return 0;
    }
}



void pemasukan_data_table(table_data data[100], char lokasi[100]){
    indek_global = 0;// wadah untuk indek
    FILE *fdata;// inisialisi file 
    fdata = fopen(lokasi, "r");// membuka file
    fscanf(fdata, "%s %s", data[indek_global].code,data[indek_global].nama);// memsukan data ke bungkusan untuk pengecekan data apakah ada atu gak
    
    while (strcmp(data[indek_global].nama, "####") != 0){
            indek_global++; // maju ke penampung data berikutnya
            fscanf(fdata, "%s %s", data[indek_global].code,data[indek_global].nama);// pemasukan data ke bungkusan
            
        }
    indek_global = 0;
    fscanf(fdata, "%s", data[indek_global].nama_table);// memsukan data ke bungkusan untuk pengecekan data apakah ada atu gak
    
    while (strcmp(data[indek_global].nama_table, "####") != 0){
            indek_global++; // maju ke penampung data berikutnya
            fscanf(fdata, "%s", data[indek_global].nama_table);// pemasukan data ke bungkusan
            
    }
    fclose(fdata);// penutupan file
}
void pemasukan_data_table_pelanggan(table_data2 data[100], char lokasi[100]){
    indek_global = 0;// wadah untuk indek
    FILE *fdata;// inisialisi file 
    fdata = fopen(lokasi, "r");// membuka file
    fscanf(fdata, "%s %s %s %s", data[indek_global].code,data[indek_global].nama,data[indek_global].code_barang,data[indek_global].code_waktu);// memsukan data ke bungkusan untuk pengecekan data apakah ada atu gak
    
    while (strcmp(data[indek_global].nama, "####") != 0){
            indek_global++; // maju ke penampung data berikutnya
            fscanf(fdata, "%s %s %s %s", data[indek_global].code,data[indek_global].nama,data[indek_global].code_barang,data[indek_global].code_waktu);// pemasukan data ke bungkusan
            
        }
    indek_global = 0;
    fscanf(fdata, "%s", data[indek_global].nama_table);// memsukan data ke bungkusan untuk pengecekan data apakah ada atu gak
    while (strcmp(data[indek_global].nama_table, "####") != 0){
            indek_global++; // maju ke penampung data berikutnya
            fscanf(fdata, "%s", data[indek_global].nama_table);// pemasukan data ke bungkusan
            
    }
    fclose(fdata);// penutupan file
}
void pemasukan_data_list_table(list_table data[100], char lokasi[100]){
    indek_global = 0;// wadah untuk indek
    FILE *fdata;// inisialisi file 
    fdata = fopen(lokasi, "r");// membuka file
    fscanf(fdata, "%s", data[indek_global].nama);// memsukan data ke bungkusan untuk pengecekan data apakah ada atu gak
    
    while (strcmp(data[indek_global].nama, "####") != 0){
        indek_global++; // maju ke penampung data berikutnya
        fscanf(fdata, "%s", data[indek_global].nama);// pemasukan data ke bungkusan    
    }
    fclose(fdata);// penutupan file
}
void pemasukan_data_table_pelanggan_akhir(table_data2 data[100], char lokasi[100]){
    indek_global = 0;// wadah untuk indek
    FILE *fdata;// inisialisi file 
    fdata = fopen(lokasi, "r");// membuka file
    fscanf(fdata, "%s %s %s %s", data[indek_global].code,data[indek_global].nama,data[indek_global].code_barang,data[indek_global].code_waktu);// memsukan data ke bungkusan untuk pengecekan data apakah ada atu gak
    
    while (strcmp(data[indek_global].nama, "####") != 0){
            indek_global++; // maju ke penampung data berikutnya
            fscanf(fdata, "%s %s %s %s", data[indek_global].code,data[indek_global].nama,data[indek_global].code_barang,data[indek_global].code_waktu);// pemasukan data ke bungkusan
            
        }
    fclose(fdata);// penutupan file
}


void mengisi_data(table_data tb[100],char filename[50],char data1[100],char data2[100]){
    indek_global = 0;// wadah untuk indek
    FILE *fdata;// inisialisi file 
    fdata = fopen(filename, "w"); // membuka file
    // memasukan sebuah data keseluluhan data yang ada ke dalam satu file
    while (strcmp(tb[indek_global].code, "####") != 0)
    {
            fprintf(fdata, "%s %s\n", 
            tb[indek_global].code,tb[indek_global].nama);// pemasukan data ke bungkusan
            indek_global++; // maju ke penampung data berikutnya
            
    }
    fprintf(fdata, "%s %s\n", data1,data2);// pemasukan ke dalam file
    fprintf(fdata, "%s %s\n", "####","####");// pemasukan batas ke file
    indek_global = 0;
    while (strcmp(tb[indek_global].nama_table, "####") != 0)
    {
            fprintf(fdata, "%s\n", 
            tb[indek_global].nama_table);// pemasukan data ke bungkusan
            indek_global++; // maju ke penampung data berikutnya
            
    }
    fprintf(fdata, "%s\n", "####");
    // "tutup file"
    fclose(fdata);
}
void mengisi_data_pelanggan(table_data2 tb[100],char filename[50],char data1[100],char data2[100],char data3[100],char data4[100]){ 
    indek_global = 0;// wadah untuk indek
    FILE *fdata;// inisialisi file 
    fdata = fopen(filename, "w"); // membuka file
    // memasukan sebuah data keseluluhan data yang ada ke dalam satu file
    while (strcmp(tb[indek_global].code, "####") != 0)
    {
            fprintf(fdata, "%s %s %s %s\n", 
            tb[indek_global].code,tb[indek_global].nama,tb[indek_global].code_barang,tb[indek_global].code_waktu);// pemasukan data ke bungkusan
            indek_global++; // maju ke penampung data berikutnya
            
    }
    fprintf(fdata, "%s %s %s %s\n", data1,data2,data3,data4);// pemasukan ke dalam file
    fprintf(fdata, "%s %s %s %s\n", "####","####","####","####");// pemasukan batas ke file
    indek_global = 0;
    while (strcmp(tb[indek_global].nama_table, "####") != 0)
    {
            fprintf(fdata, "%s\n", 
            tb[indek_global].nama_table);// pemasukan data ke bungkusan
            indek_global++; // maju ke penampung data berikutnya
            
    }
    fprintf(fdata, "%s\n", "####");// pemasukan batas ke file

    // "tutup file"
    fclose(fdata);
}


void update_data(table_data tb[100],char filename[50],char data1[100],char data2[100]){
    indek_global = 0;// wadah untuk indek
    wadah_pengecekan_global = 0;
    FILE *fdata;// inisialisi file 
    fdata = fopen(filename, "w"); // membuka file
    // memasukan sebuah data keseluluhan data yang ada ke dalam satu file
    while (strcmp(tb[indek_global].code, "####") != 0){
        if(strcmp(tb[indek_global].code, data1) == 0){
            fprintf(fdata, "%s %s\n", 
            data1,data2);// pemasukan data ke bungkusan
            wadah_pengecekan_global = 1;
        }else{
            fprintf(fdata, "%s %s\n", 
            tb[indek_global].code,tb[indek_global].nama);// pemasukan data ke bungkusan
        }
        indek_global++; // maju ke penampung data berikutnya
            
    }
    if(wadah_pengecekan_global == 0){
        fprintf(fdata, "%s %s\n", data1,data2);// pemasukan ke dalam file
    }
    fprintf(fdata, "%s %s\n", "####","####");// pemasukan batas ke file
    indek_global = 0;
    while (strcmp(tb[indek_global].nama_table, "####") != 0){
        fprintf(fdata, "%s %s\n", 
        tb[indek_global].nama_table);// pemasukan data ke bungkusan
        indek_global++; // maju ke penampung data berikutnya
            
    }
    fprintf(fdata, "%s\n", "####");
    // "tutup file"
    fclose(fdata);
}
void update_data2(table_data2 tb[100],char filename[50],char data1[100],char data2[100],char data3[100],char data4[100]){
    indek_global = 0;// wadah untuk indek
    wadah_pengecekan_global = 0;
    FILE *fdata;// inisialisi file 
    fdata = fopen(filename, "w"); // membuka file
    // memasukan sebuah data keseluluhan data yang ada ke dalam satu file
    while (strcmp(tb[indek_global].code, "####") != 0)
    {
        if(strcmp(tb[indek_global].code, data1) == 0){
            fprintf(fdata, "%s %s %s %s\n", 
            data1,data2,data3,data4);// pemasukan data ke bungkusan
            wadah_pengecekan_global = 1;
        }else{
            fprintf(fdata, "%s %s %s %s\n", 
            tb[indek_global].code,tb[indek_global].nama,tb[indek_global].code_barang,tb[indek_global].code_waktu);// pemasukan data ke bungkusan
        }
        indek_global++; // maju ke penampung data berikutnya
            
    }
    if(wadah_pengecekan_global == 0){
        fprintf(fdata, "%s %s %s %s\n", data1,data2,data3,data4);// pemasukan ke dalam file
    }
    fprintf(fdata, "%s %s %s %s\n", "####","####","####","####");// pemasukan batas ke file
    indek_global = 0;
    while (strcmp(tb[indek_global].nama_table, "####") != 0){
        fprintf(fdata, "%s\n", 
        tb[indek_global].nama_table);// pemasukan data ke bungkusan
        indek_global++; // maju ke penampung data berikutnya
            
    }
    fprintf(fdata, "%s\n", "####");
    // "tutup file"
    fclose(fdata);
}


void delete_data(table_data tb[100],char filename[50],char data1[100]){
    indek_global = 0;// wadah untuk indek
    FILE *fdata;// inisialisi file 
    fdata = fopen(filename, "w"); // membuka file
    // memasukan sebuah data keseluluhan data yang ada ke dalam satu file
    while (strcmp(tb[indek_global].code, "####") != 0)
    {
        if(strcmp(tb[indek_global].code, data1) != 0){
            fprintf(fdata, "%s %s\n", 
            tb[indek_global].code,tb[indek_global].nama);// pemasukan data ke bungkusan
        }
        indek_global++; // maju ke penampung data berikutnya
            
    }
    fprintf(fdata, "%s %s\n", "####","####");// pemasukan batas ke file
    indek_global = 0;
    while (strcmp(tb[indek_global].nama_table, "####") != 0){
        fprintf(fdata, "%s %s\n", 
        tb[indek_global].nama_table);// pemasukan data ke bungkusan
        indek_global++; // maju ke penampung data berikutnya
            
    }
    fprintf(fdata, "%s\n", "####");
    // "tutup file"
    fclose(fdata);
}
void delete_data2(table_data2 tb[100],char filename[50],char data1[100]){
    indek_global = 0;// wadah untuk indek
    FILE *fdata;// inisialisi file 
    fdata = fopen(filename, "w"); // membuka file
    // memasukan sebuah data keseluluhan data yang ada ke dalam satu file
    while (strcmp(tb[indek_global].code, "####") != 0)
    {
        if(strcmp(tb[indek_global].code, data1) != 0){
            fprintf(fdata, "%s %s %s %s\n", 
            tb[indek_global].code,tb[indek_global].nama,tb[indek_global].code_barang,tb[indek_global].code_waktu);// pemasukan data ke bungkusan
        }
        indek_global++; // maju ke penampung data berikutnya
            
    }
    fprintf(fdata, "%s %s %s %s\n", "####","####","####","####");// pemasukan batas ke file
    indek_global = 0;
    while (strcmp(tb[indek_global].nama_table, "####") != 0){
        fprintf(fdata, "%s\n", 
        tb[indek_global].nama_table);// pemasukan data ke bungkusan
        indek_global++; // maju ke penampung data berikutnya
            
    }
    fprintf(fdata, "%s\n", "####");
    // "tutup file"
    fclose(fdata);
}


int pengecekan_data( table_data tb[100],char data[100]){
    wadah_hasil_global = 0;
    indek_global = 0;
    while (strcmp(tb[indek_global].code, "####") != 0){
        if(strcmp(tb[indek_global].code, data) == 0){
            wadah_hasil_global = 1;
        }
        indek_global++; // maju ke penampung data berikutnya    
    }
    return wadah_hasil_global;
}

int pengecekan_data2( table_data2 tb[100],char data[100]){
    wadah_hasil_global = 0;
    indek_global = 0;
    while (strcmp(tb[indek_global].code, "####") != 0){
        if(strcmp(tb[indek_global].code, data) == 0){
            wadah_hasil_global = 1;
        }
        indek_global++; // maju ke penampung data berikutnya
    }
    return wadah_hasil_global;
}
int pengecekan_data_table(list_table data[100],char nama_table[100]){
    wadah_hasil_global = 0;
    indek_global = 0;
    while (strcmp(data[indek_global].nama,"####") != 0){
        if(strcmp(data[indek_global].nama,nama_table) == 0){
            wadah_hasil_global = 1;
        }
        indek_global++;
    }
    return wadah_hasil_global;
}
int pengecekan_data_table_kolom(table_data2 tb[100],char data[100],int kolom){
    wadah_hasil_global = 0;
    indek_global = 0;
    while (strcmp(tb[indek_global].code, "####") != 0){
        if((strcmp(tb[indek_global].code_barang, data) == 0) && (kolom == 3)){
            wadah_hasil_global = 1;
        }
        if((strcmp(tb[indek_global].code_waktu, data) == 0) && (kolom == 4)){
            wadah_hasil_global = 1;
        }
        
        indek_global++; // maju ke penampung data berikutnya
    }
    return wadah_hasil_global;
}


void table_hasil_kolom3(table_data2 tb[100],char filename[50],table_data data2[100]){
    indek_global = 0;// wadah untuk indek
    FILE *fdata;// inisialisi file 
    fdata = fopen(filename, "w"); // membuka file
    // memasukan sebuah data keseluluhan data yang ada ke dalam satu file
    while (strcmp(tb[indek_global].code, "####") != 0)
    {
        int j = 0;
        while (strcmp(tb[indek_global].code_barang,data2[j].code) != 0){
            j++;
        }
        fprintf(fdata, "%s %s %s %s\n", 
        tb[indek_global].code,tb[indek_global].nama,data2[j].nama,tb[indek_global].code_waktu);// pemasukan data ke bungkusan
        indek_global++; // maju ke penampung data berikutnya
            
    }
    fprintf(fdata, "%s %s %s %s\n", "####","####","####","####");// pemasukan batas ke file
    
    // "tutup file"
    fclose(fdata);
}
void table_hasil_kolom4(table_data2 tb[100],char filename[50],table_data data2[100]){
    indek_global = 0;// wadah untuk indek
    FILE *fdata;// inisialisi file 
    fdata = fopen(filename, "w"); // membuka file
    // memasukan sebuah data keseluluhan data yang ada ke dalam satu file
    while (strcmp(tb[indek_global].code, "####") != 0)
    {
        int j = 0;
        while (strcmp(tb[indek_global].code_waktu,data2[j].code) != 0){
            j++;
        }
        fprintf(fdata, "%s %s %s %s\n", 
        tb[indek_global].code,tb[indek_global].nama,tb[indek_global].code_barang,data2[j].nama);// pemasukan data ke bungkusan
        indek_global++; // maju ke penampung data berikutnya
            
    }
    fprintf(fdata, "%s %s %s %s\n", "####","####","####","####");// pemasukan batas ke file
    
    // "tutup file"
    fclose(fdata);
}

void persamaan(char kata[100]){
    for(int i = 0;i < get_panjang_kata();i++){
        if(kata[i] >= 65 && kata[i] <= 90){
            kata[i] += 32;
        }
    }
}

void bagian1_baris_tabel(int tp){
    for(int j = 0;j < tp;j++) {
        printf("%c",205);
    }
}
void bagian2_spasi_tabel(int tp,int jumlah){
    for(int j = 0; j < tp - jumlah;j++){
        printf(" ");
    }
}

void tampilka_table_empat_kolom(table_data2 tb[100],char head1[100],char head2[100],char head3[100],char head4[100]){
    int tp1 = 0,tp2 = 0,i = 0;
    int tp3 = 0,tp4 = 0;
    while(strcmp(tb[i].code,"####") != 0){
        if(tp1 < strlen(tb[i].code)){
            tp1 = strlen(tb[i].code);
        }
        if(tp2 < strlen(tb[i].nama)){
            tp2 = strlen(tb[i].code);
        }
        if(tp3 < strlen(tb[i].nama)){
            tp3 = strlen(tb[i].code_barang);
        }
        if(tp4 < strlen(tb[i].nama)){
            tp4 = strlen(tb[i].code_waktu);
        }
        i++;
    }
    if(strlen(head1) > tp1){
        tp1 = strlen(head1);
    }
    if(strlen(head2) > tp2){
        tp2 = strlen(head2);
    }
    if(strlen(head3) > tp3){
        tp3 = strlen(head3);
    }
    if(strlen(head4) > tp4){
        tp4 = strlen(head4);
    }
    // header atas
    printf("%c%c",201,205);
    bagian1_baris_tabel(tp1);
    printf("%c%c%c",205,203,205);
    bagian1_baris_tabel(tp2);
    printf("%c%c%c",205,203,205);
    bagian1_baris_tabel(tp3);
    printf("%c%c%c",205,203,205);
    bagian1_baris_tabel(tp4);
    printf("%c%c\n",205,187);
    // header teks
    printf("%c ",186);
    printf("%s",head1);
    printf(" %c ",186);
    printf("%s",head2);
    printf(" %c ",186);
    printf("%s",head3);
    printf(" %c ",186);
    printf("%s",head4);
    printf(" %c\n",186);

    // pembatas header dengan data

    printf("%c%c",204,205);
    bagian1_baris_tabel(tp1);
    printf("%c%c%c",205,206,205);
    bagian1_baris_tabel(tp2);
    printf("%c%c%c",205,206,205);
    bagian1_baris_tabel(tp3);
    printf("%c%c%c",205,206,205);
    bagian1_baris_tabel(tp4);
    printf("%c%c\n",205,185);
    // menampilkan data 
    i = 0;
    while(strcmp(tb[i].code,"####") != 0){
        printf("%c ",186);
        printf("%s",tb[i].code);
        bagian2_spasi_tabel(tp1,strlen(tb[i].code));
        printf(" %c ",186);
        printf("%s",tb[i].nama);
        bagian2_spasi_tabel(tp2,strlen(tb[i].nama));
        printf(" %c ",186);
        printf("%s",tb[i].code_barang);
        bagian2_spasi_tabel(tp3,strlen(tb[i].code_barang));
        printf(" %c ",186);
        printf("%s",tb[i].code_waktu);
        bagian2_spasi_tabel(tp4,strlen(tb[i].code_waktu));
        printf(" %c\n",186);
        i++;
    }
    // penutup table
    printf("%c%c",200,205);
    bagian1_baris_tabel(tp1);
    printf("%c%c%c",205,202,205);
    bagian1_baris_tabel(tp2);
    printf("%c%c%c",205,202,205);
    bagian1_baris_tabel(tp3);
    printf("%c%c%c",205,202,205);
    bagian1_baris_tabel(tp4);
    printf("%c%c\n",205,188);
}
void tampilka_table(table_data tb[100],char head1[100],char head2[100]){
    int tp1 = 0,tp2 = 0,i = 0;
    while(strcmp(tb[i].code,"####") != 0){
        if(tp1 < strlen(tb[i].code)){
            tp1 = strlen(tb[i].code);
        }
        if(tp2 < strlen(tb[i].nama)){
            tp1 = strlen(tb[i].code);
        }
        i++;
    }
    if(strlen(head1) > tp1){
        tp1 = strlen(head1);
    }
    if(strlen(head2) > tp2){
        tp2 = strlen(head2);
    }
    // header atas
    printf("%c%c",201,205);
    bagian1_baris_tabel(tp1);
    printf("%c%c%c",205,203,205);
    bagian1_baris_tabel(tp2);
    printf("%c%c\n",205,187);
    // header teks
    printf("%c ",186);
    printf("%s",head1);
    printf(" %c ",186);
    printf("%s",head2);
    printf(" %c\n",186);

    // pembatas header dengan data
    printf("%c%c",204,205);
    bagian1_baris_tabel(tp1);
    printf("%c%c%c",205,206,205);
    bagian1_baris_tabel(tp2);
    printf("%c%c\n",205,185);

    // menampilkan data 
    i = 0;
    while(strcmp(tb[i].code,"####") != 0){
        printf("%c ",186);
        printf("%s",tb[i].code);
        bagian2_spasi_tabel(tp1,strlen(tb[i].code));
        printf(" %c ",186);
        printf("%s",tb[i].nama);
        bagian2_spasi_tabel(tp2,strlen(tb[i].nama));
        printf(" %c\n",186);
        i++;
    }
    // penutup table
    printf("%c%c",200,205);
    bagian1_baris_tabel(tp1);
    printf("%c%c%c",205,202,205);
    bagian1_baris_tabel(tp2);
    printf("%c%c\n",205,188);
}








