#include <stdio.h>
typedef struct{
    int red;
    int green;
    int blue;
}piksel;

int main(){
    int baris;
    int kolom;

    printf("mausukan banyaknya baris :");
    scanf("%d", &baris);
    printf("mausukan banyaknya kolom :");
    scanf("%d", &kolom);

    piksel arr[baris][kolom];

    int i, j;
    for(i = 0;i < baris;i++){
        for(j = 0;j < kolom;j++){
            arr[i][j].red = 255;
            arr[i][j].green = 255;
            arr[i][j].blue = 255;
        }
    }

    arr[0][1].red = 0;
    arr[0][1].green = 255;
    arr[0][1].blue = 0;

    for(i = 0;i < baris;i++){
        for(j = 0;j < kolom;j++){
            if(arr[i][j].red == 255 && arr[i][j].green == 255 && arr[i][j].blue == 255){
                if(j == 0){
                    printf("putih");
                }else{
                    printf(" putih");
                }
            }else if(arr[i][j].red == 0 && arr[i][j].green == 255 && arr[i][j].blue == 0){
                printf(" hijau");
            }
        }
        printf("\n");
    }

    return 0;
}
