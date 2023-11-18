
#include <stdio.h>
#include <string.h>

typedef struct
{
    char nama[50],code1[50],code2[50];
}mh;

typedef struct
{
    char code[50],nama[50];
}jur;

typedef struct
{
    char code[50],nama[50];
}fal;


int main()
{
    int jum1 = 0,jum2 = 0,jum3 = 0; // counter untuk jumlah data, khususnya data laptop


    mh mahasiswa[50]; // data laptop max 50
    jur jurusan[50];
    fal fakultas[50];


    FILE *fmahasiswa;
    FILE *fjurusan;
    FILE *ffakultas;
    fmahasiswa = fopen("mahasiswa.txt", "r");
    fjurusan = fopen("jurusan.txt", "r");
    ffakultas = fopen("fakultas.txt", "r"); // buka file dengan mode read
    fscanf(fmahasiswa, "%s %s %s", 
           mahasiswa[jum1].nama,mahasiswa[jum1].code1,mahasiswa[jum1].code2);
    
    fscanf(fmahasiswa, "%s %s", 
           mahasiswa[jum2].nama,mahasiswa[jum2].code1,mahasiswa[jum2].code2);

    fscanf(fmahasiswa, "%s %s", 
           mahasiswa[jum3].nama,mahasiswa[jum3].code1,mahasiswa[jum3].code2);
    
    // cek kolom id yang baru discan tadi apakah sama dengan -1?
    if (strcmp(mahasiswa[jum1].nama, "####") == 0)
    {
        // jika ya maka data yang tadi discan merupakan EOF
        printf("File Kosong");
    }
    else
    {
        // kalau tidak, berarti bukan EOF

    
        // ketika kolom nama bukan EOF lakukan:
        while (strcmp(mahasiswa[n].nama, "####") != 0)
        {
             n1++; // maju ke penampung data berikutnya
            fscanf(fmahasiswa, "%s %s %s", 
            mahasiswa[n].nama,mahasiswa[n].code1,mahasiswa[n].code2);
            
        }


        // tampilkan ke layar hasil readnya
        printf("Data Laptop : %d\n", n);
        for (int i = 0; i < n1; i++)
        {
            printf("%s %s %s", 
           mahasiswa[i].nama,mahasiswa[i].code1,mahasiswa[i].code2);
        }
    }


    // "tutup file"
    fclose(fmahasiswa);


    return 0;
}
