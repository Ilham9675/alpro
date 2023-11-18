#include <stdio.h>

int n = 7;
int arr[] = {5, 8, 6, 7, 2, 1, 7};
int targetvalue = 2;

int sequentialsearch(int n, int arr0fint[], int target){
    int found = 0;
    int i = 0;

    while(i < n && found == 0){
        if(arr0fint[i] == target){
            found = 1;
        }else{
            i++;
        }
    }
    return found;
}

int main(){
    if(sequentialsearch(n,arr,targetvalue) == 0){
        printf("Tidak Ketemu\n");
    }else{
        printf("Ketemu\n");
    }
    return 0;
}
