#include "header.h"

void insertion(int jumlah,char kata[jumlah][100]){
    for (int i = 1; i < jumlah - 1; i++){// pengulangan degan batasan jumlah 
        strcpy(kata[jumlah-1],kata[i]);// memindah kan data yang akan di bandingkan 
        int j = i - 1;// j sama dnegan indek i di min satu
        while (j >= 0 && strcmp(kata[jumlah-1],kata[j]) < 0){// untuk mencari sebuat posisi di dalam baris 
            strcpy(kata[j+1],kata[j]);// jika kata lebih besar dari pada kunci maka kata akan di pindahkan ke depan
            j--;
        }
        strcpy(kata[j+1],kata[jumlah-1]);// jika posisi sudah ketemu maka kunci akan di tempatkan di indek + 1
    }
}
void selection(int jumlah,char kata[jumlah][100]){
    for (int i = 0; i < jumlah-2; i++){// pengulangan degan batasan jumlah 
        int k = i;// wadah untuk indek mana yang akan di tukar
        for (int j = i+1; j < jumlah-1; j++){ // pengulangan degan batasan jumlah tapi di mulainya bukan dari 0 tapi dari indek i di tambah satu 
            if (strcmp(kata[k],kata[j]) < 0)//kondisi di mana  kata degan indeks k lebih besar dari pada kata indeks j maka masuk ke if jika tidak maka akan di lewat
            {
                k = j;// jan jika memenuhi syarat makan k akan di ubaj jadi indeks j
            }
        }
        strcpy(kata[jumlah-1],kata[i]);// memindahkan kata jumlah - 1 dengan kata ideks i
        strcpy(kata[i],kata[k]);// memindahkan kata indeks i dengan kata indeks k
        strcpy(kata[k],kata[jumlah-1]);// memindahkan kata indeks k dengan kata indeks jumlah - 1
    }
}

void masukan(int jumlah, char kata[jumlah][100]){
    for(int i=0; i<jumlah-1; i++){// pengulangan degan batasan jumlah 
        scanf("%s", kata[i]);// masukan dari kata dari user
    }
}
void tampilan(int jumlah, char kata[jumlah][100]){
    for(int i = 0;i < jumlah-1;i++){// pengulangan degan batasan jumlah 
        printf("%s\n",kata[i]);// tampilkan kata 
    }
}