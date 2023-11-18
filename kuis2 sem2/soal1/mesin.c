/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal kuis 2 dalam mata kuliah algoritma dan pemlograman 2
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
#include "header.h"

void binarysearch1(int n, pegawai pg[], long long dicari,char urutan[20]){
    int found = 0;// wadah untuk found ada indikator pencarian
    int i = 0,j = n -1 ,mid;// i untuk baras bawah j untuk batas akhir dan mid untuk indek tengah
    while(i <= j && found == 0){// pengulangan  dengan indikator pemberhentian jika i lebih besar dan found sama dengan satu
        mid = (i + j) / 2;// mencari mid dengan cara batas bawah dan batas akhir di tambah dan di bagi dua
        if(strcmp(urutan,"gaji") == 0){// jika yang di cari itu erdasarkan gaji maka akan masuk ke dalam pencarian gaji
            if(pg[mid].gajip == dicari){// jika gaji pokok indek i sama dengan yang dicari maka akan masuk ke dalam if dan akan memberhentikan pelurangan dan akan menampilkan data
                found = 1;// indikator pengulangan 
                printf("%s %s %s %lld %lld\n",pg[mid].nomer,pg[mid].nama,pg[mid].jabatan,pg[mid].gajip,pg[mid].tunjangan);// menampilkan data
            }else{// jika bukan yang di cari maka akan masuk ke dalam elase dan ada 2 pilihan
                if(pg[mid].gajip > dicari){// jika yang dicari nya lebih kecil maka akan j nya yang akan di ganti dengan mid - 1
                    j = mid - 1;
                }else{// dan sebaliknya jika  rasionya lebih besar maka i nya yang aka di ganti dengan mid + 1
                    i = mid + 1;
                }
            }

        }else{// jika tidak maka kan masuk ke pencarian pendapatan
            if((pg[mid].gajip + pg[mid].tunjangan) == dicari){// jika rasio indek i sama dengan dicari maka akan masuk ke dalam if dan akan memberhentikan pelurangan dan akan menampilkan data
                printf("%s %s %s %lld %lld\n",pg[mid].nomer,pg[mid].nama,pg[mid].jabatan,pg[mid].gajip,pg[mid].tunjangan);// menampilkan data
                found = 1;// indikator pengulangan 
            }else{// jika bukan dicari maka akan masuk ke dalam elase dan ada 2 pilihan
                if((pg[mid].gajip + pg[mid].tunjangan) < dicari){// jika yang dicari nya lebih kecil maka akan j nya yang akan di ganti dengan mid - 1
                    j = mid - 1;
                }else{// dan sebaliknya jika  rasionya lebih besar maka i nya yang aka di ganti dengan mid + 1
                    i = mid + 1;
                }
            }
        }
    }
    if(found == 0){// jika found itu sampai akhir 0 dan itu belarti data tidak di temukan maka tampikan "tidak ditemukan"
        printf("tidak ditemukan\n");
    }
}

void sorting(int a,pegawai pg[],char urutan[20]){
    int test = 0;// indikator untuk pegecekan apakah sorting sudah terurut aau belum
    long long temp1;// wadah sementara utnuk tpye data long long
    char temp3[100];// wadah semnetara untuk string
    do{
        test = 0;// inisiaisasi indekator di awal pengulangan
        for (int i = 0; i < a - 1; i++)
        {
            // untuk mencari nilai yang tidak sesuai tempatnya
            if(strcmp(urutan,"gaji") == 0){// jika yang di cari itu erdasarkan gaji maka akan masuk ke dalam pencarian gaji
                if(pg[i].gajip > pg[i + 1].gajip){
                    //memindahkan nilai dari satu tempat ke tempat lain menggunakan temp
                    strcpy(temp3,pg[i].nomer);
                    strcpy(pg[i].nomer,pg[i + 1].nomer);
                    strcpy(pg[i + 1].nomer,temp3);

                    strcpy(temp3,pg[i].nama);
                    strcpy(pg[i].nama,pg[i + 1].nama);
                    strcpy(pg[i + 1].nama,temp3);

                    strcpy(temp3,pg[i].jabatan);
                    strcpy(pg[i].jabatan,pg[i + 1].jabatan);
                    strcpy(pg[i + 1].jabatan,temp3);
                    

                    temp1 = pg[i].gajip;
                    pg[i].gajip = pg[i+1].gajip;
                    pg[i+1].gajip = temp1;

                    temp1 = pg[i].tunjangan;
                    pg[i].tunjangan = pg[i+1].tunjangan;
                    pg[i+1].tunjangan = temp1;
                    test = 1;// indekator akan 1 dikarenakan masuk data berum ter urut
                }
            }else{// jika tidak maka kan masuk ke pencarian pendapatan
                if((pg[i].gajip + pg[i].tunjangan) < (pg[i + 1].gajip + pg[i + 1].tunjangan)){
                    //memindahkan nilai dari satu tempat ke tempat lain menggunakan tem
                    strcpy(temp3,pg[i].nomer);
                    strcpy(pg[i].nomer,pg[i + 1].nomer);
                    strcpy(pg[i + 1].nomer,temp3);

                    strcpy(temp3,pg[i].nama);
                    strcpy(pg[i].nama,pg[i + 1].nama);
                    strcpy(pg[i + 1].nama,temp3);

                    strcpy(temp3,pg[i].jabatan);
                    strcpy(pg[i].jabatan,pg[i + 1].jabatan);
                    strcpy(pg[i + 1].jabatan,temp3);
                    

                    temp1 = pg[i].gajip;
                    pg[i].gajip = pg[i+1].gajip;
                    pg[i+1].gajip = temp1;

                    temp1 = pg[i].tunjangan;
                    pg[i].tunjangan = pg[i+1].tunjangan;
                    pg[i+1].tunjangan = temp1;
                    test = 1;// indekator akan 1 dikarenakan masuk data berum ter urut
                }
            }
        }
        
    }while(test == 1);// jika sudah sesuai tempatnya maka akan bethenti pengulanyanya yaitu test sama dengan 0 
}