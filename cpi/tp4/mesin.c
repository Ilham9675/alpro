#include "header.h"
void insertion(int jumlah,char nama[jumlah][100],int nilai[jumlah],char kode[5]){
    if(kode[1] == 'N'){
        char wadah[100];
        int sem;
        for (int i = 1; i < jumlah; i++){
            strcpy(wadah,nama[i]);
            sem = nilai[i];
            int j = i - 1;
            if(kode[2] == 'A'){
                while ((j >= 0) && (strcmp(wadah,nama[j])) < 0){
                    strcpy(nama[j+1],nama[j]);
                    nilai[j+1] = nilai[j];
                    j--;
                }
            }else{
                while ((j >= 0) && (strcmp(wadah,nama[j])) > 0){
                    nilai[j+1] = nilai[j];
                    strcpy(nama[j+1],nama[j]);
                    j--;
                }
            }
            nilai[j+1] = sem;
            strcpy(nama[j+1],wadah);
        }
    }else{
        char wadah[100];
        int sem;
        for (int i = 1; i < jumlah; i++){
            strcpy(wadah,nama[i]);
            sem = nilai[i];
            int j = i - 1;
            if(kode[2] == 'A'){
                while ((j >= 0) && (sem < nilai[j])){
                    strcpy(nama[j+1],nama[j]);
                    nilai[j+1] = nilai[j];
                    j--;
                }
            }else{
                while ((j >= 0) && (sem > nilai[j])){
                    nilai[j+1] = nilai[j];
                    strcpy(nama[j+1],nama[j]);
                    j--;
                }
            }
            nilai[j+1] = sem;
            strcpy(nama[j+1],wadah);
        }
    }
}
void selection(int jumlah,char nama[jumlah][100],int nilai[jumlah], char kode[5]){
    if(kode[1] == 'N'){
        char wadah[100];
        int sem;
        for (int i = 0; i < jumlah-1; i++){
            int k = i;
            for (int j = i+1; j < jumlah; j++){
                if(kode[2] == 'A'){
                    if (strcmp(nama[k],nama[j]) > 0)
                    {
                        k = j;
                    }
                }else{
                    if (strcmp(nama[k],nama[j]) < 0)
                    {
                        k = j;
                    }
                }
            }
        
            strcpy(wadah,nama[i]);
            strcpy(nama[i],nama[k]);
            strcpy(nama[k],wadah);
            sem = nilai[i];
            nilai[i] = nilai[k];
            nilai[k] = sem;
        }
    }else{
        char wadah[100];
        int sem;
        for (int i = 0; i < jumlah-1; i++){
            int k = i;
            for (int j = i+1; j < jumlah; j++){
                if(kode[2] == 'A'){
                    if (nilai[k] > nilai[j])
                    {
                        k = j;
                    }
                }else{
                    if (nilai[k] < nilai[j]){
                        k = j;
                    }
                }
            }
            strcpy(wadah,nama[i]);
            strcpy(nama[i],nama[k]);
            strcpy(nama[k],wadah);
            sem = nilai[i];
            nilai[i] = nilai[k];
            nilai[k] = sem;
        }
    }
}