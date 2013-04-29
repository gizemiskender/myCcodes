#include <stdio.h>
#include <stdlib.h>

int main()
{
    int toplam;
    int sayi;
    for(sayi=0; sayi<1000; sayi++) {
    if(sayi%3 == 0 || sayi%5 == 0)

    toplam =toplam+sayi;
    }
 printf("%d",toplam);
    return 0;
}
