#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wait(float x){
    time_t start;
    time_t current;
    time(&start);
    do{
        time(&current);
    }while(difftime(current, start) < x);
}

int main(){
    char arr[6][6];
    int i,j , x = -1, y = -1, jalan = 1;
    for(i = 0;i < 6;i++){
        for(j = 0;j < 6;j++){
            arr[i][j] = ' ';
        }
    }
    while(1){
        system("cls");
        arr[x][y] = ' ';

        if((x == 5) && (y == 5)){
            jalan = -1;
            x -= 1;
            y -= 1;
        }else if((x == 0) && (y == 0)){
            jalan = 1;
            x += 1;
            y += 1;
        }else if(jalan == 1){
            x += 1;
            y += 1;
        }else{
            x -= 1;
            y -= 1;
        }
        arr[x][y] = 'B';
        for(i = 0;i < 6;i++){
            for(j = 0;j < 6;j++){
                printf("%c",arr[i][j]);
            }
            printf("\n");
        }
        wait(0.5);
    }
    return 0;
}