/*
Saya ilham akbar[2201017] mengerjakan soal
eval dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include "header.h"


int main()
{
    // inisialisasi nilai
    int indek = 0;
    char sem[100][100];
    char data[100];
    int pengulangan = 0;
    int printah = 0;
    tk tiket[100];
    // untuk menjadi batasan awal di dalam sebuah data struck
    strcpy(tiket[0].code,"####");
    strcpy(tiket[0].nama,"####");
    strcpy(tiket[0].harga,"####");
    // pemasukan perintah yang akan di jalankan nanti
    do{
        int error = 1;
        int i = 0;
        scanf(" %99[^\n]s",&data);// pemasukan data  sari user 
        start_kata(data);// star data 
        strcpy(sem[indek], get_kata());// memindahkan nilai
        
        if(strcmp(sem[indek],"STOP") == 0){// jika ada kata stop maka akan berhenti mengambil nilai
            pengulangan = 1;
        }else{
            while(eop_kata(data) == 0){// mengembil kata terus sampai ujuang nilai
                indek++;
                inc_kata(data);
                strcpy(sem[indek], get_kata());// memindahkan nilai
                
            }
            indek++;
        }
        printah++;// penambahkan nilai 
        resetkata();// merestar nilai
    }while(pengulangan == 0);
    
    indek = 0;
    tk kata[100];
    for(int i = 0; i < printah; i++){// pengulangan dengan batasan perintah
        
        if(strcmp(sem[indek],"JUAL") == 0){// jika sem itu sama dengan jual makan akan masuk ke program ini
            // memambahkan dua indek karena memeruka 2 masukan yaitu tau perintah satu data
            indek++;
            hapus_data(tiket,sem[indek],kata);
            
            indek++;
        }else if(strcmp(sem[indek],"BELI") == 0){// jika sem itu sama dengan beli makan akan masuk ke program ini
            // menambahkan indek 4 karena memerukan masukan 4 yaitu satu perintah 3 data
            indek++;
            nambah_data(tiket,sem[indek],sem[indek + 1],sem[indek + 2]);
            indek += 3;
        }else if(strcmp(sem[indek],"LIST") == 0){// jika sem itu sama dengan list makan akan masuk ke program ini
            // menambahkan indek satu karena hanya ada satu masukan saja dan menampilkan data
            tampilkan(tiket);
            indek++;
        }
    }
    return 0;
}
