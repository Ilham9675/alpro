#include "header.h"

int main()
{
    list_table table[100];
    table_data2 tb[100];
    table_data2 hasil_akhir[100];
    table_data br[100];
    table_data tg[100];
    int indek = 0;
    char sem[100];
    char data[100];
    int pengulangan = 0;
    
    // pembukaan atau awalan program
    system("cls");
    printf("Wilujeng Sumping di DBMS UMKM Ilham Akbar\n");
    printf("Versi 1.0\n\n");
    // pemasukan data ke dalam struck
    pemasukan_data_table_pelanggan(tb, "file/fpelanggan.dat");
    pemasukan_data_table(br, "file/fbarang.dat");
    pemasukan_data_table(tg, "file/fwaktu.dat");
    do{
        
        int error = 1;
        int i = 0;
        printf("dbms ilham> ");
        /* scanf(" %99[^\n]s",&data); */
        start_karakter(data);
        while(eop_karakter(data) == 0){
            inc_karakter(data);
            if(data[indeks_karakter] == '\n'){
                data[indeks_karakter] = ' ';
                printf("--> ");
            }
        }
        
        start_kata(data);
        persamaan(ckata);
        strcpy(sem, get_kata()); 
        
        
        if(strcmp(sem,"isi") == 0){
            char sem_kata[100][100];
            inc_kata(data);
            persamaan(ckata);
            strcpy(sem, get_kata()); 
            if(strcmp(sem,"ubah") == 0){
                inc_kata(data);
                strcpy(sem, get_kata());
                if(strcmp(sem,"fpelanggan") == 0){
                    inc_kata(data);
                    indek = 0;
                    strcpy(sem_kata[indek],get_kata());
                    indek++;
                    while (eop_kata(data) == 0){
                        inc_kata(data);
                        strcpy(sem_kata[indek], get_kata());
                        indek++;
                    }
                    if(indek < 4){
                        printf("\nerror masukan yang di input kurang\n");
                    }else if(indek == 4){
                        if(pengecekan_data2(tb,sem_kata[0]) == 0){
                            if(pengecekan_data(br,sem_kata[2]) == 1){
                                if(pengecekan_data(tg,sem_kata[3]) == 1){
                                    mengisi_data_pelanggan(tb,"file/fpelanggan.dat",sem_kata[0],sem_kata[1],sem_kata[2],sem_kata[3]);
                                    pemasukan_data_table_pelanggan(tb, "file/fpelanggan.dat");
                                    printf("\nPelanggan setia Terima Kasih.\n\n");
                                    tampilka_table_empat_kolom(tb,"Code","nama pelanggan","Code Barang","Code Waktu");
                                }else{
                                    printf("%s code yang di masukan tidak ada di tabel fwaktu!!!!\nerrror\n",sem_kata[3]);
                                }
                            }else{
                                printf("%s code yang di masukan tidak ada di tabel fbarang!!!!\nerrror\n",sem_kata[2]);
                            }
                        }else{
                            if(pengecekan_data(br,sem_kata[2]) == 1){
                                if(pengecekan_data(tg,sem_kata[3]) == 1){
                                    update_data2(tb,"file/fpelanggan.dat",sem_kata[0],sem_kata[1],sem_kata[2],sem_kata[3]);
                                    pemasukan_data_table_pelanggan(tb, "file/fpelanggan.dat");
                                    printf("\nPelanggan setia Terima Kasih.\n\n");
                                    tampilka_table_empat_kolom(tb,"Code","nama pelanggan","Code Barang","Code Waktu");
                                }else{
                                    printf("%s code yang di masukan tidak ada di tabel fbarang!!!!\nerrror\n",sem_kata[3]);
                                }
                            }else{
                                printf("%s code yang di masukan tidak ada di tabel fbarang!!!!\nerrror\n",sem_kata[2]);
                            }
                        }
                    }else{
                        printf("data yang di masukan melebihi batas\n");
                    }
                }else if(strcmp(sem,"fbarang") == 0){
                    inc_kata(data);
                    indek = 0;
                    strcpy(sem_kata[indek],get_kata());
                    indek++;
                    while (eop_kata(data) == 0){
                        inc_kata(data);
                        strcpy(sem_kata[indek], get_kata());
                        indek++;

                    }
                    if(indek < 2){
                        printf("\nerror masukan yang di input kurang\n");
                    }else if(indek == 2){
                        int cek = pengecekan_data( br,sem_kata[0]);
                        if(cek == 0){
                            mengisi_data(br,"file/fbarang.dat",sem_kata[0],sem_kata[1]);
                            pemasukan_data_table(br, "file/fbarang.dat");
                            printf("\nPelanggan setia Terima Kasih.\n\n");
                            tampilka_table(br,"Code","nama barang");
                        }else{
                            update_data(br,"file/fbarang.dat",sem_kata[0],sem_kata[1]);
                            pemasukan_data_table(br, "file/fbarang.dat");
                            printf("\nPelanggan setia Terima Kasih.\n\n");
                            tampilka_table(br,"Code","nama barang");
                        }
                    }else{
                        printf("data yang di masukan melebihi batas\n");
                    }
                }else if(strcmp(sem,"fwaktu") == 0){
                    inc_kata(data);
                    indek = 0;
                    strcpy(sem_kata[indek],get_kata());
                    indek++;
                    while (eop_kata(data) == 0){
                        inc_kata(data);
                        strcpy(sem_kata[indek], get_kata());
                        indek++;
                    }
                    if(indek < 2){
                        printf("\nerror masukan yang di input kurang\n");
                    }else if(indek == 2){
                        int cek = pengecekan_data( tg,sem_kata[0]);
                        if(cek == 0){
                            mengisi_data(tg,"file/fwaktu.dat",sem_kata[0],sem_kata[1]);
                            pemasukan_data_table(tg, "file/fwaktu.dat");
                            printf("\nPelanggan setia Terima Kasih.\n\n");
                            tampilka_table(tg,"Code","nama waktu");
                        }else{
                            update_data(tg,"file/fwaktu.dat",sem_kata[0],sem_kata[1]);
                            pemasukan_data_table(tg, "file/fwaktu.dat");
                            printf("\nPelanggan setia Terima Kasih.\n\n");
                            tampilka_table(tg,"Code","nama waktu");
                        }
                    }else{
                        printf("data yang di masukan melebihi batas\n");
                    }
                }else{
                    printf("error!!!!\n");
                    printf("salah memasukan perintah!!!!\n");
                }
            }else if(strcmp(sem,"ubah") != 0){
                if(strcmp(sem,"fpelanggan") == 0){
                    inc_kata(data);
                    indek = 0;
                    strcpy(sem_kata[indek],get_kata());
                    indek++;
                    while (eop_kata(data) == 0){
                        inc_kata(data);
                        strcpy(sem_kata[indek], get_kata());
                        indek++;

                    }
                    if(indek < 4){
                        printf("\nerror masukan yang di input kurang\n");
                    }else if(indek == 4){
                        if(pengecekan_data2( tb,sem_kata[0]) == 0){
                            if(pengecekan_data(br,sem_kata[2]) == 1){
                                if(pengecekan_data(tg,sem_kata[3]) == 1){
                                    mengisi_data_pelanggan(tb,"file/fpelanggan.dat",sem_kata[0],sem_kata[1],sem_kata[2],sem_kata[3]);
                                    pemasukan_data_table_pelanggan(tb, "file/fpelanggan.dat");
                                    printf("\nPelanggan setia Terima Kasih.\n\n");
                                    tampilka_table_empat_kolom(tb,"Code","nama pelanggan","Code Barang","Code Waktu");
                                }else{
                                    printf("%s code yang di masukan tidak ada di tabel fbarang!!!!\nerrror\n",sem_kata[3]);
                                }
                            }else{
                                printf("%s code yang di masukan tidak ada di tabel fbarang!!!!\nerrror\n",sem_kata[2]);
                            }
                        }else{
                            printf("warning code %s sudah ada di dalam data!!!!\n",sem_kata[0]);
                            printf("data gagal di masukan\n");
                        }
                    }else{
                        printf("data yang di masukan melebihi batas\n");
                    }
                }else if(strcmp(sem,"fbarang") == 0){
                    inc_kata(data);
                    indek = 0;
                    strcpy(sem_kata[indek],get_kata());
                    indek++;
                    while (eop_kata(data) == 0){
                        inc_kata(data);
                        strcpy(sem_kata[indek], get_kata());
                        indek++;

                    }
                    if(indek < 2){
                        printf("\nerror masukan yang di input kurang\n");
                    }else if(indek == 2){
                        int cek = pengecekan_data( br,sem_kata[0]);
                        if(cek == 0){
                            mengisi_data(br,"file/fbarang.dat",sem_kata[0],sem_kata[1]);
                            pemasukan_data_table(br, "file/fbarang.dat");
                            printf("\nPelanggan setia Terima Kasih.\n\n");
                            tampilka_table(br,"Code","nama barang");
                        }else{
                            printf("warning code %s sudah ada di dalam data!!!!\n",sem_kata[0]);
                            printf("data gagal di masukan\n");
                        }
                    }else{
                        printf("data yang di masukan melebihi batas\n");
                    }
                }else if(strcmp(sem,"fwaktu") == 0){
                    inc_kata(data);
                    indek = 0;
                    strcpy(sem_kata[indek],get_kata());
                    indek++;
                    while (eop_kata(data) == 0){
                        inc_kata(data);
                        strcpy(sem_kata[indek], get_kata());
                        indek++;

                    }
                    if(indek < 2){
                        printf("\nerror masukan yang di input kurang\n");
                    }else if(indek == 2){
                        int cek = pengecekan_data( tg,sem_kata[0]);
                        if(cek == 0){
                            mengisi_data(tg,"file/fwaktu.dat",sem_kata[0],sem_kata[1]);
                            pemasukan_data_table(tg, "file/fwaktu.dat");
                            printf("\nPelanggan setia Terima Kasih.\n\n");
                            tampilka_table(tg,"Code","nama waktu");
                        }else{
                            printf("warning code %s sudah ada di dalam data!!!!\n",sem_kata[0]);
                            printf("data gagal di masukan\n");
                        }
                    }else{
                        printf("data yang di masukan melebihi batas\n");
                    }
                }else{
                    printf("error!!!!\n");
                    printf("salah memasukan perintah!!!!\n");
                }

            }
        }else if(strcmp(sem,"ubah") == 0){
            char sem_kata[100][100];
            inc_kata(data);
            strcpy(sem, get_kata()); 
            if(strcmp(sem,"fpelanggan") == 0){
                inc_kata(data);
                indek = 0;
                strcpy(sem_kata[indek],get_kata());
                indek++;
                while (eop_kata(data) == 0){
                    inc_kata(data);
                    strcpy(sem_kata[indek], get_kata());
                    indek++;
                }
                if(indek < 4){
                    printf("\nerror masukan yang di input kurang\n");
                }else if(indek == 4){
                    if(pengecekan_data2( tb,sem_kata[0]) == 0){
                        mengisi_data_pelanggan(tb,"file/fpelanggan.dat",sem_kata[0],sem_kata[1],sem_kata[2],sem_kata[3]);
                        pemasukan_data_table_pelanggan(tb, "file/fpelanggan.dat");
                        printf("\nPelanggan setia Terima Kasih.\n\n");
                        tampilka_table_empat_kolom(tb,"Code","nama pelanggan","Code Barang","Code Waktu");
                    }else{
                        update_data2(tb,"file/fpelanggan.dat",sem_kata[0],sem_kata[1],sem_kata[2],sem_kata[3]);
                        pemasukan_data_table_pelanggan(tb, "file/fpelanggan.dat");
                        printf("\nPelanggan setia Terima Kasih.\n\n");
                        tampilka_table_empat_kolom(tb,"Code","nama pelanggan","Code Barang","Code Waktu");
                    }
                }else{
                    printf("data yang di masukan melebihi batas\n");
                }
            }else if(strcmp(sem,"fbarang") == 0){
                inc_kata(data);
                indek = 0;
                strcpy(sem_kata[indek],get_kata());
                indek++;
                while (eop_kata(data) == 0){
                    inc_kata(data);
                    strcpy(sem_kata[indek], get_kata());
                    indek++;

                }
                if(indek < 2){
                    printf("\nerror masukan yang di input kurang\n");
                }else if(indek == 2){
                    if(pengecekan_data( br,sem_kata[0]) == 0){
                        mengisi_data(br,"file/barang.dat",sem_kata[0],sem_kata[1]);
                        pemasukan_data_table(br, "file/barang.dat");
                        printf("\nPelanggan setia Terima Kasih.\n\n");
                        tampilka_table(br,"Code","nama barang");
                    }else{
                        update_data(br,"file/barang.dat",sem_kata[0],sem_kata[1]);
                        pemasukan_data_table(br, "file/barang.dat");
                        printf("\nPelanggan setia Terima Kasih.\n\n");
                        tampilka_table(br,"Code","nama barang");
                    }
                }else{
                    printf("data yang di masukan melebihi batas\n");
                }
            }else if(strcmp(sem,"fwaktu") == 0){
                inc_kata(data);
                indek = 0;
                strcpy(sem_kata[indek],get_kata());
                indek++;
                while (eop_kata(data) == 0){
                    inc_kata(data);
                    strcpy(sem_kata[indek], get_kata());
                    indek++;

                }
                if(indek < 2){
                    printf("\nerror masukan yang di input kurang\n");
                }else if(indek == 2){
                    if(pengecekan_data( tg,sem_kata[0]) == 0){
                        mengisi_data(tg,"file/fwaktu.dat",sem_kata[0],sem_kata[1]);
                        pemasukan_data_table(tg, "file/fwaktu.dat");
                        printf("\nPelanggan setia Terima Kasih.\n\n");
                        tampilka_table(tg,"Code","nama waktu");
                    }else{
                        update_data(tg,"file/fwaktu.dat",sem_kata[0],sem_kata[1]);
                        pemasukan_data_table(tg, "file/fwaktu.dat");
                        printf("\nPelanggan setia Terima Kasih.\n\n");
                        tampilka_table(tg,"Code","nama waktu");
                    }
                }else{
                    printf("data yang di masukan melebihi batas\n");
                }
            }else{
                printf("error!!!!\n");
                printf("salah memasukan perintah!!!!\n");
            }
        }else if(strcmp(sem,"hapus") == 0){
            char sem_kata[100][100];
            inc_kata(data);
            strcpy(sem, get_kata());
            if(strcmp(sem,"fpelanggan") == 0){
                inc_kata(data);
                indek = 0;
                strcpy(sem_kata[indek],get_kata());
                indek++;
                while (eop_kata(data) == 0){
                    inc_kata(data);
                    strcpy(sem_kata[indek], get_kata());
                    indek++;
                }
                if(indek > 1){
                    printf("data yang di masukan melebihi batas\n");
                }else if(indek == 1){
                    if(pengecekan_data2( tb,sem_kata[0]) == 0){
                        printf("error code yang akan di hapus tidak ada!!!\n");
                    }else{
                        delete_data2(tb,"file/fpelanggan.dat",sem_kata[0]);
                        pemasukan_data_table_pelanggan(tb, "file/fpelanggan.dat");
                        printf("\nPelanggan setia Terima Kasih.\n\n");
                        tampilka_table_empat_kolom(tb,"Code","nama pelanggan","Code Barang","Code Waktu");
                    }
                }
            }else if(strcmp(sem,"fbarang") == 0){
                inc_kata(data);
                indek = 0;
                strcpy(sem_kata[indek],get_kata());
                indek++;
                while (eop_kata(data) == 0){
                    inc_kata(data);
                    strcpy(sem_kata[indek], get_kata());
                    indek++;

                }
                if(indek > 1){
                    printf("data yang di masukan melebihi batas\n");
                }else if(indek == 1){
                    if(pengecekan_data( br,sem_kata[0]) == 0){
                        printf("error code yang akan di hapus tidak ada!!!\n");
                    }else{
                        if(pengecekan_data_table_kolom(tb,sem_kata[0],3) == 0){
                            delete_data(br,"file/fbarang.dat",sem_kata[0]);
                            pemasukan_data_table(br, "file/fbarang.dat");
                            printf("\nPelanggan setia Terima Kasih.\n\n");
                            tampilka_table(br,"Code","nama barang");
                        }else{
                            printf("error data sedang terhung dengan tabel fpelanggan!!!!!\n");
                            printf("data gagal di hapus!!!!!\n");
                        }
                    }
                }
            }else if(strcmp(sem,"fwaktu") == 0){
                inc_kata(data);
                indek = 0;
                strcpy(sem_kata[indek],get_kata());
                indek++;
                while (eop_kata(data) == 0){
                    inc_kata(data);
                    strcpy(sem_kata[indek], get_kata());
                    indek++;
                }
                if(indek > 1){
                    printf("data yang di masukan melebihi batas\n");
                }else if(indek == 1){
                    if(pengecekan_data( tg,sem_kata[0]) == 0){
                        printf("error code yang akan di hapus tidak ada!!!\n");
                    }else{
                        if(pengecekan_data_table_kolom(tb,sem_kata[0],4) == 0){
                            delete_data(tg,"file/fwaktu.dat",sem_kata[0]);
                            pemasukan_data_table(tg, "file/fwaktu.dat");
                            printf("\nPelanggan setia Terima Kasih.\n\n");
                            tampilka_table(tg,"Code","nama waktu");
                        }else{
                            printf("error data sedang terhung dengan tabel fpelanggan!!!!!\n");
                            printf("data gagal di hapus!!!!!\n");
                        }
                    }
                }
            }else{
                printf("error!!!!\n");
                printf("salah memasukan perintah!!!!\n");
            }
        }else if(strcmp(sem,"tampil") == 0){
            char sem_kata[100][100];
            int tampilan[100];
            inc_kata(data);
            indek = 0;
            strcpy(sem_kata[indek],get_kata());
            tampilan[indek] = 1;
            indek++;
            while (eop_kata(data) == 0){
                inc_kata(data);
                strcpy(sem_kata[indek], get_kata());
                tampilan[indek] = 1;
                indek++;

            }
            if(indek == 1){
                if(strcmp(sem_kata[0],"fpelanggan") == 0){
                    tampilka_table_empat_kolom(tb,"Code","nama pelanggan","Code Barang","Code Waktu");
                }else if(strcmp(sem_kata[0],"fbarang") == 0){
                    tampilka_table(br,"Code","nama barang");
                }else if(strcmp(sem_kata[0],"fwaktu") == 0){
                    tampilka_table(tg,"Code","nama waktu");
                }else{
                    printf("error!!!!\n");
                    printf("salah memasukan perintah!!!!\n");
                }
            }else{
                int hasil = 0;
                pemasukan_data_list_table(table, "file/list_table.dat");
                for (int i = 0; i < indek; i++)
                {
                    hasil += pengecekan_data_table(table,sem_kata[i]);
                }
                if(hasil == indek){
                    pemasukan_data_table_pelanggan(hasil_akhir,"file/fpelanggan.dat");
                    for(int i = 0;i < indek;i++){
                        if(strcmp(sem_kata[i],"fpelanggan") == 0){
                            int k = 0;
                            while (strcmp(tb[k].nama_table,"####") != 0){
                                if(strcmp(tb[k].nama_table,"fwaktu") == 0){
                                    int validasi = 0;
                                    for(int l = 0;l < indek;l++){
                                        if(strcmp(sem_kata[l],"fwaktu") == 0){
                                            validasi = 1;
                                        }
                                    }
                                    if(validasi == 1){
                                        table_hasil_kolom4(hasil_akhir,"file/hasil.dat",tg);
                                        pemasukan_data_table_pelanggan_akhir(hasil_akhir, "file/hasil.dat");
                                        for(int l = 0;l < indek;l++){
                                            if(strcmp(sem_kata[l],"fwaktu") == 0){
                                                tampilan[l] = 0;
                                            }
                                        }
                                    }
                                    
                                }else if(strcmp(tb[k].nama_table,"fbarang") == 0){
                                    int validasi = 0;
                                    for(int l = 0;l < indek;l++){
                                        if(strcmp(sem_kata[l],"fbarang") == 0){
                                            validasi = 1;
                                        }
                                    }
                                    if(validasi == 1){
                                    table_hasil_kolom3(hasil_akhir,"file/hasil.dat",br);
                                    pemasukan_data_table_pelanggan_akhir(hasil_akhir, "file/hasil.dat");
                                        for(int l = 0;l < indek;l++){
                                            if(strcmp(sem_kata[l],"fbarang") == 0){
                                                tampilan[l] = 0;
                                            }
                                        }
                                    }
                                }
                                k++;
                                tampilan[i] = 2;
                            }
                            
                            
                        }
                    }
                    for(int l = 0;l < indek;l++){
                        
                        if(tampilan[l] == 1){
                            if(strcmp(sem_kata[l],"fpelanggan") == 0){
                                tampilka_table_empat_kolom(tb,"Code","nama pelanggan","Barang","Waktu");
                            }else if(strcmp(sem_kata[l],"fbarang") == 0){
                                tampilka_table(br,"Code","nama barang");
                            }else if(strcmp(sem_kata[l],"fwaktu") == 0){
                                tampilka_table(tg,"Code","nama waktu");
                            }else{
                                printf("error!!!!\n");
                                printf("salah memasukan perintah!!!!\n");
                            }
                        }else if(tampilan[l] == 2){
                            tampilka_table_empat_kolom(hasil_akhir,"Code","nama pelanggan","Code Barang","Code Waktu");
                        }
                    }

                }else{
                    printf("error masukan tidak ada tabel!!!!!!\n");
                }
            }
        }else if(strcmp(sem,"jangan") == 0){
            inc_kata(data);
            persamaan(ckata);
            strcpy(sem, get_kata());
            if(strcmp(sem,"lupa") == 0){
                inc_kata(data);
                persamaan(ckata);
                strcpy(sem, get_kata());
                if(strcmp(sem,"bahagia") == 0){
                    inc_kata(data);
                    persamaan(ckata);
                    strcpy(sem, get_kata());
                    if(strcmp(sem,"hari") == 0){
                        inc_kata(data);
                        persamaan(ckata);
                        strcpy(sem, get_kata());
                        if(strcmp(sem,"ini") == 0){
                            pengulangan = 1;
                            system("exit");
                        }else{
                            printf("error!!!!\n");
                            printf("salah memasukan perintah!!!!\n");
                        }
                    }else{
                        printf("error!!!!\n");
                        printf("salah memasukan perintah!!!!\n");
                    }
                }else{
                    printf("error!!!!\n");
                    printf("salah memasukan perintah!!!!\n");
                }
            }else{
                printf("error!!!!\n");
                printf("salah memasukan perintah!!!!\n");
            }
        }else{
            printf("error!!!!\n");
            printf("salah memasukan perintah!!!!\n");
        }
        resetkata();
    }while(pengulangan == 0);
    
    return 0;
}
