#include <stdio.h>


int factorial(int n) {
    int res = 1;
    while (n != 1) {
        res *= n;
        n--;
    }
    return res;
}


int main(){
    int nilai;
    scanf("%d", &nilai);
    printf("%d\n", factorial(nilai));
    return 0;
}
