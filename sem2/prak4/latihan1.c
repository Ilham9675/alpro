#include <stdio.h>


void printArr(int jumlah,int arr[])
{
    for (int i = 0; i < jumlah; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main()
{
    int key, i, j, jumlah;
    scanf("%d", &jumlah);
    int arr[jumlah];
    for(i = 0;i < jumlah;i++){
        scanf("%d",&arr[i]);
    }
    printf("Sebelum di sort:\n");
    printArr(jumlah,arr);
    // algoritma insertion sort
    for (i = 1; i < jumlah; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    printf("Setelah di sort:\n");
    printArr(jumlah,arr);
    return 0;
}
