#include <stdio.h>
#include <stdlib.h>

int main()
{

int m;
int toplam=0;
int ilk=0;
int son=1;
int i;
scanf("%d",&m);
if(m==0 && m==1 )
 printf("%d",1);
 else

for(i=1; i<=m; i++) {
    toplam=ilk+son;
    ilk=son;
    son=toplam;

}
printf("%d",son);
    return 0;
}
