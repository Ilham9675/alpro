// Deklarasi library yang digunakan
#include <stdio.h>
#include <math.h>
// Deklarasi Tipe Data Terstruktur
typedef struct{
    int x; // Variabel untuk menampung titik koordinat x
    int y; // Variabel untuk menampung titik koordinat y
} titik; // Nama tipe data terstruktur
int main() {
    // Deklarasi Variabel
    titik koordinat_rumah; // Variabel untuk koordinat rumah
    titik koordinat_sekolah; // Variabel untuk koordinat sekolah
    int X, Y; // Variabel untuk menampung nilai garis tegak mendatar dan garis tegak vertikal
    float jarak; // Variabel untuk menampung nilai jarak
    // Meminta masukan dari user
    printf("Isilah titik koordinat alamat rumahmu.\n");
    printf("x : ");
    scanf("%d", &koordinat_rumah.x);
    printf("y : ");
    scanf("%d", &koordinat_rumah.y);
    printf("Isilah titik koordinat alamat sekolahmu.\n");
    printf("x : ");
    scanf("%d", &koordinat_sekolah.x);
    printf("y : ");
    scanf("%d", &koordinat_sekolah.y);
    // Menghitung jarak dari rumah ke sekolah
    X = koordinat_sekolah.x - koordinat_rumah.x;
    Y = koordinat_sekolah.y - koordinat_rumah.y;
    jarak = (X * X) + (Y * Y);
    jarak = sqrt(jarak);
    if (jarak > 0 && jarak <= 10) // Jika jarak dari rumah ke sekolah berada dalam radius lebih dari 0 km sampai 10 km
    {
        printf("Selamat kamu diterima sebagai mahasiswa baru lewat jalur zonasi!\n");
    }else // Jika jarak dari rumah ke sekolah berada dalam radius lebih dari 10 km
    {
        printf("Maaf kamu tidak lolos jalur zonasi. Tetap semangat dan jangan putus asa!\n");
    }
    return 0; // Menyatakan keluaran dari fungsi main() adalah 0
}