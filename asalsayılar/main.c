#include <stdio.h>
#include <stdlib.h>

 int asal(int);

 int main(){
     int m;
     for(m=3; m<100; m++){
        if(asal(m))
        printf("%2d sayisi asal\n",m);
        else
        printf("%2d sayisi asal degil\n",m);
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

