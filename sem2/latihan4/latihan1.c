#include <stdio.h>

int main(){
    int jumlah;
    scanf("%d",&jumlah);
    int tabint[jumlah];
    for(int i=0; i<jumlah; i++){
        scanf("%d",&tabint[i]);
    }
    for(int i = 1;i < jumlah; i++){
        int data_sisip = tabint[i];
        int j = i - 1;
        if(i < jumlah/2){
            while((data_sisip < tabint[j]) && (j >= 0)){
                tabint[j + 1] = tabint[j];
                j--;
            }
        }else{
            while((data_sisip > tabint[j]) && (j >= jumlah/2)){
                tabint[j + 1] = tabint[j];
                j--;
            }
        }
        tabint[j + 1] = data_sisip;
    }
    for(int i=0; i<jumlah; i++){
        printf("%d ",tabint[i]);
    }
    return 0;
}