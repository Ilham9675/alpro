#include <stdio.h>
#include <stdlib.h>

int carifpb(int a, int b){
    if(b == 0){
        return a;
    }else{
        return carifpb(b,a%b);
    }
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",carifpb(a,b));
    return 0;
}