#include "header.h"

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