/*
Saya ilham akbar[2201017] mengerjakan soal
UTS dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include "header.h"
void masukan(int jumlah,batangan_emas bahan[jumlah]){
    // memasukan jumlah data yang dingiinka  oleh user ke bunggkusan
    for (int i = 0; i < jumlah; i++){
        scanf("%s %d %d %d %d",bahan[i].nama,&bahan[i].emas,&bahan[i].logam,&bahan[i].katalis,&bahan[i].lainnya);// memasukan data
        bahan[i].emas_murni = (bahan[i].emas) - (bahan[i].logam + bahan[i].katalis + bahan[i].lainnya);// mentari nilai emas murni
        
    }
}
void insert(int jumlah,batangan_emas bahan[jumlah]){
    // untuk wadah sementara
    char nama_sementara[100];
    int sem1,sem2,sem3,sem4,sem5;
    for (int i = 1; i < jumlah; i++){
            // memindahkan data ke wadah sementara
            strcpy(nama_sementara,bahan[i].nama);
            sem1 = bahan[i].emas;
            sem2 = bahan[i].logam;
            sem3 = bahan[i].katalis;
            sem4 = bahan[i].lainnya;
            sem5 = bahan[i].emas_murni;
            int j = i - 1;
            // mencari posisi nilai berada jika posisi di temukan maka whinya akan berhenti
                while ((j >= 0) && (sem5 > bahan[j].emas_murni)){
                    bahan[j+1].emas = bahan[j].emas;
                    bahan[j+1].katalis = bahan[j].katalis;
                    bahan[j+1].logam = bahan[j].logam;
                    bahan[j+1].lainnya = bahan[j].lainnya;
                    bahan[j+1].emas_murni = bahan[j].emas_murni;
                    strcpy(bahan[j+1].nama,bahan[j].nama);
                    j--;
                }
                // memindahkan data yang di dalam wadah ke posisi yang sudah terurut
                strcpy(bahan[j + 1].nama,nama_sementara);
             bahan[j + 1].emas = sem1;
            bahan[j + 1].logam = sem2;
            bahan[j + 1].katalis = sem3;
            bahan[j + 1].lainnya = sem4;
            bahan[j + 1].emas_murni= sem5;
        }
}
void quick(int jumlah,batangan_emas bahan[jumlah],int l, int r){
    int i = l, j = r;
    // wadah sementara
     char nama_sementara[100];
    int sem;
    // masukan nilai ke pivot uttuk di bandingkan
    int pivot = bahan[(l + r) / 2].emas_murni;
    do{
        // mencari nilai yang tidak sesuai untuk di pindahkan 
        while ((bahan[i].emas_murni > pivot) && (i <= j)) 
        {
            i++;
        }
        while ((bahan[j].emas_murni < pivot) && (i <= j))
        {
            j--;
        }
        if (i < j)
        {
            // memindahkan nilai dari satu posisi ke posisi lain
            strcpy(nama_sementara,bahan[i].nama);
            strcpy(bahan[i].nama,bahan[j].nama);
            strcpy(bahan[j].nama,nama_sementara);
            
            sem = bahan[i].emas_murni;
            bahan[i].emas_murni = bahan[j].emas_murni;
            bahan[j].emas_murni = sem;
            sem = bahan[i].emas;
            bahan[i].emas = bahan[j].emas;
            bahan[j].emas = sem;
            sem = bahan[i].logam;
            bahan[i].logam = bahan[j].logam;
            bahan[j].logam = sem;
            sem = bahan[i].lainnya;
            bahan[i].lainnya = bahan[j].lainnya;
            bahan[j].lainnya = sem;
            sem = bahan[i].katalis;
            bahan[i].katalis = bahan[j].katalis;
            bahan[j].katalis = sem;
        }
    }while(i < j);
    // melakukan pengecekan dan pengulangi posisi itu sampai semua terurut
    if ((l < j) && (j < r))
    { 
        quick(jumlah, bahan, l, j);
    }
    if ((i < r) && (i > l))
    {  
        quick(jumlah, bahan, i, r );
    }
}
void selection(int jumlah,batangan_emas bahan[jumlah]){
    // wadah sementara
    char nama_sementara[100];
    int sem;
    for (int i = 0; i < jumlah-1; i++){
            int k = i;
            // untuk mencari koordinat dari posisi yang benar atau posisi yang terurut
            for (int j = i+1; j < jumlah; j++){
                    if (bahan[k].emas_murni < bahan[j].emas_murni)
                    {
                        k = j;
                    }
                
            }

            // memindahkan data
            strcpy(nama_sementara,bahan[i].nama);
            strcpy(bahan[i].nama,bahan[k].nama);
            strcpy(bahan[k].nama,nama_sementara);
            
            sem = bahan[i].emas;
            bahan[i].emas = bahan[k].emas;
            bahan[k].emas = sem;
            sem = bahan[i].logam;
            bahan[i].logam = bahan[k].logam;
            bahan[k].logam = sem;
            sem = bahan[i].lainnya;
            bahan[i].lainnya = bahan[k].lainnya;
            bahan[k].lainnya = sem;
            sem = bahan[i].katalis;
            bahan[i].katalis = bahan[k].katalis;
            bahan[k].katalis = sem;
            sem = bahan[i].emas_murni;
            bahan[i].emas_murni = bahan[k].emas_murni;
            bahan[k].emas_murni = sem;
        }
}
void bubble(int jumlah,batangan_emas bahan[jumlah]){
    // wadah sementara
    char nama_sementara[100];
    int sem;
    int swap = 0;
    do
    {
        swap = 0;
        for (int i = 0; i < jumlah - 1; i++)
        {
            // mencari nilai yang akan mana yang salah dan nlai mana yang benar
            if (bahan[i].emas_murni < bahan[i+1].emas_murni)
                { 
                    // memindahkan nilai
                    strcpy(nama_sementara,bahan[i].nama);
                    strcpy(bahan[i].nama,bahan[i + 1].nama);
                    strcpy(bahan[i + 1].nama,nama_sementara);
                    
                    sem = bahan[i].emas;
                    bahan[i].emas = bahan[i + 1].emas;
                    bahan[i + 1].emas = sem;
                    sem = bahan[i].logam;
                    bahan[i].logam = bahan[i + 1].logam;
                    bahan[i + 1].logam = sem;
                    sem = bahan[i].katalis;
                    bahan[i].katalis = bahan[i + 1].katalis;
                    bahan[i + 1].katalis = sem;

                    sem = bahan[i].lainnya;
                    bahan[i].lainnya = bahan[i + 1].lainnya;
                    bahan[i + 1].lainnya = sem;

                    sem = bahan[i].emas_murni;
                    bahan[i].emas_murni = bahan[i + 1].emas_murni;
                    bahan[i + 1].emas_murni = sem;

                    swap = 1; 
                }
        }
    } while (swap == 1);
    
}

void merge(int n1,batangan_emas bahan1[n1],int n2,batangan_emas bahan2[n2],int jumhasil,batangan_emas hasil[jumhasil])
{
    int i1 = 0, i2 = 0,i10 = 0; 
    // mengecek jika nila itu lebih besar dari pada jumlah jika benar maka akan terus mengulang sampai salah satu habis
            while ((i1 < n1) && (i2 < n2))
            {   // mengecek nilai siapa yang lebih besar
                if (bahan1[i1].emas_murni < bahan2[i2].emas_murni){
                    strcpy(hasil[i10].nama,bahan2[i2].nama);
                    hasil[i10].emas = bahan2[i2].emas;
                    hasil[i10].logam = bahan2[i2].logam;
                    hasil[i10].katalis = bahan2[i2].katalis;
                    hasil[i10].lainnya = bahan2[i2].lainnya;
                    hasil[i10].emas_murni = bahan2[i2].emas_murni;

                    
                    i10++;
                    i2++;
                }
                else {
                    strcpy(hasil[i10].nama,bahan1[i1].nama);
                    hasil[i10].katalis = bahan1[i1].katalis;
                    hasil[i10].logam = bahan1[i1].logam;
                    hasil[i10].emas = bahan1[i1].emas;
                    hasil[i10].lainnya = bahan1[i1].lainnya;
                    hasil[i10].emas_murni = bahan1[i1].emas_murni;
                    
                    i10++;
                    i1++;
                }
            }
            // memindahkan nilai yang tersisa dari tabel satu atau tabel dua
        while(i1 < n1)
        {
            strcpy(hasil[i10].nama,bahan1[i1].nama);
                    hasil[i10].katalis = bahan1[i1].katalis;
                    hasil[i10].logam = bahan1[i1].logam;
                    hasil[i10].emas = bahan1[i1].emas;
                    hasil[i10].lainnya = bahan1[i1].lainnya;
                    hasil[i10].emas_murni = bahan1[i1].emas_murni;
                    
            i10++;
            i1++;
        }
        while(i2 < n2)
        {
            strcpy(hasil[i10].nama,bahan2[i2].nama);
                    hasil[i10].emas = bahan2[i2].emas;
                    hasil[i10].logam = bahan2[i2].logam;
                    hasil[i10].katalis = bahan2[i2].katalis;
                    hasil[i10].lainnya = bahan2[i2].lainnya;
                    hasil[i10].emas_murni = bahan2[i2].emas_murni;


            i10++;
            i2++;
        }
    
}