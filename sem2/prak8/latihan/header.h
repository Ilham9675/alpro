#include <stdio.h>
#include <string.h>

typedef struct
{
    char nama[50],code1[50],code2[50];
}mh;

typedef struct
{
    char code[50],nama[50];
}data;

typedef struct
{
    char code[50],nama[50];
}fal;

void masukan_data1(mh mahasiswa[50], char lokasi[100]);
void masukan_data2(data jurusan[50], char lokasi[100]);
int sequentialsearch(data db[50], char target[100]);