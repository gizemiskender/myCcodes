#include <stdio.h>
#include <stdlib.h>

int main()
{

    int kucuk;
    int i;

    int dizi[10]={2,34,65,78,5,4,3,56,899,56};
      kucuk=dizi[0];
    for(i=0;i<10;i++){

    if(dizi[i]<dizi[i+1])

    dizi[i]=kucuk;

    for(i=0;i<10;i++)

    printf("%d\n",kucuk);

    }

    return 0;
}
