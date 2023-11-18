#include <stdio.h>

void quicksortpipnggir(int jumlah, int nilai[jumlah],int l,int r){
    int i = l,j = r, temp;
    do
    {
        while ((nilai[i] < nilai[r]) && (i <= j))
        {
            i++;
        }
        while ((nilai[j] > nilai[l]) && (i <= j))
        {
            j--;
        }
        if(i < j){
            temp = nilai[i];
            nilai[i] = nilai[j];
            nilai[j] = temp;
            i++;
            j--;
        }
    } while (i < j);
    if(l < j){
        quicksortpipnggir(jumlah, nilai,l,j);
    }
    if(i < r){
        quicksortpipnggir(jumlah, nilai,i,r);
    }
}
int main(){
    int jumlah;
    scanf("%d",&jumlah);
    int nilai[jumlah];
    for(int i=0; i<jumlah; i++){
        scanf("%d",&nilai[i]);
        
    }
    quicksortpipnggir(jumlah,nilai, 0, jumlah -1);
    for(int i=0; i<jumlah; i++){
        printf("%d ",nilai[i]);
    }
    return 0;
}