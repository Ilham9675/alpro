/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal
TP6 dalam mata kuliah algoritma dan pemlograman 2
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
#include "header.h"

void masukan(int jumlah, ps asrama[jumlah], char cip)
{
    for (int i = 0; i < jumlah; i++)
    {
        scanf("%s %d %s", &asrama[i].nama, &asrama[i].magicpower, &asrama[i].nama_sihir);
        asrama[i].code = cip;
    }
}
void insert_sort(int jumlah, ps asrama[jumlah], char tipe[100])
{
    int cek;
    int temp2;
    char temp1[100], temp4;
    char temp3[100];

    for (int i = 1; i < jumlah; i++)
    { // pengulangan dengan sebanyak jumlah
        strcpy(temp1, asrama[i].nama);
        temp2 = asrama[i].magicpower;
        strcpy(temp3, asrama[i].nama_sihir);
        temp4 = asrama[i].code;
        int j = i - 1; // j adalah i di min satu
        if (strcmp("Power", tipe) == 0)
        { // pengecekan jika kode indek ke sati itu N maka akan masuk ke if jika tidak masuk ke else
            while ((j >= 0) && (temp2 >= asrama[j].magicpower))
            { // unutk mencari nilai di mana yang tepat untuk tem juka pengulangan masih berlanjut maka nilai belum menemukan posisinya
                if (temp2 == asrama[j].magicpower)
                {
                    if (strcmp(temp3, asrama[j].nama_sihir) < 0)
                    {
                        strcpy(asrama[j + 1].nama, asrama[j].nama);      // memindahkan nama indek j  ke nama indek j + 1
                        asrama[j + 1].magicpower = asrama[j].magicpower; // memindahkan nilai umur j ke umur j + 1
                        strcpy(asrama[j + 1].nama_sihir, asrama[j].nama_sihir);
                        asrama[j + 1].code = asrama[j].code; // memindahkan nilai umur j ke umur j + 1
                    }
                }
                else
                {
                    strcpy(asrama[j + 1].nama, asrama[j].nama);      // memindahkan nama indek j  ke nama indek j + 1
                    asrama[j + 1].magicpower = asrama[j].magicpower; // memindahkan nilai umur j ke umur j + 1
                    strcpy(asrama[j + 1].nama_sihir, asrama[j].nama_sihir);
                    asrama[j + 1].code = asrama[j].code; // memindahkan nilai umur j ke umur j + 1
                }

                j--;
            }
            
        }
        else
        {
            while ((j >= 0) && (strcmp(temp3, asrama[j].nama_sihir) <= 0))
            { // unutk mencari nilai di mana yang tepat untuk tem juka pengulangan masih berlanjut maka nilai belum menemukan posisinya
                if (strcmp(temp3, asrama[j].nama_sihir) == 0)
                {
                    if (temp2 == asrama[j].magicpower)
                    {
                        strcpy(asrama[j + 1].nama, asrama[j].nama);      // memindahkan nama indek j  ke nama indek j + 1
                        asrama[j + 1].magicpower = asrama[j].magicpower; // memindahkan nilai umur j ke umur j + 1
                        strcpy(asrama[j + 1].nama_sihir, asrama[j].nama_sihir);
                        asrama[j + 1].code = asrama[j].code; // memindahkan nilai umur j ke umur j + 1
                    }
                }
                else
                {
                    strcpy(asrama[j + 1].nama, asrama[j].nama);      // memindahkan nama indek j  ke nama indek j + 1
                    asrama[j + 1].magicpower = asrama[j].magicpower; // memindahkan nilai umur j ke umur j + 1
                    strcpy(asrama[j + 1].nama_sihir, asrama[j].nama_sihir);
                    asrama[j + 1].code = asrama[j].code; // memindahkan nilai umur j ke umur j + 1
                }

                j--;
            }
        }
        strcpy(asrama[j + 1].nama, temp1); // memindahkan nama indek j  ke nama indek j + 1
        asrama[j + 1].magicpower = temp2;  // memindahkan nilai umur j ke umur j + 1
        strcpy(asrama[j + 1].nama_sihir, temp3);
        asrama[j + 1].code = temp4; // memindahkan nilai umur j ke umur j + 1
    }
}

void merge(int n1, ps asrama1[n1], int n2, ps asrama2[n2], int jumhasil, ps hasil[jumhasil], char tipe[100])
{
    int i1 = 0, i2 = 0, i10 = 0;
    if (strcmp("Power", tipe) == 0)// mencari sistem tipe yang di urutkan
    {
        while ((i1 < n1) && (i2 < n2))// mengulangi jumlah pengulangan dan batasannya jumlah asrama1 dan jumlah asrama2 
        {
            if (asrama1[i1].magicpower <= asrama2[i2].magicpower)// jika tabel2 magicpower nilainya lebih besar maka akan masuk ke kondisi
            {
                //pemasukan tabel1 ke tabel total
                strcpy(hasil[i10].nama, asrama2[i2].nama);
                hasil[i10].magicpower = asrama2[i2].magicpower;
                strcpy(hasil[i10].nama_sihir, asrama2[i2].nama_sihir);
                hasil[i10].code = asrama2[i2].code;
                i10++;
                i2++;
            }
            else// dan jika tabel1 magicpower nilainya lebih besar maka akan masuk ke kondisi
            {
                //pemasukan tabel1 ke tabel total
                strcpy(hasil[i10].nama, asrama1[i1].nama);
                hasil[i10].magicpower = asrama1[i1].magicpower;
                strcpy(hasil[i10].nama_sihir, asrama1[i1].nama_sihir);
                hasil[i10].code = asrama1[i1].code;
                i10++;
                i1++;
            }
        }
    }
    else
    {

        while ((i1 < n1) && (i2 < n2))// mengulangi jumlah pengulangan dan batasannya jumlah asrama1 dan jumlah asrama2 
        {
            if (strcmp(asrama1[i1].nama_sihir, asrama2[i2].nama_sihir) > 0)// jika tabel2 nama sihir nilainya lebih besar maka akan masuk ke kondisi
            {
                //pemasukan tabel1 ke tabel total
                strcpy(hasil[i10].nama, asrama2[i2].nama);
                hasil[i10].magicpower = asrama2[i2].magicpower;
                strcpy(hasil[i10].nama_sihir, asrama2[i2].nama_sihir);
                hasil[i10].code = asrama2[i2].code;
                i10++;
                i2++;
            }
            else// dan jika tabel1 nama sihir nilainya lebih besar maka akan masuk ke kondisi
            {
                //pemasukan tabel1 ke tabel total
                strcpy(hasil[i10].nama, asrama1[i1].nama);
                hasil[i10].magicpower = asrama1[i1].magicpower;
                strcpy(hasil[i10].nama_sihir, asrama1[i1].nama_sihir);
                hasil[i10].code = asrama1[i1].code;
                i10++;
                i1++;
            }
        }
    }
    while (i1 < n1)// menulangi jumlah pengulangan sampai semuanya sampai sema data tabel1 ke tabel gabungan
    {
        //pemasukan tabel1 ke tabel total
        strcpy(hasil[i10].nama, asrama1[i1].nama);
        hasil[i10].magicpower = asrama1[i1].magicpower;
        strcpy(hasil[i10].nama_sihir, asrama1[i1].nama_sihir);
        hasil[i10].code = asrama1[i1].code;
        i10++;
        i1++;
    }
    while (i2 < n2)// menulangi jumlah pengulangan sampai semuanya sampai sema data tabel2 ke tabel gabungan
    {
        //pemasukan tabel1 ke tabel total
        strcpy(hasil[i10].nama, asrama2[i2].nama);
        hasil[i10].magicpower = asrama2[i2].magicpower;
        strcpy(hasil[i10].nama_sihir, asrama2[i2].nama_sihir);
        hasil[i10].code = asrama2[i2].code;
        i10++;
        i2++;
    }
}