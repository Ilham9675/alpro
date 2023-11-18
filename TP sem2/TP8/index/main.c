/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal
TP8 dalam mata kuliah algoritma dan pemlograman 2
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
#include "header.h"

int main(){
    system("cls");
    
    // inisialisasi isi bungkusan
    list_barang lb[100];
    barang kategori[100];
    barang merk[100];
    barang toko[100];
    hasil_list_barang hlb[100];

    // terpanjang atau tp adalah untuk mencari nilai terpanjang di sebuat entitas
    tp5 = 4;
    tp6 = 4;
    tp7 = 4;
    tp1 = 0;
    tp2 = 0;
    tp3 = 0;
    tp4 = 0;

    // memasukan data dari file
    masukan_data1(lb,"../file/listbarang.dat");
    masukan_data2(kategori,"../file/kategori.dat",&jumk);
    masukan_data2(merk,"../file/merk.dat",&jumm);
    masukan_data2(toko,"../file/toko.dat",&jumt);
    // mengabungkan data menjadi data keseluruhan
    mengisi_data(lb,kategori, merk, toko,"../file/listBarangFinal.dat",hlb);
    
    menampilkan_data(hlb);// menampilkan data
    int value = 0;
    int list;
    while(value == 0){// pengecekan menu kalau value 0 maka menu akan terus berrulang kalau menu 1 maka akan 
        // tampilan menu
        pilihan1();
        printf("masukan pilihan :");
        scanf("%d",&list);// memasukan pilihan
        if(list == 1){
            system("cls");
            pilihan11();// menampilkan menu
            printf("masukan pilihan :");
            scanf("%d",&list);// memasukan pilihan
            if(list == 1){
                menampilkan_data(hlb);// menampilkan data keseluruhan
            }else if(list == 2){
                menampilkan_data2(kategori,tp2,tp5,"Kategori",8);// menampilkan data kategori
            }else if(list == 3){
                menampilkan_data2(merk,tp3,tp6,"Merk",4);// menampilkan data merk
            }else if(list == 4){
                menampilkan_data2(toko,tp4,tp7,"Toko",4);// menampilkan data toko
            }else if(list == 5){// kempali ke menu awal dan hanya membersihkan layar
                system("cls");
            }else if(list == 6){// menghentika pengulangan menu
                value = 1;
            }else{// selain menu di atas jika masukan pilihan tidak ada maka akan menampilkan yang di bawah ini
                system("cls");
                printf("pilihan tidak tersedia\n");
            }
        }else if(list == 2){
            system("cls");
            pilihan12();// menampilkan menu
            printf("masukan pilihan :");
            scanf("%d",&list);// memasukan pilihan
            if(list == 1){
                int cek = menambahkan_data(kategori,"../file/kategori.dat");// menambahkan data ke dalam struct
                masukan_data2(kategori,"../file/kategori.dat",&jumk);// mengupdate data yang ada di struct
                // mengupdate terpanjang
                if(cek > tp5){
                    tp5 = cek;
                }
                if(pj > tp2){
                    tp2 = pj;
                }
            }else if(list == 2){
                int cek = menambahkan_data(merk,"../file/merk.dat");// menambahkan data ke dalam struct
                masukan_data2(merk,"../file/merk.dat",&jumm);// mengupdate data yang ada di struct
                // mengupdate terpanjang
                if(cek > tp6){
                    tp6 = cek;
                }
                if(pj > tp3){
                    tp3 = pj;
                }
            }else if(list == 3){
                int cek = menambahkan_data(toko,"../file/toko.dat");// menambahkan data ke dalam struct
                masukan_data2(toko,"../file/toko.dat",&jumt);// mengupdate data yang ada di struct
                // mengupdate terpanjang
                if(cek > tp7){
                    tp7 = cek;
                }
                if(pj > tp4){
                    tp4 = pj;
                }
            }else if(list == 4){// kempali ke menu awal dan hanya membersihkan layar
                system("cls");
            }else if(list == 5){// menghentika pengulangan menu
                value = 1;
            }else{// selain menu di atas jika masukan pilihan tidak ada maka akan menampilkan yang di bawah ini
                system("cls");
                printf("pilihan tidak tersedia\n");
            }
        }else if(list == 3){
            system("cls");
            pilihan13();// menampilkan menu
            printf("masukan pilihan :");
            scanf("%d",&list);// memasukan pilihan
            if(list == 1){
                char mencari[50];// wadah untuk code
                printf("masukan code yang dicari :");
                scanf("%s",mencari);// masukan untuk mencari code 
                
                mencari_data(kategori,jumk,"Kategori",8,mencari,tp2);// mencari data 
            }else if(list == 2){
                char mencari[50];// wadah untuk code
                printf("masukan code yang dicari :");
                scanf("%s",mencari);// masukan untuk mencari code 
                mencari_data(merk,jumm,"Merk",4,mencari,tp3);// mencari data
            }else if(list == 3){
                char mencari[50];// wadah untuk code
                printf("masukan code yang dicari :");
                scanf("%s",mencari);// masukan untuk mencari code 
                mencari_data(toko,jumt,"Toko",4,mencari,tp4);// mencari data
            }else if(list == 4){
                char mencari[50];// wadah untuk code 
                printf("masukan code yang dicari :");
                scanf("%s",mencari);// masukan untuk mencari code 
                // mencari data di semua kategori
                mencari_data(kategori,jumk,"Kategori",8,mencari,tp2);// mencari data
                mencari_data(merk,jumm,"Merk",4,mencari,tp3);// mencari data
                mencari_data(toko,jumt,"Toko",4,mencari,tp4);// mencari data
            }else if(list == 5){// kempali ke menu awal dan hanya membersihkan layar
                system("cls");
            }else if(list == 6){// menghentika pengulangan menu
                value = 1;
            }else{// selain menu di atas jika masukan pilihan tidak ada maka akan menampilkan yang di bawah ini
                system("cls");
                printf("pilihan tidak tersedia\n");
            }
        }else if(list == 4){// menghentika pengulangan menu
            value = 1;
        }else{// selain menu di atas jika masukan pilihan tidak ada maka akan menampilkan yang di bawah ini
            system("cls");
            printf("pilihan tidak tersedia\n");
        }
        
    }
    return 0;
}