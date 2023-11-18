#include "header.h"

int main(){
    pokemon pok[4];
    char musuh[50];
    for(int a = 0;a < 4;a++){
        if(a == 2){
            scanf("%s",musuh);
        }
        scan_pokemon(&pok[a]);
    }
    int aksi;
    scanf("%d",&aksi);
    pergerakan gerak[aksi];
    for(int a = 0;a < aksi;a++){
        scanf(" %c",&gerak[a].kode);
        if(gerak[a].kode == 'A'){
            scanf("%s",gerak[a].namapenyerang);
            scanf("%s",gerak[a].namatarget);
        }else{
            scanf("%s",gerak[a].namatarget);
        }
    }
    printf("Battle Begins!\n");
    

    for(int a = 0;a < aksi;a++){
        int indekpenyerang = 0;
        int indektarget = 0;
        if(gerak[a].kode == 'A'){
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
            printf("%s dealt %d damage to %s",pok[indekpenyerang].nama,damage,pok[indektarget].nama);
            printf(", its health is now %d\n",pok[indektarget].health);
        }
        if(gerak[a].kode == 'D'){
            while(strcmp(pok[indektarget].nama,gerak[a].namatarget) != 0){
                indektarget++;
            }
            pok[indektarget].defense += 2;
            printf("%s defense is increased by 2,",gerak[a].namatarget);
            printf(" its defense is now %d\n",pok[indektarget].defense);
        }
        if(gerak[a].kode == 'H'){
            while(strcmp(pok[indektarget].nama,gerak[a].namatarget) != 0){
                indektarget++;
            }
            pok[indektarget].health += 5;
            printf("%s recovered 5 health,",gerak[a].namatarget);
            printf(" its health is now %d\n",pok[indektarget].health);
        }
    }
    printf("\nBattle Result:\n");
    printf("- Team Ash\n");
    for(int a = 0;a < 4;a++){
        if(a == 2){
            printf("- Team %s\n",musuh);
        }
        printf("%s %d %d %d %s\n",pok[a].nama, pok[a].health, pok[a].attack, pok[a].defense, pok[a].elemen);
    }
    if(pok[0].health + pok[1].health > pok[2].health + pok[3].health){
        printf("\n!!! Team Ash Won !!!\n");
    }else if(pok[0].health + pok[1].health < pok[2].health + pok[3].health){
        printf("\n!!! Team %s Won !!!\n",musuh);
    }else{    
        printf("\n!!! It's a Tie !!!\n");
    }
    return 0;
}