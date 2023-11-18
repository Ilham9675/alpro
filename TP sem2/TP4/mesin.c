/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal
TP4 dalam mata kuliah algoritma dan pemlograman 2
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
#include "header.h"
void insertion(int jumlah,char nama[jumlah][100],int umur[jumlah],char kode[5]){
    char nama_sementara[100];// wadah untuk nama sementara 
    int sementara;// wadah untuk nilai sementara 
    if(kode[1] == 'N'){// pengecekan jika kode indek ke sati itu N maka akan masuk ke if jika tidak masuk ke else
        
        for (int i = 1; i < jumlah; i++){// pengulangan dengan sebanyak jumlah
            strcpy(nama_sementara,nama[i]);// memindahkan nama indek i ke dalam nama sementara
            sementara = umur[i];//  memindahkan nama indek i ke dalam nama sementara
            int j = i - 1;// j adalah i di min satu
            if(kode[0] == 'A'){// jika kode indek 0 
                while ((j >= 0) && (strcmp(nama_sementara,nama[j])) < 0){// unutk mencari nilai di mana yang tepat untuk tem juka pengulangan masih berlanjut maka nilai belum menemukan posisinya
                    strcpy(nama[j+1],nama[j]);// memindahkan nama indek j  ke nama indek j + 1
                    umur[j+1] = umur[j];// memindahkan nilai umur j ke umur j + 1
                    j--;
                }
            }else{
                while ((j >= 0) && (strcmp(nama_sementara,nama[j])) > 0){// untuk mencari posisi
                    umur[j+1] = umur[j];// memindahkan nilai umur j ke umur j + 1
                    strcpy(nama[j+1],nama[j]);// memindahkan nama indek j  ke nama indek j + 1
                    j--;
                }
            }
            umur[j+1] = sementara;// mengebalikan sementara ke umur indek j + 1
            strcpy(nama[j+1],nama_sementara);// mengembalikan nama sementara ke nama indek j + 1
        }
    }else{
        for (int i = 1; i < jumlah; i++){// pengulangan dengan sebanyak jumlah
            strcpy(nama_sementara,nama[i]);// memindahkan nama indek i ke dalam nama sementara
            sementara = umur[i];//  memindahkan nama indek i ke dalam nama sementara
            int j = i - 1;// j adalah i di min satu
            if(kode[0] == 'A'){// jika kode indek 0 
                while ((j >= 0) && (sementara < umur[j])){// mencari posisi
                    strcpy(nama[j+1],nama[j]);// memindahkan nama indek j  ke nama indek j + 1
                    umur[j+1] = umur[j];// memindahkan nilai umur j ke umur j + 1
                    j--;
                }
            }else{
                while ((j >= 0) && (sementara > umur[j])){//mencari posisi
                    umur[j+1] = umur[j];// memindahkan nilai umur j ke umur j + 1
                    strcpy(nama[j+1],nama[j]);// memindahkan nama indek j  ke nama indek j + 1
                    j--;
                }
            }
            umur[j+1] = sementara;// mengebalikan sementara ke umur indek j + 1
            strcpy(nama[j+1],nama_sementara);// mengembalikan nama sementara ke nama indek j + 1
        }
    }
}
void selection(int jumlah,char nama[jumlah][100],int umur[jumlah], char kode[5]){
    char nama_sementara[100];// wadah untuk nama sementara 
    int sementara;// wadah untuk nilai sementara 
    if(kode[1] == 'N'){// pengecekan jika kode indek ke sati itu N maka akan masuk ke if jika tidak masuk ke else
        for (int i = 0; i < jumlah-1; i++){// pengulangan dengan sebanyak jumlah di min satu
            int k = i;
            for (int j = i+1; j < jumlah; j++){// pengulangan dengan sebanyak jumlah
                if(kode[0] == 'A'){// jika kode indek 0 sama dengan a maka masuk ke dalam kondisi
                    if (strcmp(nama[k],nama[j]) > 0)// pengecekan nilai nama dan untuk pencarian posisi
                    {
                        k = j;
                    }
                }else{
                    if (strcmp(nama[k],nama[j]) < 0)// pengecekan nilai nama dan untuk pencarian posisi dan ini di balik posisi
                    {
                        k = j;
                    }
                }
            }
            // untuk memindahkan nama indek ke i ke nama indek ke k dengan menggunakan string nama_semntara
            strcpy(nama_sementara,nama[i]);
            strcpy(nama[i],nama[k]);
            strcpy(nama[k],nama_sementara);
            // untuk memindahkan umur dari indek i ke umur indek k dengan menggunakan integer sementara
            sementara = umur[i];
            umur[i] = umur[k];
            umur[k] = sementara;
        }
    }else{
        
        for (int i = 0; i < jumlah-1; i++){// pengulangan dengan sebanyak jumlah di min satu
            int k = i;
            for (int j = i+1; j < jumlah; j++){// pengulangan dengan sebanyak jumlah
                if(kode[0] == 'A'){// jika kode indek 0 sama dengan a maka masuk ke dalam kondisi
                    if (umur[k] > umur[j])// pengecekan nilai umur dan untuk pencarian posisi
                    {
                        k = j;
                    }
                }else{
                    if (umur[k] < umur[j]){// pengecekan nilai umur dan untuk pencarian posisi
                        k = j;
                    }
                }
            }
             // untuk memindahkan nama indek ke i ke nama indek ke k dengan menggunakan string nama_semntara
            strcpy(nama_sementara,nama[i]);
            strcpy(nama[i],nama[k]);
            strcpy(nama[k],nama_sementara);
            // untuk memindahkan umur dari indek i ke umur indek k dengan menggunakan integer sementara
            sementara = umur[i];
            umur[i] = umur[k];
            umur[k] = sementara;
        }
    }
}

void masukan(int jumlah,char nama[jumlah][100],int umur[jumlah]){
    for (int i = 0; i < jumlah; i++){// pengulangan dengan sebanyak jumlah
        scanf("%s %d",nama[i],&umur[i]);// unutk memasukan nama dan umur dari user
    }
}

void tampilan(int jumlah_ascii_nama,int jumlah_ascii_umur,int jumlah,char nama[jumlah][100],int umur[jumlah]){
    int terpanjang = 0;// wadah untuk mencari terpanjang
    for(int i = 0; i < jumlah;i++){// pengulangan dengan sebanyak jumlah
        if(terpanjang < strlen(nama[i])){// mencari nilai terbesar atau string terbesar
            terpanjang = strlen(nama[i]);
        }
    }
    printf("Hasil setelah diurutkan :\n");
    printf("=========================\n");
    for (int i = 0; i < jumlah; i++){// pengulangan dengan sebanyak jumlah
        printf("%s",nama[i]);// menampilkan nama
        for (int k = 0; k < (terpanjang - strlen(nama[i])) + 2; k++){// pengulangan untuk tampilan spasi 
            printf(" ");
        }
        printf("%d\n",umur[i]);// menampilkan umur
        
    }
    printf("=========================\n");
    printf("Selamat, Anda masuk ke asrama ");
    // untuk menampilkan asrama
    if((jumlah_ascii_nama%2 == 0) && (jumlah_ascii_umur%2 == 0)){// jika jumlah ascii nama itu genap dan jumlah umur genap maka angan masuk if
        printf("Adora Rourie!\n");
    }else if((jumlah_ascii_nama % 2 == 0) && (jumlah_ascii_umur%2 == 1)){// jika jumlah ascii nama itu genap dan jumlah umur ganjil maka angan masuk if
        printf("Jocelin Cosu!\n");
    }else if((jumlah_ascii_nama % 2 == 1) && (jumlah_ascii_umur%2 == 1)){// jika jumlah ascii nama itu ganjil dan jumlah umur ganjil maka angan masuk if
        printf("Boden Sournois!\n");
    }else{
        printf("Pyneres Cannes!\n");
    }
}

int cari_jumlah(int jumlah,char nama[jumlah][100]){
    int hasil = 0;// unutk wadah hasil
    for (int i = 0; i < strlen(nama[0]); i++)// pengulangan dengan sebanyak jumlah
    {
        hasil += nama[0][i];// hasil di tambah dengan karakter nama dengan idek 0 dan indek karakter ideks i
    }
    return hasil;
}