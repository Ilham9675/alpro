#include <stdio.h>

int main(){
    int pola;
    printf("masukan ukuran pola piramida :");
    scanf("%d",&pola);
    int pola_angkav1 = 0;
    int pola_angkaV2 = 0;
    for(int a = 0;a < pola;a++){
        for(int b = a + 1; b < pola;b++){
            printf(" ");
        }
        for(int b = 0; b <= a;b++){
            printf("%d",pola_angkav1%10);
            pola_angkav1++;
        }
        for(int b = 0; b < a;b++){
            printf("%d",pola_angkav1%10);
            pola_angkav1++;
        }
        for(int b = a + 1; b < pola;b++){
            printf(" ");
        }
        for(int b = 0; b < pola;b++){
            printf("%d",a+1);
            pola_angkaV2++;
        }
        printf("\n");
    }
    for(int a = 0;a < pola - 1;a++){
        for(int b = 0; b <= a;b++){
            printf(" ");
        }
        for(int b = a + 1; b < pola;b++){
            printf("%d",pola_angkav1%10);
            pola_angkav1++;
        }
        for(int b = a + 2; b < pola;b++){
            printf("%d",pola_angkav1%10);
            pola_angkav1++;
        }
        printf("\n");
    }
    return 0;
}