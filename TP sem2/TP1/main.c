/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal
TP1 dalam mata kuliah algoritma dan pemlograman 2
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
#include "header.h"

int main()
{

    int baris; // wadah untuk baris
    int kolom; // wadah untuk kolom

    scanf("%d %d", &baris, &kolom); // meminta masukan dari user untuk baris dan kolom

    int terbanyak; // wadah untuk nilai terbesar
    if (baris > kolom)
    { // mencari nilai terbesar
        terbanyak = baris;
    }
    else
    {
        terbanyak = kolom;
    }
    int matriks[terbanyak][terbanyak]; // wadah untuk matriks
    int nilai_awal[baris][kolom];      // wadah untuk matrik pertama sebelum di ubah
    int baris_awal = baris;            // wadah untuk baris awal dan nilainya sama dengan baris
    int kolom_awal = kolom;            // wadah untuk kolom awal dan nilainya sama dengan kolom
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            scanf("%d", &matriks[i][j]);      // memasukan nilai matriks dari user
            nilai_awal[i][j] = matriks[i][j]; // pemasukan nilai matrik ke matrik_awal
        }
    }

    int kes = terbesar(baris, kolom, nilai_awal); // untuk mencari nilai pembanding untuk putaran matriks

    int matriks_sementara[terbanyak][terbanyak]; // untuk menyimpan nilai matriks sementara
    if (kes % 2 == 0)
    { // untuk mencari nilai genap atau ganjil
        for (int i = 0; i < kes % 4; i++)
        { // perputar sebanyak niali yang di modulo 4
            // untuk memnidakan nilai baris ke kolom dan kolom ke baris
            int wadah = baris;
            baris = kolom;
            kolom = wadah;
            for (int j = 0; j < baris; j++)
            {
                for (int k = 0; k < kolom; k++)
                {
                    matriks_sementara[j][k] = matriks[k][baris - (j + 1)]; // untuk merotasikan matriks ke kiri dan pindahkan ke matriks
                }
            }
            penyalin(baris, kolom, terbanyak, matriks, matriks_sementara); // untuk mengembalikan nilai ke matrik sembenarnya
        }
    }
    else
    {
        for (int i = 0; i < kes % 4; i++)
        { // perputar sebanyak niali yang di modulo 4
            // untuk memnidakan nilai baris ke kolom dan kolom ke baris
            int wadah = baris;
            baris = kolom;
            kolom = wadah;
            for (int j = 0; j < baris; j++)
            {
                for (int k = 0; k < kolom; k++)
                {
                    matriks_sementara[j][k] = matriks[kolom - (k + 1)][j]; // untuk merotasikan matriks ke kanan dan pindahkan ke matriks
                }
            }
            penyalin(baris, kolom, terbanyak, matriks, matriks_sementara); // untuk mengembalikan nilai ke matrik sembenarnya
        }
    }
    printf("Matriks awal :\n");
    tampilan_awal(baris_awal, kolom_awal, nilai_awal); // menampilkan nilai matriks awal
    if ((baris_awal == baris) && (kolom_awal == kolom))
    {                                                            // untuk membandingkan nilai baris awal sama baris akhir dan kolom awal dan kolom akhir
        int cek = pembanding(baris, kolom, matriks, nilai_awal); // untuk pengecekan apakah kedua array itu sama atau tidak
        if (cek == kolom * baris)
        {
            transpose(baris, kolom, terbanyak, matriks); // jika matriks ke satu dan kedua sama
        }
        else
        {
            refleksi(baris, kolom, terbanyak, matriks); // jika matriks ke satu dan kedua tidak sama
        }
    }
    else
    {
        refleksi(baris, kolom, terbanyak, matriks); // menampilkan reflesi matriks
    }
    return 0;
}