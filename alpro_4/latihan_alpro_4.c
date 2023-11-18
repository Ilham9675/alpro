#include <stdio.h>

// deklarasi tipe data terstruktur
typedef struct{
    int pensil; // variabel untuk menampung jumlah pensil yang di beli
    int pulpen; // variabel untuk menampung jumlah pulpen yang di beli
    int penghapus; // variabel untuk menampung jumlah penghapus yang di beli
    int total; // variabel untuk menampung jumlah uang yang harus di keluarkan
    char pembanyaran; // karakter untuk menampung metode pembanyarang yang di gunakan
}belanja;// nama tipe data data terstruktur

int main(){
    belanja harry; // char dan variabel untuk harry
    belanja roy; // char dan variabel untuk roy

    // meminta masukan dari harry apa saja yang beli
    scanf("%d %d %d",&harry.pensil,&harry.pulpen,&harry.penghapus);
    // meminta masukan dari harry apa metode pembanyaran yang di gunakan 
    scanf(" %c",&harry.pembanyaran);
    // meminta masukan dari roy apa saja yang beli
    scanf("%d %d %d",&roy.pensil,&roy.pulpen,&roy.penghapus);
    // meminta masukan dari roy apa metode pembanyaran yang di gunakan 
    scanf(" %c",&roy.pembanyaran);

    // menghitung jumlah pengeluaran harry
    switch(harry.pembanyaran){
        // cara penambahan 1
        case 'T': {
            // harga asli barang
            // menambahkan jumlah harga pensil
            harry.total = harry.pensil * 1000;
            // menambahkan jumlah harga pulpen
            harry.total = harry.total + (harry.pulpen * 3000);
            // menambahkan jumlah harga penghapus
            harry.total = harry.total + (harry.penghapus * 500);
            break;
        }
        case 'P': {
            // harga asli barang di tambah dengan setengah harga asli jadi 1.5 harga per produk
            // menambahkan jumlah harga pensil
            harry.total = harry.pensil * (1000 * 1.5);
            // menambahkan jumlah harga pulpen
            harry.total = harry.total +(harry.pulpen * (3000 * 1.5));
            // menambahkan jumlah harga penghapus
            harry.total = harry.total +(harry.penghapus * (500 * 1.5));
            break;
        }
        case 'C' : {
            // harga asli barang di tambah Rp.1000 per peroduk
            // menambahkan jumlah harga pensil
            harry.total = harry.pensil * 2000;
            // menambahkan jumlah harga pulpen
            harry.total = harry.total +(harry.pulpen * 4000);
            // menambahkan jumlah harga penghapus
            harry.total = harry.total +(harry.penghapus * 1500);
            break;
        }
        default: {
            printf("matode pembanyaran tidak ada");
            harry.total = 0;
            break;
        }
    }

    // menghitung jumlah pengeluaran roy
    switch(roy.pembanyaran){
        // // cara penambahan 1
        case 'T':
            // harga asli barang
            roy.total = (roy.pensil * 1000) + (roy.pulpen * 3000) + (roy.penghapus * 500);
            break;
        case 'P':
            // harga asli barang di tambah dengan setengah harga asli jadi 1.5 harga per produk
            roy.total = (roy.pensil * (1000 * 1.5)) + (roy.pulpen * (3000 * 1.5)) + (roy.penghapus * (500 * 1.5));
            break;
        case 'C' :
            // harga asli barang di tambah Rp.1000 per peroduk
            roy.total = (roy.pensil * 2000) + (roy.pulpen * 4000) + (roy.penghapus * 1500);
            break;
        default: {
            printf("matode pembanyaran tidak ada");
            roy.total = 0;
            break;
        }
    }
    /* memeriksa apakah motode pembanyaran harry sama seperti metode pembanyaran roy
    jika sama maka total uang yang dikeluarkan oleh roy akan di tanggung oleh harry*/ 
    if(harry.pembanyaran == roy.pembanyaran){
        harry.total += roy.total;
        roy.total = 0;
    }
    
    // menampilkan berapa total uang yang di keluarkan oleh harry 
    printf("Total belanja yang harus dibayar oleh Harry adalah Rp.%d\n",harry.total);
    // menampilkan berapa total uang yang di keluarkan oleh roy
    printf("Total belanja yang harus dibayar oleh Roy adalah Rp.%d",roy.total);

    return 0;
}