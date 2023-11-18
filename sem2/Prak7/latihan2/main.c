#include "header.h"

int main(){
    int jumlah;// wadah jumlah nilai
    scanf("%d",&jumlah);// memasukan nilai jumlah dari user
    data_mh mahasiswa[jumlah];
    int value[jumlah];// wadah untuk value tau indikator jika nilai 1 maka itu yang di cari kalau nilai 0 maka nilai tersebuat bukan yang di cari
    for(int i=0; i<jumlah; i++){// pengulangan dengan batasan jumlah 
        scanf("%d %s %s",&mahasiswa[i].nim,&mahasiswa[i].nama,&mahasiswa[i].jurusan);// masukan dari user untuk nilai
    }
    int target;// wadah untuk target yang di cari
    scanf("%d",&target);// masukan dari user untuk nilai yang di cari
    bubblesort(jumlah, mahasiswa);// mengurutkan data
    if(binarysearch(jumlah,mahasiswa, target) == 0){// jika keluaran sam dengan nol maka data yang di cari tidak ada
        printf("data tidak ada");
    }else{// jika satu maka data nya ada dan di tampilkan 
        printf("%d\n",mahasiswa[indek].nim);
        printf("%s\n",mahasiswa[indek].nama);
        printf("%s\n",mahasiswa[indek].jurusan);
    }
    return 0;
}