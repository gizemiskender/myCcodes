#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int i,m;
    m=0;
    scanf("%d",&sayi);

    for(i=2; i<sayi; i++)
    {
     if(sayi%i==0) 
	m++;
     }

    if(m>0)
        printf("asal degildir.");
    else
        printf("asaldir.");
    return 0;

}
