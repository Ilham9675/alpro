#include <stdio.h>

int main(){
    int pola;
    printf("masukan ukuran pola :");
    scanf("%d",&pola);
    printf("pola piramida\n");
    for(int a = 0;a < pola ;a++){
        for(int b = a + 1; b < pola;b++){
            printf(" ");
        }
        for(int b = 0; b <= a;b++){
            printf("*");
        }
        for(int b = 0; b < a;b++){
            printf("*");
        }
        printf("\n");
    }
    printf("pola diamond\n");
    for(int a = 0;a < pola;a++){
        for(int b = a + 1; b < pola;b++){
            printf(" ");
        }
        for(int b = 0; b <= a;b++){
            printf("*");
        }
        for(int b = 0; b < a;b++){
            printf("*");
        }
        printf("\n");
    }
    for(int a = 0;a < pola - 1;a++){
        for(int b = 0; b <= a;b++){
            printf(" ");
        }
        for(int b = a + 1; b < pola;b++){
            printf("*");
        }
        for(int b = a + 2; b < pola;b++){
            printf("*");
        }
        printf("\n");
    }
    printf("pola gatau apa V1\n");
    for(int a = 0;a < pola;a++){
        for(int b = a + 1; b < pola;b++){
            printf(" ");
        }
        for(int b = 0; b <= a;b++){
            printf("*");
        }
        for(int b = 0; b < a;b++){
            printf("*");
        }
        for(int b = a + 1; b < pola;b++){
            printf(" ");
        }
        for(int b = 0; b < pola;b++){
            printf("*");
        }
        printf("\n");
    }
    for(int a = 0;a < pola - 1;a++){
        for(int b = 0; b <= a;b++){
            printf(" ");
        }
        for(int b = a + 1; b < pola;b++){
            printf("*");
        }
        for(int b = a + 2; b < pola;b++){
            printf("*");
        }
        printf("\n");
    }
    printf("pola gatau apa V2\n");
    int pola_angka = 1;
    for(int a = 0;a < pola;a++){
        for(int b = a + 1; b < pola;b++){
            printf(" ");
        }
        for(int b = 0; b <= a;b++){
            printf("%d",pola_angka%10);
        }
        for(int b = 0; b < a;b++){
            printf("%d",pola_angka%10);
        }
        for(int b = a + 1; b < pola;b++){
            printf(" ");
        }
        for(int b = 0; b < pola;b++){
            printf("%d",pola_angka%10);
        }
        pola_angka++;
        printf("\n");
    }
    for(int a = 0;a < pola - 1;a++){
        for(int b = 0; b <= a;b++){
            printf(" ");
        }
        for(int b = a + 1; b < pola;b++){
            printf("%d",pola_angka%10);
        }
        for(int b = a + 2; b < pola;b++){
            printf("%d",pola_angka%10);
        }
        pola_angka++;
        printf("\n");
    }


    
    printf("pola gatau apa V3\n");
    pola_angka = 1;
    for(int a = 0;a < pola;a++){
        for(int b = a + 1; b < pola;b++){
            printf(" ");
        }
        for(int b = 0; b <= a;b++){
            printf("%d",pola_angka%10);
        }
        for(int b = 0; b < a;b++){
            printf("%d",pola_angka%10);
        }
        for(int b = a + 1; b < pola;b++){
            printf(" ");
        }
        for(int b = 0; b < pola;b++){
            printf("%d",pola_angka%10);
        }
        pola_angka++;
        printf("\n");
    }
    pola_angka -= 2;
    for(int a = 0;a < pola - 1;a++){
        for(int b = 0; b <= a;b++){
            printf(" ");
        }
        for(int b = a + 1; b < pola;b++){
            printf("%d",pola_angka%10);
        }
        for(int b = a + 2; b < pola;b++){
            printf("%d",pola_angka%10);
        }
        pola_angka--;
        printf("\n");
    }
    printf("pola gatau apa V4\n");
    pola_angka = 1;
    for(int a = 0;a < pola;a++){
        for(int b = 0; b < pola;b++){
            printf("%d",pola_angka%10);
        }
        for(int b = a + 1; b < pola;b++){
            printf(" ");
        }
        for(int b = 0; b <= a;b++){
            printf("%d",pola_angka%10);
        }
        for(int b = 0; b < a;b++){
            printf("%d",pola_angka%10);
        }
        for(int b = a + 1; b < pola;b++){
            printf(" ");
        }
        for(int b = a + 1; b < pola;b++){
            printf(" ");
        }
        for(int b = 0; b <= a;b++){
            printf("%d",pola_angka%10);
        }
        for(int b = 0; b < a;b++){
            printf("%d",pola_angka%10);
        }
        for(int b = a + 1; b < pola;b++){
            printf(" ");
        }
        for(int b = 0; b < pola;b++){
            printf("%d",pola_angka%10);
        }
        pola_angka++;
        printf("\n");
    }
    pola_angka -= 2;
    for(int a = 0;a < pola - 1;a++){
        for(int b = a + 1; b < pola;b++){
            printf("%d",pola_angka%10);
        }
        for(int b = 0; b <= a;b++){
            printf(" ");
        }
        for(int b = 0; b < (pola*2) - 1;b++){
            printf(" ");
        }
        for(int b = 0; b < (pola*2) - 1;b++){
            printf(" ");
        }
        for(int b = 0; b <= a;b++){
            printf(" ");
        }
        for(int b = a + 1; b < pola;b++){
            printf("%d",pola_angka%10);
        }
        pola_angka--;
        printf("\n");
    }
    
    return 0;
}