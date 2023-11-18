/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal
TP7 dalam mata kuliah algoritma dan pemlograman 2
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
#include "header.h"


int kemungkinan(int jumlah,total kes[jumlah*jumlah*jumlah],atom bom[jumlah]){
    int a = 0;
    // mencari kombinasi yang dari 3 elemen dengn menggunkan 3 for 
    for(int i=0; i<jumlah; i++){
        for(int j=i + 1; j<jumlah; j++){
            for(int k=j + 1; k<jumlah; k++){
                strcpy(kes[a].nama1,bom[i].nama);// masukan nama senyawa pertama
                strcpy(kes[a].nama2,bom[j].nama);// masukan nama senyawa kedua
                strcpy(kes[a].nama3,bom[k].nama);// masukan nama senyawa ketiga
                kes[a].totalnoatom = bom[i].nomeratom + bom[j].nomeratom + bom[k].nomeratom;// masukan jumlah no atom
                kes[a].totalpower = bom[i].power + bom[j].power + bom[k].power;// mauskan jumlah power
                kes[a].rasio = (double)kes[a].totalpower / (double)kes[a].totalnoatom;// masukan untuk radio 
                a++;
            }
        }
    }
    return a;
}

void sorting(int a,total kes[]){
    int test = 0,temp;
    
    char temp3[100];
    do{
        test = 0;
        for (int i = 0; i < a - 1; i++)
        {
            // untuk mencari nilai yang tidak sesuai tempatnya
            if(kes[i].rasio > kes[i + 1].rasio){
                //memindahkan nilai dari satu tempat ke tempat lain
                strcpy(temp3,kes[i].nama1);
                strcpy(kes[i].nama1,kes[i + 1].nama1);
                strcpy(kes[i + 1].nama1,temp3);

                strcpy(temp3,kes[i].nama2);
                strcpy(kes[i].nama2,kes[i + 1].nama2);
                strcpy(kes[i + 1].nama2,temp3);

                strcpy(temp3,kes[i].nama3);
                strcpy(kes[i].nama3,kes[i + 1].nama3);
                strcpy(kes[i + 1].nama3,temp3);

                double wadah = kes[i].rasio;
                kes[i].rasio = kes[i + 1].rasio;
                kes[i + 1].rasio = wadah;
                

                temp = kes[i].totalnoatom;
                kes[i].totalnoatom = kes[i+1].totalnoatom;
                kes[i+1].totalnoatom = temp;

                temp = kes[i].totalpower;
                kes[i].totalpower = kes[i+1].totalpower;
                kes[i+1].totalpower = temp;
                test = 1;
            }
        }
        
    }while(test == 1);// jika sudah sesuai tempatnya maka akan bethenti pengulanyanya
}
void sequentialsearch(int n, total kes[]){
    int i = 0;
    int nomer = 0;

    while(i < n){// pengilangan sejumlah n
        if(kes[i].rasio >= (double)1.5){// jika nilai rasio idek i itu lebih besar sama dengan 1.5 maka aka di tampilkan 
            nomer++;
            printf("No: %d\n",nomer);
            printf("{%s, %s, %s}\n",kes[i].nama1,kes[i].nama2,kes[i].nama3);
            printf("TotalNoAtom: %d\n",kes[i].totalnoatom);
            printf("TotalPerforma: %d\n",kes[i].totalpower);
            printf("Rasio: %.2f\n",kes[i].rasio);
            
        }
        i++;
    }
}

int binarysearch(int n, total kes[]){
    int found = 0;
    int i = 0,j = n -1 ,mid;
    while(i <= j && found == 0){// pengulangan  dengan indikator pemberhentian jika i lebih besar dan found sama dengan satu
        mid = (i + j) / 2;
        if(kes[mid].rasio == (double)3.00){// jika rasio indek i sama dengan 3.0 maka akan masuk ke dalam if dan akan memberhentikan pelurangan
            found = 1;
        }else{// jika bukan 3.0 maka akan masuk ke dalam elase dan ada 2 pilihan
            if(kes[mid].rasio > (double)3.00){// jika rasio nya lebih besar maka akan jnya yang akan di ganti
                j = mid - 1;
            }else{// dan sebaliknya jika  rasionya lebih kecil maka i nya yang aka di ganti
                i = mid + 1;
            }
        }
    }
    return found;
}