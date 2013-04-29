#include <stdio.h>
#include <stdlib.h>

long asal(long);
int main()
{
    long i;
    int sayac=0;

    for(i=1;;i++){
    if(asal(i))
    sayac++;
    if(sayac==10001)
    break;
    }
   printf("%ld",i);

    return 0;
}
long asal(long sayi) {
    long i;
    int m;
    m=0;
    if(sayi==2)
        return 1;
    for(i=2; i<sayi; i++)
    {
     if(sayi%i==0) m++;
     }

    if(m>0)
        return 0;
    else
        return 1;

}




