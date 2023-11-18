#include <stdio.h>
#include <stdlib.h>

int faktorial(int n){
    if(n == 1){
        printf("%d", n);
        return 1;
    }else{
        printf("%d * ", n);
        return n * faktorial(n-1);
    }
}
int sum(int n){
    if(n == 1){
        printf("%d", n);
        return 1;
    }else{
        printf("%d + ", n);
        return n + sum(n-1);
    }
}

int main(){
    int nilai;
    scanf("%d", &nilai);
    printf(" = %lld\n", faktorial(nilai));
    printf(" = %d\n", sum(nilai));
    return 0;
}