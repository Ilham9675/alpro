#include <stdio.h>
#include <string.h>

typedef struct
{
    char nama[101];
    int health,attack,defense;
    char jurus[100];
}naruto;
typedef struct
{
    char kode;
    char namatarget[100];
    char namapenyerang[100];
}pergerakan;
void scan_naruto(naruto *pok){  
    scanf("%s %d %d %d %s", &(*pok).nama, &(*pok).health, &(*pok).attack, &(*pok).defense, &(*pok).jurus);
}
int main(){
    naruto pok[4];
    char musuh[50];
    for(int a = 0;a < 4;a++){
        if(a == 2){
            scanf("%s",musuh);
        }
        scan_naruto(&pok[a]);
    }
    int aksi;
    scanf("%d",&aksi);
    pergerakan gerak[aksi];
    for(int a = 0;a < aksi;a++){
        scanf(" %c",&gerak[a].kode);
        if(gerak[a].kode == 'a'){
            scanf("%s",gerak[a].namapenyerang);
            scanf("%s",gerak[a].namatarget);
        }else{
            scanf("%s",gerak[a].namatarget);
        }
    }
    printf("Exam Begins!\n");
    

    for(int a = 0;a < aksi;a++){
        int indekpenyerang = 0;
        int indektarget = 0;
        if(gerak[a].kode == 'a'){
            while(strcmp(pok[indekpenyerang].nama,gerak[a].namapenyerang) != 0){
                indekpenyerang++;
            }
            while(strcmp(pok[indektarget].nama,gerak[a].namatarget) != 0){
                indektarget++;
            }
            int damage = pok[indekpenyerang].attack - pok[indektarget].defense;
            pok[indektarget].health -= damage;
            if(pok[indektarget].health < 0){
                pok[indektarget].health = 0;
            }
            printf("%s received %d damage from %s,",pok[indektarget].nama,damage,pok[indekpenyerang].nama);
            printf(" his/her current health is %d\n",pok[indektarget].health);
        }
        if(gerak[a].kode == 'd'){
            while(strcmp(pok[indektarget].nama,gerak[a].namatarget) != 0){
                indektarget++;
            }
            pok[indektarget].defense += 3;
            printf("%s increased his/her own defense by 3,",gerak[a].namatarget);
            printf(" it is now %d\n",pok[indektarget].defense);
        }
        if(gerak[a].kode == 'h'){
            while(strcmp(pok[indektarget].nama,gerak[a].namatarget) != 0){
                indektarget++;
            }
            pok[indektarget].health += 10;
            printf("%s used heal to recover 10 health,",gerak[a].namatarget);
            printf(" his/her current health is %d\n",pok[indektarget].health);
        }
    }
    printf("\nExam Result:\n");
    printf("- Konoha Village\n");
    for(int a = 0;a < 4;a++){
        if(a == 2){
            printf("- %s Village\n",musuh);
        }
        printf("%s %d %d %d %s\n",pok[a].nama, pok[a].health, pok[a].attack, pok[a].defense, pok[a].jurus);
    }
    if(pok[0].health + pok[1].health > pok[2].health + pok[3].health){
        printf("\n>>> Konoha Village Passed <<<\n");
    }else if(pok[0].health + pok[1].health < pok[2].health + pok[3].health){
        printf("\n>>> Suna Village Passed <<<\n",musuh);
    }else{
        printf("\n>>> Both Village Passed <<<\n");
    }
    return 0;
}