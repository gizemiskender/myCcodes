#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;
    int m;
    int sayac=1;
    for(m=1;;m++){
    for(i=2;i<=20;i++){
    if(m%i==0)
    sayac++;
    if(sayac==20){
    printf("%d",m);
    else
    break;
    }
    }

    }

    return 0;
}
