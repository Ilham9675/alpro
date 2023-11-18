
#include "header.h"


int main()
{
    int indek = 0;
    char sem[100][100];
    char data[100];
    int pengulangan = 0;
    int printah = 0;
    terpanjang1 = 8;
    terpanjang2 = 9;
    terpanjang3 = 5;
    tk tiket[100];
    strcpy(tiket[0].code,"####");
    strcpy(tiket[0].nama,"####");
    strcpy(tiket[0].harga,"####");
    do{
        resetkata();
        int error = 1;
        int i = 0;
        scanf(" %99[^\n]s",&data);
        start_kata(data);
        strcpy(sem[indek], get_kata());
        
        if(strcmp(sem[indek],"STOP") == 0){
            pengulangan = 1;
        }else{
            while(eop_kata(data) == 0){
                indek++;
                inc_kata(data);
                strcpy(sem[indek], get_kata());
                
            }
            indek++;
        }
        printah++;
    }while(pengulangan == 0);
    
    indek = 0;
    tk kata[100];
    for(int i = 0; i < printah; i++){
        
        if(strcmp(sem[indek],"JUAL") == 0){
            indek++;
            hapus_data(tiket,sem[indek],kata);
            indek++;
        }else if(strcmp(sem[indek],"BELI") == 0){
            indek++;
            nambah_data(tiket,sem[indek],sem[indek + 1],sem[indek + 2]);
            indek += 3;
        }else if(strcmp(sem[indek],"LIST") == 0){
            indek++;
            tampilkan(tiket);
        }
    }
    return 0;
}
