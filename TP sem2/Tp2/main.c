/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal
TP2 dalam mata kuliah algoritma dan pemlograman 2
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
#include "header.h"

int main()
{
    int kolom;// wadah untuk kolom
    int baris;// wadah untuk baris
    scanf("%d %d",&baris ,&kolom);// masukan dari user untuk baris dan kulom
    wisuda mahasiswa[baris][kolom];// dekralasi matriks bungkusan
    for(int i = 0;i < baris;i++){ // pengulangan untuk baris
        for(int j = 0;j < kolom;j++){// pengulangan untuk kolom
            scanf("%s %s",mahasiswa[i][j].nama,mahasiswa[i][j].ukuran);// masukan untuk nama dan ukuran toga
        }
    }
    peserta pindah[100];// dekralasi matriks bungkusan
    int cek = 0;// wadah untuk pengecekan
    int indeks = 0;// wadah untuk indek dan untuk mengetahui jumlah yang akan di tukar
    while(cek == 0){// kondisi jika cek sama dengan nol maka perulangan akan di jalankan
        char nama[100];// wadah untuk nama sementara dan sebagai pengecekan apakah ini pertukaranya sudah selesai atau belum
        scanf("%s",nama);// masuakna untuk string yang pertama
        if(strcmp(nama,"Selesai") == 0){// jika kalimat Selesai maka kondisi terpenuhi dan pelurangan berhenti
            cek = 1;// untuk memberhentikan perulangan
        }else{
            strcpy(pindah[indeks].namasebelum,nama);// untuk memenidahkan string ke dalam bungkusan
            scanf("%s",pindah[indeks].namasesudah);// masukan dari user untuk kalimat ke dua
            indeks++;// untuk mengubah baris 
        }
    }
    int terbesar[kolom];// wadah untuk menampung berapa string terbanyak 
    mencari_terbesar(kolom,baris,mahasiswa,terbesar);// untuk mencari berapa string terpanjang di setiap kolom
    printf("Posisi awal :\n");
    tampilan(kolom,baris,mahasiswa,terbesar);// untuk menampilkan urutan tempat duduk

    for(int k = 0;k < indeks;k++){// pengulangan sesuai indek atau baknyaknya pertukaran
        for(int i = 0;i < baris;i++){// pengulangan untuk baris
            for(int j = 0;j < kolom;j++){// pengulangan untuk kolom
                if(strcmp(mahasiswa[i][j].nama,pindah[k].namasebelum) == 0){// untuk mencari koordinat nama pertama yang di cari
                    pemindahan(0,k,j,i,kolom,baris,pindah,mahasiswa);// untuk menyalin koordinat atau di mana nama pertama berada
                }
                if(strcmp(mahasiswa[i][j].nama,pindah[k].namasesudah) == 0){// untuk mencari koordinat nama kedua yang di cari
                    pemindahan(1,k,j,i,kolom,baris,pindah,mahasiswa);// untuk menyalin koordinat atau di mana nama kedua berada
                }
            }
        }
        int nilai1;//wadah untuk nilai pertama
        int nilai2;// wadah untk nilai kedua
        mencari_ukuran(0,pindah,k,&nilai1);// untuk mencari ukuran toga
        mencari_ukuran(1,pindah,k,&nilai2);// untuk mencari ukuran toga

        if((pindah[k].indekbaris[0] > pindah[k].indekbaris[1]) && (nilai1 < nilai2)){// pengecekan untuk baris dan nilai dan jiaka baris pertama itu harsu lebih besar dibanding baris ke dua dan untuk nilainya berlawanan
            pertukaran(k,kolom,baris,pindah,mahasiswa);// memindahkan nama dan ukuran toga
        }else if((pindah[k].indekbaris[1] > pindah[k].indekbaris[0]) && (nilai2 < nilai1)){// pengecekan untuk baris dan nilai dan jiaka baris pertama itu harsu lebih besar dibanding baris ke dua dan untuk nilainya berlawanan
            pertukaran(k,kolom,baris,pindah,mahasiswa);// memindahkan nama dan ukuran toga
        }
    }
    mencari_terbesar(kolom,baris,mahasiswa,terbesar);// untuk mencari string terpanjang
    printf("\nPosisi akhir :\n");
    tampilan(kolom,baris,mahasiswa,terbesar);// untuk menampilakan tempat duduk
    return 0;
}