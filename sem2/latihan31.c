#include <stdio.h>


int factorial(int n) {
    if (n != 1) { // base case
        return n * factorial(n - 1);
    } else {
        return n;
    }
}


int main() {
    int nilai;
    scanf("%d", &nilai);
    printf("%d\n", factorial(nilai));
    return 0;
}