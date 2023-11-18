#include "header.h"
int main(){
    int jum1,jum2,jum3,jumlah_total;
    scanf("%d",&jum1);
    mh mahasiswa1[jum1];
    masukan(jum1,mahasiswa1);
    scanf("%d",&jum2);
    mh mahasiswa2[jum2];
    masukan(jum2,mahasiswa2);
    scanf("%d",&jum3);
    mh mahasiswa3[jum3];
    masukan(jum3,mahasiswa3);
    int gab = jum1 + jum2;
    mh gabung_mahasiswa[gab];
    int hasil = jum1 + jum2 + jum3;
    mh total_mahasiswa[hasil];

    insert_sort(jum1,mahasiswa1);
    insert_sort(jum2,mahasiswa2);
    insert_sort(jum3,mahasiswa3);

    merge(jum1,mahasiswa1,jum2, mahasiswa2,gab,gabung_mahasiswa);
    merge(jum3,mahasiswa3,gab, gabung_mahasiswa,hasil,total_mahasiswa);

    for(int i = 0; i < hasil; i++){
        printf("%d %s\n",total_mahasiswa[i].nim,total_mahasiswa[i].nama);
    }

    return 0;
}