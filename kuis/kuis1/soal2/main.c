/*
Saya ilham akbar[2201017] mengerjakan soal
kuis 1 dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include "header.h"

int main(){
    int angkat,selisih,jarak;// wadah untuk angka selish yang di tambah dan jaran=k nya ada berapa angka ke kiri dan ke kanan
    scanf("%d",&angkat);// mausukan angka dari user 
    scanf("%d",&selisih);// masukan selisih dari user
    scanf("%d",&jarak);// masukan jarak dari user
    mencari(angkat - (selisih * jarak),selisih,jarak * 2,jarak);// untuk mencari angka yang di inginkan angka itu di kurangi sampai batas minimul dan jarak di kali dua karena jarak di hitung jiri dan kanan
    return 0;
}