#include <stdio.h>
#include <string.h>

int main()
{
    int jumlah;
    scanf("%d", &jumlah);
    char arr[jumlah][100];
    for(int i=0; i<jumlah; i++){
        scanf("%s", arr[i]);
    }
    char pilihan[100];
    scanf("%s", pilihan);
    char wadah[100];
    if(strcmp("insertion",pilihan) == 0){
        for (int i = 1; i < jumlah; i++){
            int key = arr[i][0];
            
            strcpy(wadah,arr[i]);
            int j = i - 1;
            while (j >= 0 && key < arr[j][0])
            {
                strcpy(arr[j+1],arr[j]);
                j--;
            }
            strcpy(arr[j+1],wadah);
        }
    }else{
        for (int i = 0; i < jumlah-1; i++){
            int minIndex = i;
            for (int j = i+1; j < jumlah; j++)
            {
                if (arr[minIndex][0] < arr[j][0])
                {
                    minIndex = j;
                }
            }
            strcpy(wadah,arr[i]);
            strcpy(arr[i],arr[minIndex]);
            strcpy(arr[minIndex],wadah);
        }

    }
    for(int i = 0;i < jumlah;i++){
        printf("%s\n",arr[i]);
    }
    
    return 0;
}