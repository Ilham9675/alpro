#include <stdio.h>
#include <string.h>
/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal
TP8 dalam mata kuliah algoritma dan pemlograman
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
int main(){
    char katakunci[100];// deklarasi untuk wadah kata kunci
    scanf("%s",katakunci);// pemasukan kata kunci
    int jumlahkata;// wadak jumlah kalimat yang akan di masukan
    scanf("%d",&jumlahkata);// pemasukan jumlah kalimat dari user
    char kata[jumlahkata][100];// deklarasi array of string untuk wadah kalimat
    // pemasukan karimat satu per satu
    for(int a = 0; a < jumlahkata;a++){
        scanf("%s",kata[a]);// pemasukan kalimat
    }
    char katadibersikan[jumlahkata][100];// deklarasi array of string untuk wadah kalimat yang cuba tedapat alfabet saja
    int jumlahkatabersih;// wadah untu jumlah kata yang sudah di kata yang sudah di bersikan
    // pengulangan untuk pemindahan dari array of string utama ke array of string yang sudah di bersikan
    for(int a = 0; a < jumlahkata;a++){
        jumlahkatabersih = 0;
        // pengulangan untuk pengecekan satu persatu karakternya
        for(int b = 0; b < strlen(kata[a]);b++){
            // kondisi if ini akan berjalan apabila karakter itu alfabet 
            if((kata[a][b] > 64 && kata[a][b] < 91) || (kata[a][b] > 96 && kata[a][b] < 123)){
                katadibersikan[a][jumlahkatabersih] = kata[a][b];// pemindahan karakter
                jumlahkatabersih++;
            }
            // jika pengulangan sudah di ujung pengulangan ini akan berjalan agar array ada penutupnya atau batasnya
            if(b == strlen(kata[a]) - 1){
                katadibersikan[a][jumlahkatabersih] = '\0';// pemasukan batas ke ujung array 
            }
        }
    }
    int total = 0;// untuk wadah jumlah total ascii kata kunci
    for(int a = 0; a < strlen(katakunci); a++){// pengulangan untuk menghitung ascii kata kunci
        total += katakunci[a];// penjumlahan ascii kata kunci
    }
    int k = total % 26; // agar membentuk k itu harus total ascii kata kunci di modulo jumlah alfabet yaitu 26
    int sementara;// deklarasi wadah untuk jadi wadah atau tempat sementara di penghitungan asciinya
    if(total % 2 == 0){// jika jumlahnya asciinya genap maka akan masuk ke dalam kondisi
        for(int a = 0; a < jumlahkata; a++){// pengulangan jumlah kalimat
            for(int b = 0; b < strlen(katadibersikan[a]); b++){// pengulangan jumlah karakter dari setiap karakter
                sementara = katadibersikan[a][b];// pemasukan nilai ascii ke dalam wadah sementara agar tidak terjadi error
                if((sementara > 64 && sementara < 91)){// pengecekan apakah huruf besar
                    sementara -= k;// pengurangan nilai ascii
                    if((sementara < 65)){// pengecekan apakah nilai ascii yang sudah di kurangi melewati batas atau tidak
                        sementara += 26;// penambhan nilai ascii agar tidak melewati batas
                    }
                    katadibersikan[a][b] = sementara;// pemasukan kembali nilai ascii yang sudah di ubah ke array of string
                }else{// jika kondisi di atas tidak terpenuhi maka akan menjalankan perogram ini
                    sementara -= k;// pengurangan nilai ascii
                    if(sementara < 97){// pengecekan apakah nilai ascii yang sudah di kurangi melewati batas atau tidak
                        sementara += 26;// penambhan nilai ascii agar tidak melewati batas
                    }
                    katadibersikan[a][b] = sementara;// pemasukan kembali nilai ascii yang sudah di ubah ke array of string
                }
            }
        }
    }else{// jika berjumlah ganjil akan masuk ke dalam perogram ini
        for(int a = 0; a < jumlahkata; a++){// pengulangan jumlah kalimat
            for(int b = 0; b < strlen(katadibersikan[a]); b++){// pengulangan jumlah karakter dari setiap karakter
                sementara = katadibersikan[a][b];// pemasukan nilai ascii ke dalam wadah sementara agar tidak terjadi error
                if((sementara > 64 && sementara < 91)){// pengecekan apakah huruf besar
                    sementara += k;// penambahnkan nilai ascii
                    if(sementara > 90){// pengecekan apakah nilai ascii yang sudah di tambah melewati batas atau tidak
                        sementara -= 26;// pengurangi nilai ascii agar tidak melewati batas
                    }
                    katadibersikan[a][b] = sementara;// pemasukan kembali nilai ascii yang sudah di ubah ke array of string
                }else{// jika kondisi di atas tidak terpenuhi maka akan menjalankan perogram ini
                    sementara += k;// penambahnkan nilai ascii
                    if(sementara > 122){// pengecekan apakah nilai ascii yang sudah di tambah melewati batas atau tidak
                        sementara -= 26;// pengurangi nilai ascii agar tidak melewati batas
                    }
                    katadibersikan[a][b] = sementara;// pemasukan kembali nilai ascii yang sudah di ubah ke array of string
                }
            }
        }
    }
    int jumlahascii[jumlahkata];// deklarasi untuk jumlah ascii yang sudah di ubah
    //pengulangan untuk mencari julamlah ascii dari seluruh kata dengan menjumlah kan setiap kalimatnya
    for(int a = 0; a < jumlahkata;a++){// pengulangan jumlah kata atau kalimat
        jumlahascii[a] = 0;
        for(int b = 0; b < strlen(katadibersikan[a]);b++){// pengulangan jumlah karakter
            jumlahascii[a] += katadibersikan[a][b];// penjumlahan kalimat ascii
        }
    }
    int asli = 0;// untuk menghitung berapa yang masuk ke dalam kata sali
    int rahasia = 0;// untuk menghitung berapa yang masuk ke dalam kata rahasia
    for (int a = 0;a < jumlahkata;a++){// pengulangan jumlah karakter
        if(jumlahascii[a] % 2 == 1){// kondisi jika jumlah ascii kalimat itu ganjil maka akan masuk ke kata rahasia
            rahasia++;
        }else{// dan jika jumlah ascii kalimat itu genap akan masuk ke dalam kata asli
            asli++;
        }
    }
    printf("%d\n",k);// printf pengeluaran nilai k ke user
    for(int a = 0;a < jumlahkata;a++){// pengulangan untuk mengeluarkan jumlah kata yang sudak bersih dari karakter selain alfabet
        if(a == 0){
            printf("%s",katadibersikan[a]);
        }else{
            printf(" %s",katadibersikan[a]);
        }
    }
    printf("\n");
    int indikator = 0;//untuk indikator kapan kalimat harus telbalik atau biasa
    printf("Kelompok kata rahasia:\n");
    if(rahasia == 0){// kondisi ketika jumlah rahasia nol
        printf("  Bukan pesan rahasia!\n");
    }else{// jika lebih dari nol  akan melaksanakan program ini atau pengeluarka sebuah kalimat
        for(int a = 0; a < jumlahkata;a++){// pengulangan jumlah kalimat
            if(jumlahascii[a] % 2 == 1){// pengecekan kalimat mana saya yang masuk dengan kondisi juka jumlah ascii kalimat tersebut ganjil
                for(int b = 0; b < 22 - strlen(katadibersikan[a]);b++){// pengulang untuk mengeluarkan pondasi spasi untuk kalimat
                    printf(" ");
                }
                if(indikator % 2 == 1){// pengecekan apakah kalimat akan di print biasa saja atau terbalik dan kondisinya itu jika ganjil terbalik dan genap biasa
                    for(int b = strlen(katadibersikan[a]) - 1; b >= 0;b--){// pengulangan jumlah karakter
                        printf("%c",katadibersikan[a][b]);
                    }
                    printf("\n");
                }else{
                    printf("%s\n",katadibersikan[a]);    
                }
                indikator++;
            }
        }
    }
    printf("\n");
    printf("Kelompok kata menyerupai kata asli:\n");
    indikator = 0;// meriset nilai indikator ke nol agak bisa di gunakan lagi
    if(asli == 0){// kondisi ketika jumlah rahasia nol
        for(int a = 0; a < 14; a++){// pengulangan jumlah pondasi untuk bisa sejajar dengan yang di atas
            printf(" ");
        }
        printf("Pesan sangat rahasia!\n");
    }else{// jika lebih dari nol  akan melaksanakan program ini atau pengeluarka sebuah kalimat
        for(int a = 0; a < jumlahkata;a++){// pengulangan jumlah kalimat
            if(jumlahascii[a] % 2 == 0){// pengecekan kalimat mana saya yang masuk dengan kondisi juka jumlah ascii kalimat tersebut genap
                for(int b = 0; b < 35 - strlen(katadibersikan[a]);b++){// pengulang untuk mengeluarkan pondasi spasi untuk kalimat
                    printf(" ");
                }
                if(indikator % 2 == 0){// pengecekan apakah kalimat akan di print biasa saja atau terbalik dan kondisinya itu jika ganjil biasa dan genap tebalik
                    for(int b = strlen(katadibersikan[a]) - 1; b >= 0;b--){// pengulangan jumlah karakter
                        printf("%c",katadibersikan[a][b]);
                    }
                    printf("\n");
                }else{
                    printf("%s\n",katadibersikan[a]);    
                }
                indikator++;
            }
        }
    }
    return 0;
}