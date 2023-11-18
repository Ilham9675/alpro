#include <stdio.h>

void merge(int arr1[], int n1, int arr2[], int n2, int arr3[])
{
    int i1 = 0, i2 = 0, i3 = 0;


    // ulangi hingga arr1 habis atau arr2 habis
    while ((i1 < n1) && (i2 < n2))
    {
        // jika elemen teratas arr1 lebih kecil dari arr2
        if (arr1[i1] < arr2[i2])
        {
            // masukkan elemen teratas arr1 ke dalam arr3
            arr3[i3] = arr1[i1];
            i3++;
            i1++;
        }
        // jika elemen teratas arr1 lebih besar dari arr2
        else
        {
            // masukkan elemen teratas arr2 ke dalam arr3
            arr3[i3] = arr2[i2];
            i3++;
            i2++;
        }
    }


    // masukkan sisa arr1 jika ada
    while(i1 < n1)
    {
        arr3[i3] = arr1[i1];
        i3++;
        i1++;
    }
    // masukkan sisa arr2 jika ada
    while(i2 < n2)
    {
        arr3[i3] = arr2[i2];
        i3++;
        i2++;
    }
}



int main(){
    int n1, n2;
    scanf("%d",&n1);
    int arr1[n1];
    for(int i = 0; i < n1; i++){
        scanf("%d",&arr1[i]);
    }
    scanf("%d",&n2);
    int arr2[n2];
    for(int i = 0; i < n2; i++){
        scanf("%d",&arr2[i]);
    }
    int arr3[n1+n2];

    merge( arr1,  n1,  arr2, n2, arr3);
    return 0;
}