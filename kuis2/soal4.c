#include <stdio.h>
#include <string.h>

int main (){
    int n; 
    scanf("%d",&n);
    char a1[n][200];
    int i;  
    for(i = 0;i < n;i++){
        scanf("%s",a1[i]);
    }
    int t;
    for(i = 0;i < n;i += 2){
        if(i == 0){
            t = strlen(a1[i]);
        }else{
            if(t < strlen(a1[i])){
                t = strlen(a1[i]);
            }
        }
    }
    for(i = 0;i < n;i++){
        if(i % 2 == 0){
            for(int j = 0;j < t - strlen(a1[i]);j++){
                printf(" ");
            }
            printf("%s\n",a1[i]);
        }else{
            for(int j = 0;j < t;j++){
                printf(" ");
            }
            printf("%s\n",a1[i]);
        }
    }

    return 0;
}