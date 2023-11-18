#include <stdio.h>
#include <string.h>

typedef struct{
    char nama[100];
    int nim;
}mh;



void merge(int n1,mh mahasiswa1[n1],int n2,mh mahasiswa2[n2],int jumhasil,mh hasil[jumhasil])
{
    int i1 = 0, i2 = 0,i10 = 0; 
    while ((i1 < n1) && (i2 < n2))
    {
        if (strcmp(mahasiswa1[i1].nama,mahasiswa2[i2].nama) >= 0)
        {
            strcpy(hasil[i10].nama,mahasiswa2[i2].nama);
            hasil[i10].nim = mahasiswa2[i2].nim;
            i10++;
            i2++;
        }
        else {
            strcpy(hasil[i10].nama,mahasiswa1[i1].nama);
            hasil[i10].nim = mahasiswa1[i1].nim;
            i10++;
            i1++;
        }
    }
    
    while(i1 < n1)
    {
        strcpy(hasil[i10].nama,mahasiswa1[i1].nama);
        hasil[i10].nim=mahasiswa1[i1].nim;
        i10++;
        i1++;
    }
    while(i2 < n2)
    {
        strcpy(hasil[i10].nama,mahasiswa2[i2].nama);
        hasil[i10].nim = mahasiswa2[i2].nim;
        i10++;
        i2++;
    }
    
}
void insert_sort(int jumlah,mh mahasiswa[jumlah]){
    for (int i = 1; i < jumlah; i++)
    {
        char key[100];
        strcpy(key,mahasiswa[i].nama);
        int sem = mahasiswa[i].nim;
        int j = i - 1;
        while (j >= 0 && strcmp(key,mahasiswa[j].nama) < 0)
        {
            strcpy(mahasiswa[j + 1].nama,mahasiswa[j].nama);
            mahasiswa[j + 1].nim = mahasiswa[j].nim;
            j--;
        }
        strcpy(mahasiswa[j + 1].nama,key);
        mahasiswa[j + 1].nim = sem;
    }
}
void masukan(int jumlah,mh mahasiswa[jumlah]){
    for(int i = 0;i < jumlah;i++){
        scanf("%s %d",mahasiswa[i].nama,&mahasiswa[i].nim);
    }
}

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