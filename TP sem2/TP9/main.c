#include "header.h"


int main()
{
    // deklarasi variabel pita
    char pita[1000];


    // meminta masukan pita
    scanf("%999[^\n]s", pita);


    // memulai mesin dan membaca pita
    START(pita);
    while (EOP() == 0)
    {
        if(pita[indeks] == ' '){
            ADV(pita);
        }
        if((pita[indeks] >= 65 && pita[indeks] <= 90) || (pita[indeks] >= 97 && pita[indeks] <= 122)){
            if((pita[indeks] == 'A') || (pita[indeks] == 'I') || (pita[indeks] == 'U') || (pita[indeks] == 'E') || (pita[indeks] == 'O') || (pita[indeks] == 'a') || (pita[indeks] == 'i') || (pita[indeks] == 'u') || (pita[indeks] == 'e') || (pita[indeks] == 'o')){
                cek1++;
                cek2 = 0;
            }else{
                cek1 = 0;
                cek2++;
            }
        }else{
            cek1 = 0;
            cek2 = 0;
        }
        
        if(cek1 == 3 || cek2 == 3){
            berhasil = 1;
        }
        INC(pita);
    }

    if(berhasil == 1){
        printf("Pesan rahasia yang dikirim oleh codename %c.",pita[0]);
    }else{
        printf("Bukan pesan rahasia.");
    }
    printf("\n");

    return 0;
}
