#include <stdio.h>
void printArr(int jumlah,int arr[])
{
    for (int i = 0; i < jumlah; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void tampilan(int jumlah,int arr[],int posisi)
{
    for (int i = 0; i < jumlah; i++)
    {
        printf("%d", arr[i]);
        if(posisi == i){
            printf("|");
        }else{
            printf(" ");
        }
    }
    printf("\n");
}


int main()
{
    int key, i, j, minIndex, temp,jumlah;
    scanf("%d", &jumlah);
    int arr[jumlah];
    for(i = 0;i < jumlah;i++){
        scanf("%d",&arr[i]);
    }
    printf("Sebelum di sort:\n");
    printArr(jumlah, arr);
    // algoritma selection sort
    printf("perpindahan\n");
    for (i = 0; i < (jumlah - 1); i++)
    {
        minIndex = i;
        for (j = i+1; j < jumlah; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
        printf("ke-%d\n",i+1);
        tampilan(jumlah,arr,i);
        printf("\n");
    }


    printf("Setelah di sort:\n");
    printArr(jumlah,arr);
    return 0;
}
