#include <stdio.h>

int main(){

    matriks[5][3] = {
        {1, 2, 3},
        {2, 3, 4},
        {3, 4, 5},
        {4, 5, 6},
        {5, 6, 7}
    };

// Deklarasi variabel untuk menyimpan nilai baris dan kolom yang ingin dicari oleh user
    int barisDicari; 
    int kolomDicari; 
    scanf("%d", &barisDicari);
    scanf("%d", &kolomDicari);


    // Mengambil nilai cari dengan cara mengakses indeks
    int nilaiCari = matriks[barisDicari - 1][kolomDicari - 1]; // Lengkapi syntax berikut (Boleh menggunakan cara lain untuk mengambil nilai yang dicari)


    // Menampilkan nilai dari baris dan kolom yang dicari
    printf("Isi dari baris : %d kolom %d adalah %d\n", barisDicari, kolomDicari, nilaiCari); // Lengkapi syntax berikut

    return 0;
}