#include <stdio.h>
int main() {
    int bil1 = 0, bil2 = 0;
    char operator;
    // bil1 - operator - bil2
    scanf("%d %c%d", &bil1, &operator, &bil2);
    // memeriksa kondisi variabel operator
    switch (operator){
        case '+':
            printf("= %d\n", bil1 + bil2);
            /* perintah yang dijalankan jika operasi yang dilakukan
            merupakan penjumlahan */
            break;
        case '-':
            printf("= %d\n", bil1 - bil2);
            /* perintah yang dijalankan jika operasi yang dilakukan
            merupakan pengurangan */
            break;
        case '*':
            printf("= %d\n", bil1 * bil2);
            /* perintah yang dijalankan jika operasi yang dilakukan
            merupakan perkalian */
            break;
        case '/':
            printf("= %d\n", bil1 / bil2);
            /* perintah yang dijalankan jika operasi yang dilakukan
            merupakan pembagian */
            break;
        case '%':
            printf("= %d\n", bil1 % bil2);
            /* perintah yang dijalankan jika operasi yang dilakukan
            merupakan modulus */
            break;
        default:
            printf("Operator tidak dikenali!\n");
            /* perintah yang dijalankan jika tidak ada case (konstanta)
            yang bernilai sama seperti operator masukan user */
            break;
    }
    return 0;
}