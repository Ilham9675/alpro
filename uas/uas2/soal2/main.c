
#include "header.h"

int main()
{
    int masukan;
    scanf("%d", &masukan);
    kotak m[masukan];
    for (int i = 0; i < masukan; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &m[i].balok[j]);
        }
    }
    
    int hasil[2];
    int indek = 0;
    int spasi[masukan];
    int spasiterpanjang = 0;
    for (int i = 0; i < masukan; i++)
    {
        int plus = 0;
        int max;
        indek = 0;
        
        for (int k = 0; k < 4; k++)
        {
            if (k == 0)
            {
                max = m[i].balok[k];
            }
            else
            {
                if (max < m[i].balok[k])
                {
                    max = m[i].balok[k];
                }
            }
        }
        for (int k = 0; k < 4; k++)
        {
            if (max == m[i].balok[k])
            {
                m[i].balok[k] = 0;
            }
        }
        for (int k = 0; k < 4; k++)
        {
            if (k == 0)
            {
                max = m[i].balok[k];
            }
            else
            {
                if (max < m[i].balok[k])
                {
                    max = m[i].balok[k];
                }
            }
        }
        for (int k = 0; k < 4; k++)
        {
            if (max == m[i].balok[k])
            {
                m[i].balok[k] = 0;
            }
        }
        int indek = 0;
        for(int k = 0;k < 4;k++){
            if(m[i].balok[k] != 0){
                m[i].baru[indek] = m[i].balok[k];
                indek++;
            }
        }

        spasi[i] = spasiangka(m[i].baru[0]);
        spasi[i]++;
        spasi[i] += spasiangka(m[i].baru[1]);
        
        if(spasi[i] > spasiterpanjang && i % 2 == 0){
            spasiterpanjang = spasi[i];
        }
    }
    for (int i = 0; i < masukan; i++){
        if(i % 2 == 0){
            int jumlah = spasiterpanjang - spasi[i];
            //printf("%d %d",spasiterpanjang,spasi[i]);
            tampilan(jumlah);
            if(m[i].baru[0] < m[i].baru[1]){
                printf("%d %d\n",m[i].baru[0],m[i].baru[1]);
            }else{
                printf("%d %d\n",m[i].baru[1],m[i].baru[0]);
            }
        }else{
            tampilan(spasiterpanjang);
            if(m[i].baru[0] < m[i].baru[1]){
                printf("%d %d\n",m[i].baru[0],m[i].baru[1]);
            }else{
                printf("%d %d\n",m[i].baru[1],m[i].baru[0]);
            }
        }
    }
    return 0;
}