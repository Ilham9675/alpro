/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal
TP5 dalam mata kuliah algoritma dan pemlograman 2
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
#include "header.h"

int main()
{
    int jumlah = 0;                                   // wadah untuk jumlah masukan data
    char kode1;                                       // wadah untuk kode Bubble sort atau quicksort
    char kode2[10];                                   // wadah untuk kode yang menyatakan urutanya itu dari yang terbesar atau dari yang terkecil
    int batas_waktu;                                  // batasan waktu untuk barapa mantra yang bisa di perajari
    int cek;                                          // untuk pengecekan nilai
    scanf("%d", &jumlah);                             // masukan data dari user
    data peserta[jumlah];                             // inisialisasi bungkusan data
    masukan_data(jumlah, peserta);                    // masukan data dari user
    scanf(" %c %s %d", &kode1, &kode2, &batas_waktu); // pemasukan kode 1 , kode 2 dan batasan waktu

    if (kode1 == 'b')
    {                                        // jika kode 1 bernilai b bearti itu Bubble sort dan akan masuk ke if
        Bubble_sort(jumlah, peserta, kode2); // mengurutkan secara Bubble sort
    }
    else
    { // jika bukan akan masuk ke dalam else
        do
        {
            cek = 0;
            quicksort(jumlah, peserta, 0, jumlah - 1, kode2); // mengurutkan secara quicksort
            /*
                program di bawah untuk pengecekan apakah nilai yang sudah di urutkan secara quicksort itu bernilai benar atau tidak
                kalau tidak akan masuk ke dalam quicksort lagi untuk di sorting hal ini dilakukan dikarenakan ada beberapa kondisi yang quicksort
                ini akan tidak meng sorting secara sempurna jadi diharuskan program tambahan
            */
            for (int i = 0; i < jumlah - 1; i++)
            { // pengulangan sebanyak jumlah dan di min satu karena pengecekannya akan akan di cek dua nilai secara bersamaan
                if (strcmp("Besar", kode2) == 0)
                { // jika kode 2 itu bernilai "Besar" maka akan masuk dan akan di cek secara yang terbesar
                    if (strlen(peserta[i].nama) < strlen(peserta[i + 1].nama))
                    { // pengecekan jika jumlah nama indek ke i itu lebih kecil daripada jumlah nama indek ke i + 1 maka akan menambahkan satu dan itu berarti itu ada yang belum tepat secara penempatan
                        cek = 1;
                    }
                    if (strlen(peserta[i].nama) == strlen(peserta[i + 1].nama))
                    { // pengecekan jika jumlah nama indek ke i itu sama dengan jumlah nama indek ke i + 1 maka akan masuk ke dalam if dan akan di lakukan pengecekan sesuai dengan syarat
                        if (peserta[i].mp < peserta[i + 1].mp)
                        { // pengecekan jika nilai magic power indek ke i itu lebih kecil dari pada nilai magic power indek ke i + 1 maka akan menambahkan satu dan itu berarti itu ada yang belum tepat secara penempatan
                            cek = 1;
                        }
                    }
                }
                else
                { // jika bukan akan masuk ke else dan akan mengurutkan dari yang terkecil ke yang terbesar
                    if (strlen(peserta[i].nama) > strlen(peserta[i + 1].nama))
                    { // pengecekan jika jumlah nama indek ke i itu lebih besar daripada jumlah nama indek ke i + 1 maka akan menambahkan satu dan itu berarti itu ada yang belum tepat secara penempatan
                        cek = 1;
                    }
                    if (strlen(peserta[i].nama) == strlen(peserta[i + 1].nama))
                    { // pengecekan jika jumlah nama indek ke i itu sama dengan jumlah nama indek ke i + 1 maka akan masuk ke dalam if dan akan di lakukan pengecekan sesuai dengan syarat
                        if (peserta[i].mp > peserta[i + 1].mp)
                        { // pengecekan jika nilai magic power indek ke i itu lebih besar dari pada nilai magic power indek ke i + 1 maka akan menambahkan satu dan itu berarti itu ada yang belum tepat secara penempatan
                            cek = 1;
                        }
                    }
                }
            }
            /*
                catatan menambahnkan else saya dikarenakan hanya akan ada dua kemungkinan yang muncul dan itu sudah di ketahui jika masih belum pasti
                bisa mengguanakan if else
            */
        } while (cek == 1);
    }

    int terbanyak = 11; // wadah untuk mencari string terpanjang dan di default 11 karena ini akan di biat untuk tabel dan minimum panjangnya harsu tidak kurang dari string yangada di tabel header
    for (int i = 0; i < jumlah; i++)
    { // pengulangan sebanyak jamlah untuk mengetahui jumlah terpanjang
        if (terbanyak < (strlen(peserta[i].nama) + 1))
        {                                              // mencari juk=mlah terpanjang jika terbanyak lebih kecil daripada panjang nama di tambah satu maka akan masuk ke dalam if
            terbanyak = (strlen(peserta[i].nama) + 1); // pengggantian nilai terpanjang
        }
    }
    tabel_garis(jumlah, terbanyak);                            // untuk membuat garis tabel horizontal
    tabel_header(jumlah, terbanyak);                           // untuk membuat nama apa saja yang ada di header tabel
    tabel_garis(jumlah, terbanyak);                            // untuk membuat garis tabel horizontal
    cek = tabel_data(jumlah, peserta, terbanyak, batas_waktu); // untuk menampilkan data menggunakan tabel
    tabel_garis(jumlah, terbanyak);                            // untuk membuat garis tabel horizontal dan sebagai penutup tabel
    if (cek == 0)
    { // di cek berapa banyak sihir yang dapat di pelajari jiak cek 0 maka akan di menampilkan ka yang di bawah
        printf("Anda tidak bisa menguasai apa apa, karena waktunya tidak cukup!\n");
    }
    else
    { // jika cek lebih besar dari pada 0 maka akan di tampilakan kata di bawah ini dan akan menampilkan berapa mantra yang bisa di pelajari
        printf("Anda bisa menguasai %d sihir dengan waktu yang diberikan\n", cek);
    }
    return 0;
}