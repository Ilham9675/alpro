#include <stdio.h>
#include <string.h>

int main (){
    char d1[200];
    char d2[200];
    int p;

    scanf("%s",d1);
    scanf("%s",d2);
    scanf("%d",&p); 

    char g[400]; 
    int i = 0; 
    int j = 0; 
    int pg = 0; 
    while(i < strlen(d1) || j < strlen(d2)){
        int a = 0;
        while(p > a && j < strlen(d2)){
            g[pg] = d2[j];
            pg++;
            j++;
            a++;
        }
        a = 0;
        while(p > a && i < strlen(d1)){
            g[pg] = d1[i]; 
            pg++;
            i++;
            a++;
        }
    }
    
    g[pg] = '\0';
    printf("%s\n",g);
    return 0;
}