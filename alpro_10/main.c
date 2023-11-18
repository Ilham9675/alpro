#include "pola.h"

int main(){
    int i,n;
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        pola(n+i);
    }
    int kumpulan[n];
    
    for(i=0; i<n; i++){
        scanf("%d", &kumpulan[i]);
    }
    tulisarrayint(n, kumpulan);
    return 0;
}