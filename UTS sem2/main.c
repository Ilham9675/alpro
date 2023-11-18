/*
Saya ilham akbar[2201017] mengerjakan soal
UTS dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include "header.h"

int main(){

    char sorting[50];// wadah jenis soerting
    scanf("%s", sorting);// masukan jenis soerting
    // masukan jumlah data pertama dari user
    int jum1;
    scanf("%d", &jum1);
    batangan_emas bahan1[jum1];
    masukan(jum1,bahan1);
    // masukan kata kedua dari user
    int jum2;
    scanf("%d", &jum2);
    batangan_emas bahan2[jum2];
    masukan(jum2,bahan2);
    // masukan data ke tiga dari user
    int jum3;
    scanf("%d", &jum3);
    batangan_emas bahan3[jum3];
    masukan(jum3,bahan3);
    // metode sorting insert
    if (strcmp("insert", sorting) == 0)
    {
        insert(jum1, bahan1);
        insert(jum2, bahan2);
        insert(jum3, bahan3);
    }// metode sorting selection
    else if (strcmp("select", sorting) == 0)
    {
        selection(jum1, bahan1);
        selection(jum2, bahan2);
        selection(jum3, bahan3);
    }// metode sorting bubble
    else if (strcmp("bubble", sorting) == 0)
    {
        bubble(jum1, bahan1);
        bubble(jum2, bahan2);
        bubble(jum3, bahan3);
    }
    else// metode sorting quicksort
    {
        
        int cek = 0;
        /*
            di metode sorting quicksort ini ada beberapa tambahan di karenakan 
            ada beberapa data yang tidak bisa ti urutkan secra maksimal dan program tambahan tersebut berupa pengecekan data
        */
        do
        {
            quick(jum1, bahan1, 0, jum1 - 1);
            cek = 0;
            int i = 0;
            while((i < jum1 - 1)&&(cek == 0))
            {
                // mencari nilai yang akan mana yang salah dan nlai mana yang benar
                if (bahan1[i].emas_murni < bahan1[i+1].emas_murni)
                    { 
                       // pengecekan data apakah sudah terurut atau belum

                        cek = 1; 
                    }
                    i++;
            }
        } while (cek == 1);
        do
        {
            quick(jum2, bahan2, 0, jum2 - 1);
            cek = 0;
            int i = 0;
            while((i < jum2 - 1)&&(cek == 0))
            {
                // mencari nilai yang akan mana yang salah dan nlai mana yang benar
                if (bahan2[i].emas_murni < bahan2[i+1].emas_murni)
                    { 
                        // pengecekan data apakah sudah terurut atau belum

                        cek = 1; 
                    }
                    i++;
            }
        } while (cek == 1);
        
        do
        {
            quick(jum3, bahan3, 0, jum3 - 1);
            cek = 0;
            int i = 0;
            while((i < jum3 - 1)&&(cek == 0))
            {
                // mencari nilai yang akan mana yang salah dan nlai mana yang benar
                if (bahan3[i].emas_murni < bahan3[i+1].emas_murni)
                    { 
                        // pengecekan data apakah sudah terurut atau belum

                        cek = 1; 
                    }
                    i++;
            }
        } while (cek == 1);
        
        
    }

    batangan_emas hasilsem[jum1 + jum2];// wadah hasil sementara 
    batangan_emas hasilakhir[jum1 + jum2 + jum3];// wadah hasil akhir
    merge(jum1, bahan1, jum2, bahan2, jum1 + jum2, hasilsem);// masuk ke merse dan digabungkan antara tabel satu dengan tabel dua
    merge(jum3, bahan3, jum1 + jum2, hasilsem, jum1 + jum2 + jum3, hasilakhir);// masuk ke merse dan digabungkan antara tabel tiga dengan tabel gabungan tabel satu dan dua
    // deklarasi total untuk keseluruhan setiap elemen 
    int total1 = 0;
    int total2 = 0;
    int total3 = 0;
    int total4 = 0;
    printf("emas batangan:\n");
    // menampilkan data
    for(int i = 0;i < jum1 + jum2 + jum3;i++){
        printf("%s ", hasilakhir[i].nama);// menampilkan nama batang emas
        // menampilkan data materian dari yang terbesar terkecil tengah tengah dan menampilkan hasil emah murninya 
        if((hasilakhir[i].logam >= hasilakhir[i].katalis) && (hasilakhir[i].logam >= hasilakhir[i].lainnya)){
            if(hasilakhir[i].katalis >= hasilakhir[i].lainnya){
                printf("campuran-%d lainnya-%d katalis-%d emas=%d",hasilakhir[i].logam, hasilakhir[i].lainnya, hasilakhir[i].katalis, hasilakhir[i].emas_murni);
                // jika emas murni nya min maka akan di blavklistd
                if(hasilakhir[i].emas_murni < 0){
                    printf(" -blacklist\n");
                }else{
                    printf("\n");
                }
            }else{
                printf("campuran-%d katalis-%d lainnya-%d emas=%d",hasilakhir[i].logam, hasilakhir[i].katalis, hasilakhir[i].lainnya, hasilakhir[i].emas_murni);
                if(hasilakhir[i].emas_murni < 0){
                    printf(" -blacklist\n");
                }else{
                    printf("\n");
                }
            }
            
        }else if((hasilakhir[i].katalis >= hasilakhir[i].logam) && (hasilakhir[i].katalis >= hasilakhir[i].lainnya)){
            
            if(hasilakhir[i].logam >= hasilakhir[i].lainnya){
                printf("katalis-%d lainnya-%d campuran-%d emas=%d",hasilakhir[i].katalis, hasilakhir[i].lainnya, hasilakhir[i].logam, hasilakhir[i].emas_murni);
                if(hasilakhir[i].emas_murni < 0){
                    printf(" -blacklist\n");
                }else{
                    printf("\n");
                }
            }else{
                printf("katalis-%d campuran-%d lainnya-%d emas=%d",hasilakhir[i].katalis, hasilakhir[i].logam, hasilakhir[i].lainnya, hasilakhir[i].emas_murni);
                if(hasilakhir[i].emas_murni < 0){
                    printf(" -blacklist\n");
                }else{
                    printf("\n");
                }
            }
        }else{
            if(hasilakhir[i].katalis >= hasilakhir[i].logam){
                printf("lainnya-%d campuran-%d katalis-%d emas=%d",hasilakhir[i].lainnya, hasilakhir[i].logam, hasilakhir[i].katalis, hasilakhir[i].emas_murni);
                if(hasilakhir[i].emas_murni < 0){
                    printf(" -blacklist\n");
                }else{
                    printf("\n");
                }
            }else{
                printf("lainnya-%d katalis-%d campuran-%d emas=%d",hasilakhir[i].lainnya, hasilakhir[i].katalis, hasilakhir[i].logam, hasilakhir[i].emas_murni);
                if(hasilakhir[i].emas_murni < 0){
                    printf(" -blacklist\n");
                }else{
                    printf("\n");
                }
            }
        }
        // emnambahnkan total ke seluruhan
        total1 += hasilakhir[i].emas_murni;
        total2 += hasilakhir[i].logam;
        total3 += hasilakhir[i].katalis;
        total4 += hasilakhir[i].lainnya;
    }
    // menampilkan jumlah total
    printf("jumlah berat total emas: %d\n",total1);
    printf("jumlah berat total campuran: %d\n",total2);
    printf("jumlah berat total katalis: %d\n",total3);
    printf("jumlah berat total lainnya: %d\n",total4);
    

    return 0;
}