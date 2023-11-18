#include <stdio.h>
typedef struct{
    int nim,nilai;
    char kelas;
}data;
int main(){
    int jumlah;
    scanf("%d",&jumlah);
    data siswa[jumlah];
    int index = 0;
    while(index < jumlah){
        scanf("%d %c %d",&siswa[index].nim,&siswa[index].kelas,&siswa[index].nilai);
        index++;
    }
    index = 0;
    int ketemu = 0;
    while(ketemu == 0 && index < jumlah){
        if(siswa[index].nilai == 100){
            ketemu = 1;
        }
        index++;
    }
    if(ketemu == 1){
        printf("Ada orang istimewa\n");
    }else{
        printf("Tidak ada orang istimewa\n");
    }
    return 0;
}