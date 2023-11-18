#include <stdio.h>
int main() {
    char predikat; // variabel untuk menampung nilai predikat
    printf("Rentang Penilaian : \n");
    printf("1. 80 - 100 : A\n");
    printf("2. 60 - 80 : B\n");
    printf("3. 40 - 60 : C\n");
    printf("4. 20 - 40 : D\n");
    printf("5. 0 - 20 : E\n");
    printf("\nIsilah predikat anda sesuai pedoman rentang penilaian :");
    scanf(" %c", &predikat);
    printf("Keterangan : ");
    // memeriksa kondisi pada variabel predikat
    switch (predikat){
        case 'A':
            printf("Sangat Baik\n");
            // perintah yang dijalankan jika nilai masukan user A
            break;
        case 'B':
            printf("Baik\n");
            // perintah yang dijalankan jika nilai masukan user B
            break;
        case 'C':
            printf("Cukup Baik\n");
            // perintah yang dijalankan jika nilai masukan user C
            break;
        case 'D':
            printf("Kurang Baik\n");
            // perintah yang dijalankan jika nilai masukan user D
            break;
        case 'E':
            printf("Tidak Baik\n");
            // perintah yang dijalankan jika nilai masukan user E
            break;
        default:
            printf("Predikat nilai anda tidak terdapat dalam pedoman rentang penilaian!\n");
            /* perintah yang dijalankan jika tidak ada case (konstanta)
            yang bernilai sama seperti predikat masukan user */
            break;
    }
    return 0;
}