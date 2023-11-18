#include "header.h"

void hasil(int s1, int s2){
    if(s1 == 0 && s2 == 0){
        printf(" is a Jedi.\n");
    }else{
        printf(" is a Sith.\n");
    }
}
int move(int sementara,int pindah){
    if(sementara >= 65 && sementara <= 90){
        sementara += pindah;
        if(sementara > 90){
            sementara -= 26;
        }
    }else if(sementara >= 97 && sementara <= 122){
        sementara += pindah;
        if(sementara > 122){
            sementara -= 26;
        }
    }
    return sementara;
}