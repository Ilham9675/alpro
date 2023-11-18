#include <stdio.h>
#include <stdlib.h>

void tulis(int n){
    int counter;
    counter = n;

    if(counter > 0){
        printf("proses rekursif dengan nilai counter: %d\n", counter);
        counter = counter - 1;
        tulis(counter);
    }
}

int main(){
    system("cls");
    int jumlah;
    printf("jumlah pengulangan :");
    scanf("%d", &jumlah);
    system("cls");
    tulis(jumlah);
    return 0;
}