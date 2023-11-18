#include <stdio.h>
#include <string.h>

int main()
{
    char kunci[100];
    scanf("%s", &kunci);

    int n;
    scanf("%d", &n);
    char kata[n][500];

    int sum = 0;    //menjumlahkan ascii dari string "kunci"
    int sum2 = 0;   //menjumlahkan nilai ascii pada setiap kata yang sudah diubah
    char ubah = 0; 

    int i;
    int j;
    char hasil_kata[100][100];
    char ubah_kata[100][100];

    for(i = 0; i < n; i++) {
        scanf("%s", &kata[i]);
    }

    for(i = 0; i < strlen(kunci); i++) {
        sum += kunci[i];
    }
    int k = sum % 26;
    printf("%d\n", k);
    
    //menghilangkan karakter aneh
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < strlen(kata[i]); j++) 
        {    
            if((kata[i][j] >= 'a' && kata[i][j] <= 'z') || (kata[i][j] >= 'A' && kata[i][j] <= 'Z')) 
            {
                hasil_kata[i][j] = kata[i][j];

                if (sum % 2 == 0)   //genap
                {
                    if((hasil_kata[i][j] - k >= 'A' && hasil_kata[i][j] <= 'Z') || (hasil_kata[i][j] - k >= 'a')) 
                    {
                        hasil_kata[i][j] -= k;
                    }
                    else
                    {
                        hasil_kata[i][j] += 26 - k;

                    }
                    printf("%c", hasil_kata[i][j]);
                }
                else if (sum % 2 != 0)  //ganjil
                {
                    if((hasil_kata[i][j] + k <= 'z' || hasil_kata[i][j] + k <= 'Z'))
                    {
                        hasil_kata[i][j] += k;
                    }
                    else
                    {
                        hasil_kata[i][j] -= 26 + k;
                    }
                    printf("%c", hasil_kata[i][j]);
                }
            }
        }
        printf(" ");
    }
    // Be Yourself and Never Surrender Booyah

 
    

    




    return 0;
}