/*
Saya ilham akbar mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include "header.h"

int main()
{
    int jumlahnama;                         // wadah untuk jumlah nama
    scanf("%d", &jumlahnama);               // pemasukan jumlah nama dari user
    char nama[jumlahnama][100];             // wadah untuk nama
    for (int i = 0; i < jumlahnama; i++){   // pengulangan untuk memasukan nama menggunakan perulangan
        scanf("%s", nama[i]);               // pemasukan nama ke dalam array dari user
    }
    int jumlahtransisi;                         // wadah untuk jumlah kode yang akan di tampilkan
    scanf("%d", &jumlahtransisi);               // pemasukan jumlah kode
    int transisi[jumlahtransisi];               // wadah untuk kode mana saja yang terpilih
    for (int i = 0; i < jumlahtransisi; i++){   // pemasukan kode ke array dengan perulangan
        scanf("%d", &transisi[i]);              // pemasukan kode dari user
    }
    int jumlahpesan;            // wadah jumlah transisi yang akan di lakukan
    scanf("%d", &jumlahpesan);  // pemasuka jumlah transisi
    int pesanlama[jumlahpesan]; // wadah untuk menampung kode mana yang akan di ubah
    int pesanbaru[jumlahpesan]; // wadah untuk menampung kode yang sebenarnya atau kode yang baru
    for (int i = 0; i < jumlahpesan; i++){              // pemasukan kodeyang lama dan yang baru menggunakan pengulangan
        scanf("%d %d", &pesanlama[i], &pesanbaru[i]);   // memasukan kode dari user
    }
    int ketebalan;             // wadah untuk ketebalan tampilan
    scanf("%d", &ketebalan);   // pemasukan ketebalan dari user
    int sudah[jumlahtransisi]; // wadah untuk sebuah indikator bila kode sudah di ganti maka tidak akan bisa di ganti lagi
    for (int i = 0; i < jumlahtransisi; i++){
        sudah[i] = 0;
    }
    for (int i = 0; i < jumlahpesan; i++){// pengulangan jumlah kode yang akan di tampilkan
        int j = 0; // inisialisasi
        int berhenti = 0;
        while ((j < jumlahtransisi) && (berhenti == 0)){  // jika ada transisi yang sudah di ganti maka pengulangan akan berakhir
            if ((pesanlama[i] == transisi[j]) && (jumlahnama >= pesanbaru[i]) && (sudah[j] == 0)){  // pengecekan untuk kode yang mana yang akan di ganti
                transisi[j] = pesanbaru[i]; // penggantian kode
                sudah[j] = 1;               // inisialisasi untuk mengentikan pengulangan
                berhenti = 1;
            }
            j++;
        }
    }
    // printf("sudah di transisi\n");
    // for(int i = 0;i < jumlahtransisi;i++){
    //     printf("%d\n",transisi[i]);
    // }
    int kode[jumlahtransisi];// untuk menjadi wadah kede yang akan di tampilkan
    int jumlahkode = 0;// jumlah kode yang akan di tampilkan
    for (int i = 0; i < jumlahtransisi; i++){
        /*
            if dan else ini untuk mengecek apakah kode yang kita tampilkan itu ada
            kode nya tau tidak karena kode yang bisa di tampilkan itu hanya terdapat sembilan kode saja
            jika tidak nama tidak sesuai maka kode akan di buang
        */
        if (strcmp(nama[transisi[i] - 1], "tolong") == 0){ 
            kode[jumlahkode] = transisi[i];
            jumlahkode++;
        }else if (strcmp(nama[transisi[i] - 1], "kirim") == 0){
            kode[jumlahkode] = transisi[i];
            jumlahkode++;
        }else if (strcmp(nama[transisi[i] - 1], "berita") == 0){
            kode[jumlahkode] = transisi[i];
            jumlahkode++;
        }else if (strcmp(nama[transisi[i] - 1], "kosong") == 0){
            kode[jumlahkode] = transisi[i];
            jumlahkode++;
        }else if (strcmp(nama[transisi[i] - 1], "matamata") == 0){
            kode[jumlahkode] = transisi[i];
            jumlahkode++;
        }else if (strcmp(nama[transisi[i] - 1], "pasukan") == 0){
            kode[jumlahkode] = transisi[i];
            jumlahkode++;
        }else if (strcmp(nama[transisi[i] - 1], "aman") == 0){ 
            kode[jumlahkode] = transisi[i];
            jumlahkode++;
        }else if (strcmp(nama[transisi[i] - 1], "masuk") == 0){
            kode[jumlahkode] = transisi[i];
            jumlahkode++;
        }else if (strcmp(nama[transisi[i] - 1], "tahan") == 0){
            kode[jumlahkode] = transisi[i];
            jumlahkode++;
        }
    }
    // printf("sudah di cek ada atau gak kodenya\n");
    // for(int i = 0;i < jumlahkode;i++){
    //     printf("%d\n",kode[i]);
    // }
    int jumlahkata[jumlahkode]; // wadah untuk menampung jumlah kata yang nama
    for (int j = 0; j < jumlahkode; j++){// untuk menampilkan nama apa aja yang akan di tanmpilkan
        jumlahkata[j] = strlen(nama[kode[j] - 1]); // pemasukan jumlah kata
        if (j == 0){// jika pengulangan pertama itu tidak ada spasi agar tidak ada spasi di ujung
            printf("%s", nama[kode[j] - 1]); // menampilkan nama
        }else{
            printf(" %s", nama[kode[j] - 1]);
        }
    }
    printf("*\n");
    for (int i = 0; i < ketebalan; i++){ // untuk menambahnkan jarak antara nama dan kode di bawah
        printf("*\n");
    }
    // karena printf ke samping jadi print nya per baris
    for (int i = 1; i <= 5; i++){ // prngulangan baris
        for (int k = 0; k < ketebalan; k++){ // pengulangan untuk ketebalan
            int akhir = 0; // untuk mengakhiri atau memberitau program bahwa tidak ada kagi kata yng akan di printf
            for (int j = 0; j < jumlahkode; j++){ // penulangan untuk kode
                if (jumlahkode - 1 == j){ // jika sudah sampai ujung maka spasi akan di hilangkan
                    akhir = 1;
                }
                akhir = spasi(jumlahkode, i, j, nama, kode, jumlahkata, akhir); // untuk mencari atau melihat apakah ada karakter lagi de depan
                if (strcmp(nama[kode[j] - 1], "tolong") == 0){ // printf keluaran untuk kode tolong
                    bentuk1(ketebalan, i, akhir);
                }else if (strcmp(nama[kode[j] - 1], "kirim") == 0){ // printf keluaran untuk kode kirim
                    bentuk2(ketebalan, i, akhir);
                }else if (strcmp(nama[kode[j] - 1], "berita") == 0){ // printf keluaran untuk kode berita
                    bentuk3(ketebalan, i, akhir);
                }else if (strcmp(nama[kode[j] - 1], "kosong") == 0){ // printf keluaran untuk kode kosong
                    bentuk4(ketebalan, i, akhir);
                }else if (strcmp(nama[kode[j] - 1], "matamata") == 0){ // printf keluaran untuk kode matamata
                    bentuk5(ketebalan, i, akhir);
                }else if (strcmp(nama[kode[j] - 1], "pasukan") == 0){ // printf keluaran untuk kode pasukan
                    bentuk6(ketebalan, i, akhir);
                }else if (strcmp(nama[kode[j] - 1], "aman") == 0){ // printf keluaran untuk kode aman
                    bentuk7(ketebalan, i, akhir);
                }else if (strcmp(nama[kode[j] - 1], "masuk") == 0){ // printf keluaran untuk kode masuk
                    bentuk8(ketebalan, i, akhir);
                }else if (strcmp(nama[kode[j] - 1], "tahan") == 0){ // printf keluaran untuk kode tahan
                    bentuk9(ketebalan, i, akhir);
                }
                if ((jumlahkode - 1 != j) && (akhir == 0)){ // untuk mengecek apakah ada kata di depan atau tidak
                    for (int m = 0; m < ketebalan; m++){ // untuk printf spasi antara satu kode dengan kode lain
                        printf(" ");
                    }
                }
            }
            printf("*\n");
        }
    }
    return 0;
}