#include <stdio.h>
#include <string.h>

void bentuk1(int ketebalan, int line, int akhir);
void bentuk2(int ketebalan, int line, int akhir);
void bentuk3(int ketebalan, int line, int akhir);
void bentuk4(int ketebalan, int line, int akhir);
void bentuk5(int ketebalan, int line, int akhir);
void bentuk6(int ketebalan, int line, int akhir);
void bentuk7(int ketebalan, int line, int akhir);
void bentuk8(int ketebalan, int line, int akhir);
void bentuk9(int ketebalan, int line, int akhir);

void pola1(int ketebalan, int akhir);
void pola2(int ketebalan, int akhir);
void pola3(int ketebalan, int akhir);
void pola4(int ketebalan, int akhir);
void pola3(int ketebalan, int akhir);
void pola5(int ketebalan, int akhir);
void pola6(int ketebalan, int akhir);
void pola7(int ketebalan, int akhir);
void pola8(int ketebalan, int akhir);

int spasi(int jumlahtransisi, int i, int j, char nama[100][100], int transisi[100], int jumlahkata[100], int akhir);


int main()
{
    int jumlahnama;
    scanf("%d", &jumlahnama);
    char nama[jumlahnama][100];
    for (int i = 0; i < jumlahnama; i++)
    {
        scanf("%s", nama[i]);
    }
    int jumlahtransisi;
    scanf("%d", &jumlahtransisi);
    int transisi[jumlahtransisi];
    for (int i = 0; i < jumlahtransisi; i++)
    {
        scanf("%d", &transisi[i]);
    }
    int jumlahpesan;
    scanf("%d", &jumlahpesan);
    int pesanlama[jumlahpesan];
    int pesanbaru[jumlahpesan];
    for (int i = 0; i < jumlahpesan; i++)
    {
        scanf("%d %d", &pesanlama[i], &pesanbaru[i]);
    }
    int ketebalan;
    scanf("%d", &ketebalan);
    int sudah[jumlahtransisi];
    for (int i = 0; i < jumlahtransisi; i++)
    {
        sudah[i] = 0;
    }
    for (int i = 0; i < jumlahpesan; i++)
    {
        for (int j = 0; j < jumlahtransisi; j++)
        {
            if ((pesanlama[i] == transisi[j]) && (jumlahnama >= pesanbaru[i]) && (sudah[j] == 0))
            {
                transisi[j] = pesanbaru[i];
                sudah[j] = 1;
            }
        }
    }
    int jumlahkata[jumlahtransisi];
    for (int j = 0; j < jumlahtransisi; j++)
    {
        jumlahkata[j] = strlen(nama[transisi[j] - 1]);
        if (j == 0)
        {
            printf("%s", nama[transisi[j] - 1]);
        }
        else
        {
            printf(" %s", nama[transisi[j] - 1]);
        }
    }
    printf("\n");
    for (int i = 0; i < ketebalan; i++)
    {
        printf("\n");
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 0; k < ketebalan; k++)
        {
            int akhir = 0;
            for (int j = 0; j < jumlahtransisi; j++)
            {
                if (jumlahtransisi - 1 == j)
                {
                    akhir = 1;
                }
                akhir = spasi(jumlahtransisi, i, j, nama, transisi, jumlahkata, akhir);
                if (strcmp(nama[transisi[j] - 1], "tolong") == 0)
                {
                    bentuk1(ketebalan, i, akhir);
                }
                if (strcmp(nama[transisi[j] - 1], "kirim") == 0)
                {
                    bentuk2(ketebalan, i, akhir);
                }
                if (strcmp(nama[transisi[j] - 1], "berita") == 0)
                {
                    bentuk3(ketebalan, i, akhir);
                }
                if (strcmp(nama[transisi[j] - 1], "kosong") == 0)
                {
                    bentuk4(ketebalan, i, akhir);
                }
                if (strcmp(nama[transisi[j] - 1], "matamata") == 0)
                {
                    bentuk5(ketebalan, i, akhir);
                }
                if (strcmp(nama[transisi[j] - 1], "pasukan") == 0)
                {
                    bentuk6(ketebalan, i, akhir);
                }
                if (strcmp(nama[transisi[j] - 1], "aman") == 0)
                {
                    bentuk7(ketebalan, i, akhir);
                }
                if (strcmp(nama[transisi[j] - 1], "masuk") == 0)
                {
                    bentuk8(ketebalan, i, akhir);
                }
                if (strcmp(nama[transisi[j] - 1], "tahan") == 0)
                {
                    bentuk9(ketebalan, i, akhir);
                }
                if ((jumlahtransisi - 1 != j) && (akhir == 0))
                {
                    for (int m = 0; m < ketebalan; m++)
                    {
                        printf("-");
                    }
                }
            }
            printf("\n");
        }
    }
    return 0;
}

void bentuk1(int ketebalan, int line, int akhir)
{
    if (line == 1)
    {
        pola2(ketebalan, akhir);
    }
    if (line == 2)
    {
        pola1(ketebalan, akhir);
    }
    if (line == 3)
    {
        pola3(ketebalan, akhir);
    }
    if (line == 4)
    {
        pola1(ketebalan, akhir);
    }
    if (line == 5)
    {
        pola2(ketebalan, akhir);
    }
}
void bentuk2(int ketebalan, int line, int akhir)
{
    if (line == 1)
    {
        pola1(ketebalan, akhir);
    }
    if (line == 2)
    {
        pola4(ketebalan, akhir);
    }
    if (line == 3)
    {
        pola3(ketebalan, akhir);
    }
    if (line == 4)
    {
        pola4(ketebalan, akhir);
    }
    if (line == 5)
    {
        pola1(ketebalan, akhir);
    }
}
void bentuk3(int ketebalan, int line, int akhir)
{
    if (line == 1)
    {
        pola5(ketebalan, akhir);
    }
    if (line == 2)
    {
        pola5(ketebalan, akhir);
    }
    if (line == 3)
    {
        pola4(ketebalan, akhir);
    }
    if (line == 4)
    {
        pola6(ketebalan, akhir);
    }
    if (line == 5)
    {
        pola4(ketebalan, akhir);
    }
}
void bentuk4(int ketebalan, int line, int akhir)
{
    if (line == 1)
    {
        pola1(ketebalan, akhir);
    }
    if (line == 2)
    {
        pola6(ketebalan, akhir);
    }
    if (line == 3)
    {
        pola6(ketebalan, akhir);
    }
    if (line == 4)
    {
        pola6(ketebalan, akhir);
    }
    if (line == 5)
    {
        pola1(ketebalan, akhir);
    }
}
void bentuk5(int ketebalan, int line, int akhir)
{
    if (line == 1)
    {
        pola1(ketebalan, akhir);
    }
    if (line == 2)
    {
        pola6(ketebalan, akhir);
    }
    if (line == 3)
    {
        pola1(ketebalan, akhir);
    }
    if (line == 4)
    {
        pola6(ketebalan, akhir);
    }
    if (line == 5)
    {
        pola1(ketebalan, akhir);
    }
}
void bentuk6(int ketebalan, int line, int akhir)
{
    if (line == 1)
    {
        pola7(ketebalan, akhir);
    }
    if (line == 2)
    {
        pola7(ketebalan, akhir);
    }
    if (line == 3)
    {
        pola8(ketebalan, akhir);
    }
    if (line == 4)
    {
        pola6(ketebalan, akhir);
    }
    if (line == 5)
    {
        pola8(ketebalan, akhir);
    }
}
void bentuk7(int ketebalan, int line, int akhir)
{
    if (line == 1)
    {
        pola2(ketebalan, akhir);
    }
    if (line == 2)
    {
        pola2(ketebalan, akhir);
    }
    if (line == 3)
    {
        pola4(ketebalan, akhir);
    }
    if (line == 4)
    {
        pola6(ketebalan, akhir);
    }
    if (line == 5)
    {
        pola4(ketebalan, akhir);
    }
}
void bentuk8(int ketebalan, int line, int akhir)
{
    if (line == 1)
    {
        pola8(ketebalan, akhir);
    }
    if (line == 2)
    {
        pola5(ketebalan, akhir);
    }
    if (line == 3)
    {
        pola8(ketebalan, akhir);
    }
    if (line == 4)
    {
        pola5(ketebalan, akhir);
    }
    if (line == 5)
    {
        pola8(ketebalan, akhir);
    }
}
void bentuk9(int ketebalan, int line, int akhir)
{
    if (line == 1)
    {
        pola7(ketebalan, akhir);
    }
    if (line == 2)
    {
        pola1(ketebalan, akhir);
    }
    if (line == 3)
    {
        pola4(ketebalan, akhir);
    }
    if (line == 4)
    {
        pola1(ketebalan, akhir);
    }
    if (line == 5)
    {
        pola1(ketebalan, akhir);
    }
}
//-H-
void pola1(int ketebalan, int akhir)
{
    for (int i = 0; i < ketebalan; i++)
    {
        printf("-");
    }
    for (int i = 0; i < ketebalan; i++)
    {
        printf("H");
    }
    if (akhir == 0)
    {
        for (int i = 0; i < ketebalan; i++)
        {
            printf("-");
        }
    }
}
//---
void pola2(int ketebalan, int akhir)
{
    for (int i = 0; i < ketebalan * 3; i++)
    {
        if (akhir == 0)
        {
            printf("-");
        }
    }
}
// HHH
void pola3(int ketebalan, int akhir)
{
    for (int i = 0; i < ketebalan * 3; i++)
    {
        printf("H");
    }
}
//-HH
void pola4(int ketebalan, int akhir)
{
    for (int i = 0; i < ketebalan; i++)
    {
        printf("-");
    }
    for (int i = 0; i < ketebalan * 2; i++)
    {
        printf("H");
    }
}
//--H
void pola5(int ketebalan, int akhir)
{
    for (int i = 0; i < ketebalan * 2; i++)
    {
        printf("-");
    }
    for (int i = 0; i < ketebalan; i++)
    {
        printf("H");
    }
}
// H-H
void pola6(int ketebalan, int akhir)
{
    for (int i = 0; i < ketebalan; i++)
    {
        printf("H");
    }
    for (int i = 0; i < ketebalan; i++)
    {
        printf("-");
    }
    for (int i = 0; i < ketebalan; i++)
    {
        printf("H");
    }
}
// H--
void pola7(int ketebalan, int akhir)
{
    for (int i = 0; i < ketebalan; i++)
    {
        printf("H");
    }
    if (akhir == 0)
    {
        for (int i = 0; i < ketebalan * 2; i++)
        {
            printf("-");
        }
    }
}
// HH-
void pola8(int ketebalan, int akhir)
{
    for (int i = 0; i < ketebalan * 2; i++)
    {
        printf("H");
    }
    if (akhir == 0)
    {
        for (int i = 0; i < ketebalan; i++)
        {
            printf("-");
        }
    }
}

int spasi(int jumlahtransisi, int i, int j, char nama[100][100], int transisi[100], int jumlahkata[100], int akhir)
{
    for (int k = 0; k < jumlahtransisi; k++)
    {
        nama[transisi[k] - 1][jumlahkata[k]] = '\0';
    }
    int cek1 = 0;
    int cek3 = 0;
    int cek2;

    if (jumlahtransisi - 1 != j)
    {
        cek2 = j + 1;
    }
    else
    {
        cek2 = j;
    }

    while (jumlahtransisi != cek2)
    {
        if (i == 1)
        {
            cek3++;
            if ((strcmp(nama[transisi[cek2] - 1], "tolong") == 0) || (strcmp(nama[transisi[cek2] - 1], "aman") == 0))
            {
                cek1++;
            }
            cek2++;
        }
        else if (i == 2)
        {
            cek3++;
            if (strcmp(nama[transisi[cek2] - 1], "aman") == 0)
            {
                cek1++;
            }
            cek2++;
        }
        else if (i == 5)
        {
            cek3++;
            if (strcmp(nama[transisi[cek2] - 1], "tolong") == 0)
            {
                cek1++;
            }
            cek2++;
        }
        else
        {
            cek2 = jumlahtransisi;
        }
    }
    if ((cek1 != 0) && (cek1 == cek3))
    {
        akhir = 1;
        return akhir;
    }
    else
    {
        return akhir;
    }
}