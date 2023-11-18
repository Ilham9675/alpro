#include "header.h"


void masukan_data1(mh mahasiswa[50], char lokasi[100]){
    int jumlah = 0;
    FILE *fmahasiswa;
    fmahasiswa = fopen(lokasi, "r");
    fscanf(fmahasiswa, "%s %s %s", 
           mahasiswa[jumlah].nama,mahasiswa[jumlah].code1,mahasiswa[jumlah].code2);
    while (strcmp(mahasiswa[jumlah].nama, "####") != 0)
        {
            jumlah++; // maju ke penampung data berikutnya
            fscanf(fmahasiswa, "%s %s %s", 
            mahasiswa[jumlah].nama,mahasiswa[jumlah].code1,mahasiswa[jumlah].code2);
            
        }
    fclose(fmahasiswa);
}
void masukan_data2(data atribut[50], char lokasi[100]){
    int jumlah = 0;
    FILE *fatribut;
    fatribut = fopen(lokasi, "r");
    fscanf(fatribut, "%s %s", 
    atribut[jumlah].code,atribut[jumlah].nama);
    while (strcmp(atribut[jumlah].nama, "####") != 0)
        {
            jumlah++; // maju ke penampung data berikutnya
            fscanf(fatribut, "%s %s", 
            atribut[jumlah].code,atribut[jumlah].nama);
            
        }
    fclose(fatribut);
}

int sequentialsearch(data db[50], char target[100]){
    int found = 0;
    int i = 0;

    while((strcmp(db[i].nama,"####") != 0 ) && (found == 0)){
        if(strcmp(target, db[i].code) == 0){
            found = 1;
        }else{
            i++;
        }
    }
    return i;
}
