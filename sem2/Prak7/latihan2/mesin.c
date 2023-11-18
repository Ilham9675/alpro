#include "header.h"

void bubblesort(int jumlah, data_mh arr0fint[jumlah]){
    int cek;
    do{
        cek = 0;
        for(int i = 0;i < jumlah - 1;i++){// mengulangi dengan batasan jumlah
            if(arr0fint[i].nim > arr0fint[i+ 1].nim){// jika nilai yang lebih indek i lebih besar dari pada indek i+ 1 maka kan di tukar
                int temp = arr0fint[i].nim;
                arr0fint[i].nim = arr0fint[i+1].nim;
                arr0fint[i+1].nim = temp;

                char tem2[100];
                strcpy(tem2, arr0fint[i].nama);
                strcpy(arr0fint[i].nama, arr0fint[i+1].nama);
                strcpy(arr0fint[i + 1].nama,tem2);

                strcpy(tem2, arr0fint[i].jurusan);
                strcpy(arr0fint[i].jurusan, arr0fint[i+1].jurusan);
                strcpy(arr0fint[i + 1].jurusan,tem2);
                cek = 1;
            }
        }
    }while(cek == 1);// jika cek sam dengan 1 maka data belum terurut jika 0 maka akan terurut
}

int binarysearch(int n, data_mh arr0fint[n], int target){
    int found = 0;// untuk pengecekan jika data ketemu
    int i = 0,j = n - 1 ,mid;// indek pengulangan i dan j dan wadah mid

    while(i <= j && found == 0){// pengulangan dengan batasan jumlah dan pengecekan nilai yang di cari sudah ketemu atau tidak
        mid = (i + j) / 2;// untuk mencari nilai tengah
        printf("%d %d\n",arr0fint[mid].nim,target);
        if(arr0fint[mid].nim == target){// jika data nim indek min itu sama dengan target maka found 1 berati pengulangan berhenti dan indek di dama dengan mid 
            indek = mid;
            found = 1;
        }else{// jika tidak sama dengan maka kan masuk else
            if(arr0fint[mid].nim >= target){// jika nilai nim itu lebih besar sama dari target maka kan di ganti j nya
                j = mid - 1;
            }else{// kalau lebih kecil maka akan di ganti i
                i = mid + 1;
            }
        }
    }
    return found;
}