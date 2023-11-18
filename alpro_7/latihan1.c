#include <stdio.h>
#include <string.h>

int main(){
    
    char str2[50];
    char str1[50];
    scanf("%s",&str1);
    //scanf("%s",&str2);
    /*
    int vokal = 0;
    for(int a = 0;a < strlen(str1);a++){
        if(str1[a] == 'a' || str1[a] == 'i'|| str1[a] == 'u'|| str1[a] == 'e'|| str1[a] == 'o'){
            vokal++;
        }

    }
    printf("jumlah huruf vokal nya adalah : %d\n",vokal);
    printf("jumlah huruf konsonan nya adalah : %d\n",strlen(str1)-vokal);
    */
    int jumlah = 0;
    for(int a = 0;a < strlen(str1);a++){
        if(str1[a] == 'k' && str1[a + 1] == 'a'){
            jumlah++;
        }
    }
    
    return 0;
}