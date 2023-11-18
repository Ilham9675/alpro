// Deklarasi library yang digunakan
#include <stdio.h>
// Deklarasi Tipe Data Terstruktur
typedef struct{
    int id_jadwal; // Variabel untuk menampung id jadwal kereta api yang dipilih
    int jumlah_tiket; // Variabel untuk menampung banyak tiket yang dipesan
    char member; // Variabel untuk memeriksa kepemilikan kartu KAI
    int total_harga; // Variabel untuk menampung total harga pemesanan tiket kereta api
}jadwal_KA; // Nama Tipe Data Terstruktur
int main() {
    jadwal_KA booking; // Variabel untuk pemesanan tiket kereta api
    printf(" ______________________________________________________________________________________________\n");
    printf("|                                                                                              |\n");
    printf("|                               Pemesanan Tiket Kereta Api                                     |\n");
    printf("|______________________________________________________________________________________________|\n");
    printf("|                                Daftar Jadwal Kereta Api                                      |\n");
    printf("|==============================================================================================|\n");
    printf("|  ID | Stasiun Asal | Stasiun Tujuan | Tanggal Keberangkatan |     Kelas     |      Harga     |\n");
    printf("|==============================================================================================|\n");
    printf("|  1  |   Bandung    |    Semarang    |   21 September 2022   |  Ekonomi (E)  |  Rp 310.000,00 |\n");
    printf("|  2  |   Jakarta    |    Surabaya    |   22 September 2022   |  Bisnis (B)   |  Rp 300.000,00 |\n");
    printf("|  3  |   Cirebon    |    Kuningan    |   20 September 2022   |  Eksekutif (X)|  Rp 270.000,00 |\n");
    printf("|  4  |   Soreang    |    Majalaya    |   25 September 2022   |  Bisnis (B)   |  Rp 150.000,00 |\n");
    printf("|_____|______________|________________|_______________________|_______________|________________|\n");
    // Meminta masukan dari user
    printf("\nMasukan ID jadwal kereta api pesanan anda : ");
    scanf("%d", &booking.id_jadwal);
    if(booking.id_jadwal <= 4){
        printf("Masukan jumlah tiket pesanan anda : ");
        scanf("%d", &booking.jumlah_tiket);
        printf("Apakah anda memiliki kartu member KAI? (Y/N) : ");
        scanf(" %c", &booking.member);
    }else{
        booking.total_harga = 0;
    }
    // Memeriksa kondisi id jadwal pada variabel booking
    switch (booking.id_jadwal){
        case 1: // Jika user memesan tiket kereta api dengan ID 1
            booking.total_harga = booking.jumlah_tiket * 310000;
            break;
        case 2: // Jika user memesan tiket kereta api dengan ID 2
            booking.total_harga = booking.jumlah_tiket * 300000;
            break;
        case 3: // Jika user memesan tiket kereta api dengan ID 3
            booking.total_harga = booking.jumlah_tiket * 270000;
            break;
        case 4: // Jika user memesan tiket kereta api dengan ID 4
            booking.total_harga = booking.jumlah_tiket * 150000;
            break;
        default: // Jika user memesan tiket kereta api selain ID 1 - 4
            printf("\nSilahkan periksa kembali pesanan anda!\n");
            break;
    }
    // Memeriksa apakah user memiliki kartu KAI
    if (booking.member == 'Y' || booking.member == 'y'){
        // Jika user memiliki kartu KAI, maka dilakukan potongan harga untuk setiap pembelian tiket
        booking.total_harga -= (20000 * booking.jumlah_tiket);
    }
    // Menampilkan total harga untuk pemesanan tiket kereta api
    printf("\nBerikut total harga untuk pemesanan anda : Rp %d,-\n",booking.total_harga);
    return 0; // Menyatakan keluaran dari fungsi main() adalah 0
}
