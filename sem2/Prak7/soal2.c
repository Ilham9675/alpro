#include <stdio.h>

int n = 10;
int arr[] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
int targetvalue = 17;

int binarysearch(int n, int arr0fint[n], int target){
    int found = 0;
    int i = 0,j = n -1 ,mid;

    while(i <= j && found == 0){
        mid = (i + j) / 2;
        if(arr0fint[mid] == target){
            found = 1;
        }else{
            if(arr0fint[mid] >= target){
                j = mid - 1;
            }else{
                i = mid + 1;
            }
        }
    }
    return found;
}

int main(){
    if(binarysearch(n,arr,targetvalue) == 0){
        printf("Tidak Ketemu\n");
    }else{
        printf("Ketemu\n");
    }
    return 0;
}
