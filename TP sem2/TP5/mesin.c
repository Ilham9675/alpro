/*
saya nama ilham akbar dengan nim 2201017 mengerjakan soal
TP5 dalam mata kuliah algoritma dan pemlograman 2
untuk keberkahannya maka saya
tidak melakukan kacurangan seperti yang telah dispesifikan. aamiin
*/
#include "header.h"

void masukan_data(int jumlah, data peserta[jumlah])
{
    for (int i = 0; i < jumlah; i++)
    {                                                                           // pengulangan sebanyak jamlah untuk memasukan sebuat nilai dari user
        scanf("%s %d %d", &peserta[i].nama, &peserta[i].mp, &peserta[i].waktu); // meninta user memasukan nilai yang berupa nama yang berbentuk string, magic power yang berbentuk integer dan waktu yang berbentuk integer
    }
}

void Bubble_sort(int jumlah, data peserta[jumlah], char kode2[10])
{
    /*
        temp1 adalah untuk wadah sementera yang di peruntukan untuk tipe data integer atau huruf
        temp2 adalah untuk wadah sementera yang di peruntukan untuk tipe data string atau karakter
        swap adalah untuk menjadi sebuat indikator yang di jadikan patokan apakah bubble sort ini itu sudah selelai atau sudah terurut atau belum

    */
    int temp1, swap;
    char temp2[100];
    do
    {
        swap = 0;
        for (int i = 0; i < jumlah - 1; i++) // pengulangan sebanyak jumlah dan di min satu karena pengecekannya akan akan di cek dua nilai secara bersamaan
        {
            if (strcmp("Besar", kode2) == 0)
            { // jika kode 2 itu bernilai "Besar" maka akan masuk dan akan di cek secara yang terbesar
                if (strlen(peserta[i].nama) < strlen(peserta[i + 1].nama))
                { // pengecekan jika jumlah nama indek ke i itu lebih kecil daripada jumlah nama indek ke i + 1 maka akan menambahkan satu dan itu berarti itu ada yang belum tepat secara penempatan
                    /*
                        program di bawah ini adalah program untuk menukar nilai dari suatu tempat atau posisi
                        ke tempat atau posisi yang lain dengan cara menyimpan nilai ke dalam wadah yang sudah di sediakan
                        di atas, wadah tersebut adalah temp1 untuk integer dan temp2 untuk string dan posisi yang akan di tukat adalah i dan i + 1
                    */
                    strcpy(temp2, peserta[i].nama);
                    strcpy(peserta[i].nama, peserta[i + 1].nama);
                    strcpy(peserta[i + 1].nama, temp2);

                    temp1 = peserta[i].mp;
                    peserta[i].mp = peserta[i + 1].mp;
                    peserta[i + 1].mp = temp1;

                    temp1 = peserta[i].waktu;
                    peserta[i].waktu = peserta[i + 1].waktu;
                    peserta[i + 1].waktu = temp1;

                    swap = 1; // swap di sini berfungsi untuk pengecekan atau memberitahu bahwa sorting ini berhenti atau dia balik lagi dan mensorting lagi
                }
                if (strlen(peserta[i].nama) == strlen(peserta[i + 1].nama))
                { // pengecekan jika jumlah nama indek ke i itu sama dengan jumlah nama indek ke i + 1 maka akan masuk ke dalam if dan akan di lakukan pengecekan sesuai dengan syarat
                    if (peserta[i].mp < peserta[i + 1].mp)
                    { // pengecekan jika nilai magic power indek ke i itu lebih kecil dari pada nilai magic power indek ke i + 1 maka akan menambahkan satu dan itu berarti itu ada yang belum tepat secara penempatan
                        /*
                        program di bawah ini adalah program untuk menukar nilai dari suatu tempat atau posisi
                        ke tempat atau posisi yang lain dengan cara menyimpan nilai ke dalam wadah yang sudah di sediakan
                        di atas, wadah tersebut adalah temp1 untuk integer dan temp2 untuk string dan posisi yang akan di tukat adalah i dan i + 1
                        */
                        strcpy(temp2, peserta[i].nama);
                        strcpy(peserta[i].nama, peserta[i + 1].nama);
                        strcpy(peserta[i + 1].nama, temp2);

                        temp1 = peserta[i].mp;
                        peserta[i].mp = peserta[i + 1].mp;
                        peserta[i + 1].mp = temp1;

                        temp1 = peserta[i].waktu;
                        peserta[i].waktu = peserta[i + 1].waktu;
                        peserta[i + 1].waktu = temp1;

                        swap = 1; // swap di sini berfungsi untuk pengecekan atau memberitahu bahwa sorting ini berhenti atau dia balik lagi dan mensorting lagi
                    }
                }
            }
            else
            { // jika bukan akan masuk ke else dan akan mengurutkan dari yang terkecil ke yang terbesar
                if (strlen(peserta[i].nama) > strlen(peserta[i + 1].nama))
                { // pengecekan jika jumlah nama indek ke i itu lebih besar daripada jumlah nama indek ke i + 1 maka akan menukar nilai idnek i dengan nilai indek i + 1
                    /*
                        program di bawah ini adalah program untuk menukar nilai dari suatu tempat atau posisi
                        ke tempat atau posisi yang lain dengan cara menyimpan nilai ke dalam wadah yang sudah di sediakan
                        di atas, wadah tersebut adalah temp1 untuk integer dan temp2 untuk string dan posisi yang akan di tukat adalah i dan i + 1
                    */
                    strcpy(temp2, peserta[i].nama);
                    strcpy(peserta[i].nama, peserta[i + 1].nama);
                    strcpy(peserta[i + 1].nama, temp2);

                    temp1 = peserta[i].mp;
                    peserta[i].mp = peserta[i + 1].mp;
                    peserta[i + 1].mp = temp1;

                    temp1 = peserta[i].waktu;
                    peserta[i].waktu = peserta[i + 1].waktu;
                    peserta[i + 1].waktu = temp1;

                    swap = 1; // swap di sini berfungsi untuk pengecekan atau memberitahu bahwa sorting ini berhenti atau dia balik lagi dan mensorting lagi
                }
                if (strlen(peserta[i].nama) == strlen(peserta[i + 1].nama))
                { // pengecekan jika jumlah nama indek ke i itu sama dengan jumlah nama indek ke i + 1 maka akan masuk ke dalam if dan akan di lakukan pengecekan sesuai dengan syarat
                    if (peserta[i].mp > peserta[i + 1].mp)
                    { // pengecekan jika nilai magic power indek ke i itu lebih besar dari pada nilai magic power indek ke i + 1 maka akan menukar nilai idnek i dengan nilai indek i + 1
                        /*
                        program di bawah ini adalah program untuk menukar nilai dari suatu tempat atau posisi
                        ke tempat atau posisi yang lain dengan cara menyimpan nilai ke dalam wadah yang sudah di sediakan
                        di atas, wadah tersebut adalah temp1 untuk integer dan temp2 untuk string dan posisi yang akan di tukat adalah i dan i + 1
                        */
                        strcpy(temp2, peserta[i].nama);
                        strcpy(peserta[i].nama, peserta[i + 1].nama);
                        strcpy(peserta[i + 1].nama, temp2);

                        temp1 = peserta[i].mp;
                        peserta[i].mp = peserta[i + 1].mp;
                        peserta[i + 1].mp = temp1;

                        temp1 = peserta[i].waktu;
                        peserta[i].waktu = peserta[i + 1].waktu;
                        peserta[i + 1].waktu = temp1;

                        swap = 1; // swap di sini berfungsi untuk pengecekan atau memberitahu bahwa sorting ini berhenti atau dia balik lagi dan mensorting lagi
                    }
                }
            }
        }
    } while (swap == 1); // berhentinya sorting itu jika awap itu sama dengan 0 atau dengan kata lain tidak masuk ke if atau sudag terurut
}
void quicksort(int jumlah, data peserta[jumlah], int l, int r, char kode2[10])
{
    /*
        i untuk batasan sorting sebelah kiri
        r itu untuk batasan sorting sebelah kanan
        temp1 adalah untuk wadah sementera yang di peruntukan untuk tipe data integer atau huruf
        temp2 adalah untuk wadah sementera yang di peruntukan untuk tipe data string atau karakter
        pivot adalah batas tengah atau yang akan jadi patokan pembanding dan untuk mencari pivot adah dengan mencari nilai tengan sebuat array yang ingin di sorting
    */
    int i = l, j = r;
    char temp2[100];
    int temp1;
    int pivot = strlen(peserta[(l + r) / 2].nama);
    do
    {
        if (strcmp("Besar", kode2) == 0)
        { // jika kode 2 itu bernilai "Besar" maka akan masuk dan akan di cek secara yang terbesar
            /*
                !!!penjelasan sistem!!!
                while pertama itu untuk mengecek apakah panjang nama dengan indek i itu lebih besar dari pada pivot jika benar maka akan terus mencari
                sampai menemukan yang salah dan pengecekannya di mulai dari sebelah kiri
                while yang ke dua itu untuk mengecek apakah panjang nama dengan indek j itu lebih kecil dari pada pivot jika benar maka akan terus mencari
                sampai menemukan yang salah dan pengecekannya di mulai dari sebelah kanan
                dan jia i lebih besar dari pada j maka akan berhenti while
            */
            while ((strlen(peserta[i].nama) > pivot) && (i <= j)) // untuk mencari panjang nama indek i yang lebih kecil dari pada pivot
            {
                i++;
            }
            while ((strlen(peserta[j].nama) < pivot) && (i <= j)) // untuk mencari panjang nama indek j yang lebih besar dari pada pivot
            {
                j--;
            }
            /*
                jika i lebih kecil dari pada j  maka if masih memenuhi atau akan ada pertukaran di dalamnya
                dan jika i lebih besar atau sama dengan maka akan lewat saja
            */
            if (i < j)
            {
                if (strlen(peserta[i].nama) == strlen(peserta[j].nama))
                { // penecekan apakah panjang nama idnek i itu sama dnegan nama indek j kalau sama maka akan masuk ke if
                    if (peserta[i].mp < peserta[j].mp)
                    {   // pengecekan jika nilai magic power indek ke i itu lebih kecil dari pada nilai magic power indek ke j maka akan menukan antara nilai indek i dangan nilai indek j
                        /*
                            program di bawah ini adalah program untuk menukar nilai dari suatu tempat atau posisi
                            ke tempat atau posisi yang lain dengan cara menyimpan nilai ke dalam wadah yang sudah di sediakan
                            di atas, wadah tersebut adalah temp1 untuk integer dan temp2 untuk string dan posisi yang akan di tukat adalah i dan i + 1
                        */
                        strcpy(temp2, peserta[i].nama);
                        strcpy(peserta[i].nama, peserta[j].nama);
                        strcpy(peserta[j].nama, temp2);

                        temp1 = peserta[i].mp;
                        peserta[i].mp = peserta[j].mp;
                        peserta[j].mp = temp1;

                        temp1 = peserta[i].waktu;
                        peserta[i].waktu = peserta[j].waktu;
                        peserta[j].waktu = temp1;
                    }
                }
                else
                {   // jika tidak sama dengan maka akan langsung di tukan antara nilai satu dengan nilai yang lainnya
                    /*
                        program di bawah ini adalah program untuk menukar nilai dari suatu tempat atau posisi
                        ke tempat atau posisi yang lain dengan cara menyimpan nilai ke dalam wadah yang sudah di sediakan
                        di atas, wadah tersebut adalah temp1 untuk integer dan temp2 untuk string dan posisi yang akan di tukat adalah i dan i + 1
                    */
                    strcpy(temp2, peserta[i].nama);
                    strcpy(peserta[i].nama, peserta[j].nama);
                    strcpy(peserta[j].nama, temp2);

                    temp1 = peserta[i].mp;
                    peserta[i].mp = peserta[j].mp;
                    peserta[j].mp = temp1;

                    temp1 = peserta[i].waktu;
                    peserta[i].waktu = peserta[j].waktu;
                    peserta[j].waktu = temp1;
                }
                // jika sudah di tukar maka kedua indek akan menambah dan berkurang sesuai arahnya
                i++;
                j--;
            }
        }
        else
        { // jika bukan akan masuk ke else dan akan mengurutkan dari yang terkecil ke yang terbesar
            /*
                !!!penjelasan sistem!!!
                while pertama itu untuk mengecek apakah panjang nama dengan indek i itu lebih kecil dari pada pivot jika benar maka akan terus mencari
                sampai menemukan yang salah dan pengecekannya di mulai dari sebelah kiri
                while yang ke dua itu untuk mengecek apakah panjang nama dengan indek j itu lebih besar dari pada pivot jika benar maka akan terus mencari
                sampai menemukan yang salah dan pengecekannya di mulai dari sebelah kanan
                dan jia i lebih besar dari pada j maka akan berhenti while
            */
            while ((strlen(peserta[i].nama) < pivot) && (i <= j)) // untuk mencari panjang nama indek i yang lebih besar dari pada pivot
            {
                i++;
            }
            while ((strlen(peserta[j].nama) > pivot) && (i <= j)) // untuk mencari panjang nama indek j yang lebih kecil dari pada pivot
            {
                j--;
            }
            /*
                jika i lebih kecil dari pada j  maka if masih memenuhi atau akan ada pertukaran di dalamnya
                dan jika i lebih besar atau sama dengan maka akan lewat saja
            */
            if (i < j)
            {
                if (strlen(peserta[i].nama) == strlen(peserta[j].nama))
                { // penecekan apakah panjang nama idnek i itu sama dnegan nama indek j kalau sama maka akan masuk ke if
                    if (peserta[i].mp > peserta[j].mp)
                    {   // pengecekan jika nilai magic power indek ke i itu lebih besar dari pada nilai magic power indek ke j maka akan menukan antara nilai indek i dangan nilai indek j
                        /*
                            program di bawah ini adalah program untuk menukar nilai dari suatu tempat atau posisi
                            ke tempat atau posisi yang lain dengan cara menyimpan nilai ke dalam wadah yang sudah di sediakan
                            di atas, wadah tersebut adalah temp1 untuk integer dan temp2 untuk string dan posisi yang akan di tukat adalah i dan i + 1
                            */
                        strcpy(temp2, peserta[i].nama);
                        strcpy(peserta[i].nama, peserta[j].nama);
                        strcpy(peserta[j].nama, temp2);

                        temp1 = peserta[i].mp;
                        peserta[i].mp = peserta[j].mp;
                        peserta[j].mp = temp1;

                        temp1 = peserta[i].waktu;
                        peserta[i].waktu = peserta[j].waktu;
                        peserta[j].waktu = temp1;
                    }
                }
                else
                {   // jika tidak sama dengan maka akan langsung di tukan antara nilai satu dengan nilai yang lainnya
                    /*
                        program di bawah ini adalah program untuk menukar nilai dari suatu tempat atau posisi
                        ke tempat atau posisi yang lain dengan cara menyimpan nilai ke dalam wadah yang sudah di sediakan
                        di atas, wadah tersebut adalah temp1 untuk integer dan temp2 untuk string dan posisi yang akan di tukat adalah i dan i + 1
                    */
                    strcpy(temp2, peserta[i].nama);
                    strcpy(peserta[i].nama, peserta[j].nama);
                    strcpy(peserta[j].nama, temp2);

                    temp1 = peserta[i].mp;
                    peserta[i].mp = peserta[j].mp;
                    peserta[j].mp = temp1;

                    temp1 = peserta[i].waktu;
                    peserta[i].waktu = peserta[j].waktu;
                    peserta[j].waktu = temp1;
                }
                // jika sudah di tukar maka kedua indek akan menambah dan berkurang sesuai arahnya
                i++;
                j--;
            }
        }
    } while (i < j); // berhentinya do while jika j itu lebi besar atau sama dengan i maka akan di anggap semua nya sudah ter urut
    if ((l < j) && (j < r))
    { // jika nilai j itu besar dari l dan lebih kecil dari r maka akan masuk mengulang lagi prosedur dirinya sendiri dengan batas array kiri l dan batas kanan itu j
        quicksort(jumlah, peserta, l, j, kode2);
    }
    if ((i < r) && (i > l))
    { // jika nilai i itu besar dari l dan lebih kecil dari r maka akan masuk mengulang lagi prosedur dirinya sendiri dengan batas array kiri j dan batas kanan itu l
        quicksort(jumlah, peserta, i, r, kode2);
    }
}
void tabel_garis(int jumlah, int terbanyak)
{
    printf("+"); // untuk tanda pesipangan garis
    // untuk menampilkan garis kolom nomer
    if (jumlah < 10)
    { // jika jumlah kurang dari 10 maka kan menampilkan 4 garis
        for (int i = 0; i < 4; i++)
        {
            printf("-");
        }
    }
    else
    { // jika lebih maka menampilkan 5 garis atau
        for (int i = 0; i < 5; i++)
        {
            printf("-");
        }
    }
    printf("+"); // untuk tanda pesipangan garis
    // untuk menampilkan garis kolom nama dengan junlah terbanyak di tambah dua
    for (int i = 0; i < terbanyak + 2; i++)
    {
        printf("-");
    }
    printf("+"); // untuk tanda pesipangan garis
    // untuk menampilkan garis kolom magic power dengan jumlah 13 titik dan ini bersifat statis karena tidak akan ada inputan yang panjangnya lebih dari 13
    for (int i = 0; i < 13; i++)
    {
        printf("-");
    }
    printf("+"); // untuk tanda pesipangan garis
                 // untuk menampilkan garis kolom waktu dengan jumlah 7 titik dan ini bersifat statis karena tidak akan ada inputan yang panjangnya lebih dari 7
    for (int i = 0; i < 7; i++)
    {
        printf("-");
    }
    printf("+\n"); // untuk tanda pesipangan garis dan ujung dari penampilan per baris
}
void tabel_header(int jumlah, int terbanyak)
{
    printf("|"); // awalah tabel
    // kata di atas tabe
    if (jumlah < 10)
    { // jika jumlah kurang dari 10 maka akan menampilkan kata dengan spasi satu di kiri dan satu di kanan
        printf(" No ");
    }
    else
    { // jika lebih maka akan menampilkan kata dengan spasi satu di kiri dan dua di kanan
        printf(" No  ");
    }
    printf("|");            // pemisah tabel
    printf(" Nama Mantra"); // kata di atas tabe
    for (int i = 0; i < (terbanyak + 1) - 11; i++)
    { // untuk menampilkan spasi yang berfungsi sebagai tupuan agar simetris dengan yang tabel bawah maupun tabel atas
        printf(" ");
    }
    printf("|");             // pemisah tabel
    printf(" Magic Power "); // kata di atas tabe

    printf("|");       // pemisah tabel
    printf(" Waktu "); // kata di atas tabe
    printf("|\n");     // akhir table
}

int tabel_data(int jumlah, data peserta[jumlah], int terbanyak, int batas_waktu)
{
    int cek = 0; // untuk mencadi wadah yang berfungsi sebagai indikator seberapa banyak mantra yang bisa di kuasai

    for (int j = 0; j < jumlah; j++)
    {                // pengulangan sebanyak jamlah untuk menampilkan setiap data yang ada
        printf("|"); // awal tabel baris
        if (jumlah < 10)
        { // jika jumlah kurang dari 10 maka akan menampilkan nomer urutan
            printf(" %d  ", j + 1);
        }
        else
        { // jika lebih maka akan menampilkan nomer urutan dan ada sua pilihan karena ada yang urutan nya satuan berarti menambahkan dua spasi jika puluhan hanya satu
            if ((j + 1) >= 10)
            {
                printf(" %d  ", j + 1);
            }
            else
            {
                printf(" %d   ", j + 1);
            }
        }
        printf("|");                    // pemisah tabel
        printf(" %s", peserta[j].nama); // menampilkan nama
        for (int i = 0; i <= terbanyak - strlen(peserta[j].nama); i++)
        { // untuk menampilkan spasi yang berfungsi sebagai tupuan agar simetris dengan yang tabel bawah maupun tabel atas dan di tentukan jumlah spasinya oleh terbenyak
            printf(" ");
        }
        printf("|"); // pemisah tabel
        int spasi = 0;
        printf(" %d", peserta[j].mp); // menampilkan magic power
        // mencari jumlah digit atau panjang yang di butuhkan oleh magic power di tabel
        if (peserta[j].mp < 10)
        {
            spasi = 1;
        }
        else if (peserta[j].mp < 100)
        {
            spasi = 2;
        }
        else if (peserta[j].mp < 1000)
        {
            spasi = 3;
        }
        else if (peserta[j].mp < 10000)
        {
            spasi = 4;
        }
        else
        {
            spasi = 5;
        }
        for (int i = 0; i < 12 - spasi; i++)
        { // untuk menampilkan spasi yang berfungsi sebagai tupuan agar simetris dengan yang tabel bawah maupun tabel atas dan dengan jumlah spasi di tentukan di program if di atas
            printf(" ");
        }
        printf("|");                     // pemisah tabel
        printf(" %d", peserta[j].waktu); // menampilkan waktu
        // mencari jumlah digit atau panjang yang di butuhkan oleh waktu di tabel
        if (peserta[j].waktu < 10)
        {

            spasi = 1;
        }
        else if (peserta[j].waktu < 100)
        {
            spasi = 2;
        }
        else if (peserta[j].waktu < 1000)
        {
            spasi = 3;
        }
        else
        {
            spasi = 4;
        }
        for (int i = 0; i < 6 - spasi; i++)
        { // untuk menampilkan spasi yang berfungsi sebagai tupuan agar simetris dengan yang tabel bawah maupun tabel atas dan dengan jumlah spasi di tentukan di program if di atas
            printf(" ");
        }
        printf("|\n"); // akhir tabel baris
        if (batas_waktu - peserta[j].waktu >= 0)
        { // pengecekan jika batas waktuk di kuragi dengan waktu itu masih lebih besar atau sama dengan 0 atau tidak kalau iyaa maka cek akan di tambah satu
            cek++;
        }
        batas_waktu -= peserta[j].waktu; // pengurahan batas_waktu dengan waktu
    }
    return cek; // pengembalian berapa banyak matra yang bisa di kuasai dengan waktu yang telah di tentukan
}