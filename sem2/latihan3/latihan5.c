#include <stdio.h>

long long fib(long long *arr, int n){
    if(n < 2){
        arr[n] = n;
        return n;
    }else{
        arr[n] = fib(arr, n-1) + fib(arr, n - 2);
        return arr[n];
    }
}

int main(){
    long long n;
    printf("masukan bilangan fibonaci :");
    scanf("%d", &n);
    long long arr[n];
    fib(arr, n);
    int i = 0;
    for(i = 0;i < n;i++){
        printf("%lld ",arr[i]);
    }
    return 0;
}