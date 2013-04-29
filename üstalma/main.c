#include <stdio.h>
#include <stdlib.h>
int fonk(int a);
int main()
{
    int a;
        printf("%d",fonk(a));
    return 0;
}
int fonk(int toplam) {
    int sayi;
    for(sayi=0; sayi<1000; sayi++) {
    if(sayi%3 == 0 || sayi%5 == 0)

    toplam =toplam+sayi;
    }
 return toplam;
}
