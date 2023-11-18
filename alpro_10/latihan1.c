#include <stdio.h>
#include <string.h>
 

typedef struct{
    char nama[100];
    char nilai;
    int umur;
    int hasil;
}orang;


int main(){
    int n;
    scanf("%d",&n);
    orang p[n];
    for(int i = 0; i < n; i++){
        scanf("%s %d %c",&p[i].nama,&p[i].umur,&p[i].nilai);
    }
    for(int i = 0; i < n; i++){
        p[i].hasil = 0;
        for(int j = 0; j < strlen(p[i].nama); j++){
            p[i].hasil += p[i].nama[j];
        }
    }
    for(int i = 0; i < n; i++){
        if(p[i].umur > 80 || 5 < p[i].umur){
            printf("tidak valid: %s %c %d\n",p[i].nama,p[i].nilai,p[i].hasil);
        }else{
            printf("valid: %s %c %d\n",p[i].nama,p[i].nilai,p[i].hasil);
        }

    }
    return 0;
}