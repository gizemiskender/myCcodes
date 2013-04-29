#include <stdio.h>
#define MAX 1000000

long collatz(long);

int main(int argc, const char *argv[])
{
long i;
long maxS = 0;
long maxI = 0;

for(i=1;i<MAX;i++)
if(collatz(i) > maxI){
maxI = collatz(i);
maxS = i;
}
printf("%ld -> %ld -> maxI: %ld -> maxS: %ld \n",i, collatz(i), maxI, maxS);

return 0;
}

long collatz(long sayi){
long sayac = 0;
while(sayi != 1){
if(sayi%2){
sayi = sayi*3 + 1;
sayac++;
}else{
sayi = sayi/2;
sayac++;
}
}

return sayac;
}
