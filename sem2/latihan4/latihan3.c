#include <stdio.h>

int main(){
    int jumlah;
    scanf("%d",&jumlah);
    int tabint[jumlah];
    for(int i=0; i<jumlah; i++){
        scanf("%d",&tabint[i]);
    }
    for(int i = 0;i < jumlah - 1; i++){
        int indek = i;
        for(int j = i + 1;j < jumlah; j++){
            if(tabint[indek] < tabint[j]){
                indek = j;
            }
        }
        int temp = tabint[indek];
        tabint[indek] = tabint[i];
        tabint[i] = temp;
    }
    for(int i=0; i<jumlah; i++){
        printf("%d ",tabint[i]);
    }
    return 0;
}