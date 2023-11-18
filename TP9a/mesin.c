#include "header.h"

void scan_pokemon(pokemon *pok){  
    scanf("%s %d %d %d %s", &(*pok).nama, &(*pok).health, &(*pok).attack, &(*pok).defense, &(*pok).elemen);
}