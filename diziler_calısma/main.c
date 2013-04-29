#include <stdio.h>
#include <stdlib.h>
#define BOYUT 10

int main()

{
    int n[BOYUT];
    int i;
    int toplam=0;
   // n[4]=5;
    for(i=0;i<=BOYUT-5;i++){
    n[i]=i*2;
    toplam+=n[i];

   // for(i=0;i<=9;i++){
   // printf("%7d%14d\n",i,toplam);

  // if(n[i]==n[4])
printf("%7d%14d\n",i,toplam);
   }
    return 0;
}
