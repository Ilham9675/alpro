#include "header.h"

int konsonan(char kata,int cek){
    if(kata != 'a' && kata != 'i' && kata != 'u' && kata != 'e' && kata != 'o'){
        cek++;
    }
    return cek;
}

int vokal(char kata,int cek){
    if(kata == 'a' || kata == 'i' || kata == 'u' || kata == 'e' || kata == 'o'){
        cek++;
    }
    return cek;
}