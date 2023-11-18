#include "header.h"

int main(){
    int jumlah;// wadah jumlah nilai
    scanf("%d",&jumlah);// memasukan nilai jumlah dari user
    int arr[jumlah];// wadh untuk nilai
    int value[jumlah];// wadah untuk value tau indikator jika nilai 1 maka itu yang di cari kalau nilai 0 maka nilai tersebuat bukan yang di cari
    for(int i=0; i<jumlah; i++){// pengulangan dengan batasan jumlah 
        scanf("%d",&arr[i]);// masukan dari user untuk nilai
    }
    int target;// wadah untuk target yang di cari
    scanf("%d",&target);// masukan dari user untuk nilai yang di cari
    sequentialsearch( jumlah, arr, value,  target);// mencari nilai
    int cek = 0;// wadah untuk pengecekan jika sampai akhir masih 0 maka di dalam array tersebut tidak terdapat nilai yang di cari
    for(int i=0; i<jumlah; i++){// pengulangan dengan batasan jumlah 
        // penampilan data yang di cari 
        if((value[i] == 1) && cek == 0){
            printf("%d",arr[i]);
            cek++;
        }else if(value[i] == 1){
            printf(" %d",arr[i]);
            cek++;
        }
    }
    if(cek == 0){// jika data yang di cari tidak ada di array maka kan menampilkan "tidak ditemukan"
        printf("Tidak ditemukan");
    }
    printf("\n");
    return 0;
}