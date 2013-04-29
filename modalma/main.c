#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i;
   int sonuc;
   for(i=3; i<100; i++);
   {
       sonuc=i%3;

       printf("%d sayisinin 3'e bolumu %d dir.\n",i,sonuc );
   }
   return 0;
   getchar();
}
