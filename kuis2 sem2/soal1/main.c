/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal kuis 2 dalam mata kuliah algoritma dan pemlograman 2
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
#include "header.h"
int main(){
    int jumlah;// wadah untuk jumlah
    scanf("%d",&jumlah);// masukan untuk jumlah
    pegawai pg[jumlah];// inisialisasi bungkusan pengawai
    // masukan data pegawai dari user
    for(int i=0;i<jumlah;i++){
        scanf("%s %s %s %lld %lld",pg[i].nomer,pg[i].nama,pg[i].jabatan,&pg[i].gajip,&pg[i].tunjangan);
    }
    char urutan[20];// wadah untuk metode pengurutan apa yang akan di pakai
    scanf("%s",&urutan);// masukan metode pengurutan dari user
    long long dicari;// wadah nilai yang di cari
    scanf("%lld",&dicari);// masukan nilai yang di cari
    sorting(jumlah,pg,urutan);// melakukan sorting atau pengurutan
    binarysearch1(jumlah, pg, dicari,urutan);// mencari data yang di cari
    if(strcmp(urutan,"gaji") == 0){// jika yang di cari itu erdasarkan gaji maka akan masuk ke dalam pencarian gaji
        printf("\ntertinggi:\n");
        printf("%s %s %s %lld %lld\n",pg[jumlah - 1].nomer,pg[jumlah - 1].nama,pg[jumlah - 1].jabatan,pg[jumlah - 1].gajip,pg[jumlah - 1].tunjangan);// menampilkan data tertinggi atau nilai tertinggi
        printf("\nterendah:\n");
        printf("%s %s %s %lld %lld\n",pg[0].nomer,pg[0].nama,pg[0].jabatan,pg[0].gajip,pg[0].tunjangan);// menampilkan data terendah atau nilai terendah
    }else{// jika tidak maka kan masuk ke pencarian pendapatan
        printf("\ntertinggi:\n");
        printf("%s %s %s %lld %lld\n",pg[0].nomer,pg[0].nama,pg[0].jabatan,pg[0].gajip,pg[0].tunjangan);// menampilkan data tertinggi atau nilai tertinggi
        printf("\nterendah:\n");
        printf("%s %s %s %lld %lld\n",pg[jumlah - 1].nomer,pg[jumlah - 1].nama,pg[jumlah - 1].jabatan,pg[jumlah - 1].gajip,pg[jumlah - 1].tunjangan);// menampilkan data terendah atau nilai terendah
    }
    
    return 0;
}