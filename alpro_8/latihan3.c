#include <stdio.h>
#include <string.h>

int main(){
    char array[100];
    scanf("%s",array);
    char arraydep[50];
    char arraybel[50];
    char arraytotal[50];
    int paj1;
    int paj2;
    int i = 0;
    while(array[i] != '$'){
        arraydep[i] = array[i];
        i++;
    }
    paj1 = i;
    i++;
    int j = 0;
    while(strlen(array) > i){
        arraybel[j] = array[i];
        i++;
        j++;

    }
    paj2 = j;
    i = 0;
    int index = 0;
    while(strlen(array) - paj2 > i){
        j = 0;
        int cek = 0;
        int k = i;
        while(paj2 > j){
            if(arraydep[k] == arraybel[j]){
                cek++;
            }
            k++;
            j++;
        }
        
        
        if(cek == paj2){
            i += (paj2 - 1);
        }else{
            
            arraytotal[index] = arraydep[i];
            index++;
        }
        i++;
    }
    int jumlah = index - 1;
    if(index - 1 != 0){
        printf("Setelah dihapus : ");
        i = 0;
        while(jumlah > i){
            printf("%c",arraytotal[i]);
            i++;
        }
        printf("\n\n");
        int setengah = jumlah / 2;
        int belakang;
        int depan;
        char pass[100];
        int jumlahpass = 0;
        if(jumlah % 2 == 1){
            belakang = setengah + 1;
            depan = setengah - 1;
        }else{
            belakang = setengah;
            depan = setengah - 1;
        }
        for(int a = 0;a < setengah;a++){
            for(int b = 0;b < a;b++){
                printf(" ");
            }
            printf("%c",arraytotal[belakang]);
            pass[jumlahpass] = arraytotal[belakang];
            jumlahpass++;
            if(jumlah % 2 == 1){
                for(int b = 1;b < (setengah - a) * 2;b++){
                    printf(" ");
                }
            }else{
                for(int b = 1;b < setengah - a;b++){
                    printf(" ");
                }
                for(int b = 1;b < setengah - a;b++){
                    printf(" ");
                }
            }
            printf("%c",arraytotal[depan]);
            pass[jumlahpass] = arraytotal[depan];
            jumlahpass++;
            depan--;
            belakang++;
            printf("\n");
        }
        if(jumlah % 2 == 1){
            for(int b = 0;b < setengah;b++){
                printf(" ");
            }
            printf("%c\n",arraytotal[setengah]);
            pass[jumlahpass] = arraytotal[setengah];
            jumlahpass++;
        }
        printf("\nPassword : ");
        j = 0;
        do{
            printf("%c",pass[j]);
            j++;
        }while(jumlahpass > j);
        printf(" - Harta Karun Didapatkan!\n");
    }else{
        printf("Kata hilang... Ikhlaskanlah harta karun ini.\n");
    }
    return 0;
}