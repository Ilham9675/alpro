#include <stdio.h>
#include <string.h>

typedef struct
{
    char nama[101];
    int health,attack,defense;
    char elemen[100];
}pokemon;
typedef struct
{
    char kode;
    char namatarget[100];
    char namapenyerang[100];
}pergerakan;
void scan_pokemon(pokemon *pok);