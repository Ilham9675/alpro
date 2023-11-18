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
    int key, i, j, swap, temp,jumlah;
    scanf("%d",&jumlah);
    int arr[jumlah];
    for (int i = 0; i < jumlah; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Sebelum di sort:\n");
    printArr(jumlah,arr);
    // algoritma bubble sort
    do
    {
        swap = 0; // inisialisasi
        for (i = 0; i < jumlah - 1; i++)
        { // jika data i lebih besar dari i+1
            if (arr[i] > arr[i + 1])
            { // tukar data
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;


                // tanda bahwa ada data yang ditukar
                swap = 1;
            }
        }
    } while (swap  == 1);


    printf("Setelah di sort:\n");
    printArr(jumlah,arr);
    return 0;
}
