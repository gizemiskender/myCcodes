#include <stdio.h>

int main(){

    int m;
    int i;
    int sayac;
    sayac=0;
    for(m=1;;m++){
    for(i=1;i<=20;i++){
    if(m%i==0)
    sayac++;
    if(sayac==19)
    printf("%d",m);
    else
    break;
    }

    }


return 0;
}
