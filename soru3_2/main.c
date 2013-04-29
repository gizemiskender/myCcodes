#include <stdio.h>
#include <stdlib.h>
int asal(int a);
int main()
{
    int x;
    int i;
    for(i=2; i<=600851475143; i++){
    if(600851475143%i==0) {

    x=asal(i);

    if(x==1)

    printf("%d\n",i);
    }

    }
    return 0;
}




int asal(int sayi) {
    int i,m;
    m=0;

    for(i=2; i<sayi; i++)
    {
     if(sayi%i==0) m++;
     }

    if(m>0)
        return 0;
    else
        return 1;
}
