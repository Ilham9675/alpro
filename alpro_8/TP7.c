#include <stdio.h>
#include <string.h>
/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal
TP7 dalam mata kuliah algoritma dan pemlograman
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
int main(){
    char namacode[100];// wadah untuk string pertama
    char kata[50];// wadah untuk nama string utama
    char dihapus[50]; // wadah untuk substring yang akan di hapus
    char namabersih[50]; // wadah untuk string untuk string utama yang sudah di hapuskan substringnya
    char password[100]; // wadah untuk password
    int belakang;// batas index string tengah sampai belakang
    int depan; // batas index dari tengah sampai depan
    int panjangdihapus;// wadah untuk jumlah substring
    int jumlah; // jumlah untuk string yang sudah di hapus
    scanf("%s",namacode);// memasukan string dari user
    int i = 0;
    int j;
    // pengulangan untuk memisahkan string utama dengan indikator $
    do{
        kata[i] = namacode[i];
        i++;
    }while(namacode[i] != '$');
    i++;
    j = 0;
    // pengulangan untuk memisahkan substring
    do{
        dihapus[j] = namacode[i];
        i++;
        j++;

    }while(strlen(namacode) > i);
    panjangdihapus = j; // pemasukan jumlah substring
    i = 0;
    int index = 0; // wadah index untuk string yang sudah di hapus
    while(strlen(namacode) - panjangdihapus > i){
        j = 0;
        int cek = 0; // untuk perbandingan jumlah yang di hapus
        int k = i;// untuk mengulang kembali dan sesuai urutan
        while(panjangdihapus > j){// pengulangan sejumlah panjang substring
            // pengecekan apakah kata utama sama dengan kata substring
            if(kata[k] == dihapus[j]){
                cek++;// indikator untuk yang memenuhi syarat
            }
            k++;
            j++;
        }
        // pengecekan apakah di dalam string utama ada substring kalau ada maka tidak akan di masukan ke dalam string baru
        // kalau tidak kata nya akan di masukan ke dalam string baru
        if(cek == panjangdihapus){
            i += panjangdihapus;
        }else{
            namabersih[index] = kata[i]; // pemasukan karakter ke dalam string baru
            index++;
            i++;
        }
    }
    jumlah = index - 1; // pemasukan jumlah string baru
    // pengecekan jumlah string baru kalau ada akan mendapatkan harta karun dan kalau tidak ada tidak akan mendapatkan harta karun
    if(jumlah != 0){
        // pengeluaran nama yang sudah di hapus kalau ada substring nya
        printf("Setelah dihapus : ");
        i = 0;
        // pengeluaran nama yang sudah di hapus kalau ada substring nya
        do{
            printf("%c",namabersih[i]);
            i++;
        }while(jumlah > i);
        printf("\n\n"); // untuk ada jarak antara nama yang sudah di hapus dengam pola
        int setengah = jumlah / 2;// menambahnkan setengan dari string yang baru
        int jumlahpassword = 0; // jumlah password yang akan di bentuk
        // penghitungan batas dari tengah sampai belakang
        // jika jumlah string baru itu ganjil itu setengan akan di tambah satu juka genap maka sama dengan setengah
        if(jumlah % 2 == 1){
            belakang = setengah + 1;
        }else{
            belakang = setengah;
        }
        // masukan untuk batas tengah ke depan dengan memasukan setengah etring baru dan di min satu
        depan = setengah - 1;
        // keluaran untuk jumlah nama bersihnya berjumlah ganjil
        if(jumlah % 2 == 1){
            j = 0; 
            while(j < setengah){// pengulangan untuk spasi
                printf(" ");
                j++;
            }
            printf("%c\n",namabersih[setengah]);// untuk mengeluarkan karakter
            password[jumlahpassword] = namabersih[setengah];// pemasukan karakter agar tersusun sebuah password
            jumlahpassword++;
        }
        i = 0;
        // pengulangan untuk kata yang akan di dan jumlanya setengah karna di setiap pengulangan akan mengekuarkan dua karakter
        while(i < setengah){
            j = i + 1;
            while(j < setengah){// pengulangan untuk print spasi
                printf(" ");
                j++;
            }
            printf("%c",namabersih[belakang]);// untuk mengeluarkan karakter
            password[jumlahpassword] = namabersih[belakang];// pemasukan karakter agar tersusun sebuah password
            jumlahpassword++;
            if(jumlah % 2 == 1){// kondisi bernilai benar ketika jumlah array yang sudah di hapus bernilai ganjil
                j = 0;
                while(j < (i * 2) + 1){// pembentukan spasi di tengah tengah huruf
                    printf(" ");
                    j++;
                }
            }else{// kondisi bernilai benar ketika jumlah array yang sudah di hapus bernilai ganjil
                j = 0;
                while(j < i * 2){// pembentukan spasi di tengah tengah huruf
                    printf(" ");
                    j++;
                }
            }
            printf("%c",namabersih[depan]);// untuk mengeluarkan karakter
            password[jumlahpassword] = namabersih[depan];// pemasukan karakter agar tersusun sebuah password
            jumlahpassword++;
            depan--;
            belakang++;
            printf("\n");
            i++;
        }
        printf("\nPassword : "); // pengeluaran kalimat pembuka
        j = 0;
        while(jumlahpassword > j){// untuk mengeluarkan karakter secara satu satu sesuai jumlah array
            printf("%c",password[j]);// untuk mengeluarkan karakter
            j++;
        }
        printf(" - Harta Karun Didapatkan!\n");// pengeluaran karimat penutup
    }else{// else jika kondisinya jumlah sam dengan nol
        printf("Kata hilang... Ikhlaskanlah harta karun ini.\n");// pengeluaran kalimat 
    }
    return 0;
}