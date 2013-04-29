#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int sayi;
    int enbuyuk = 0;
    scanf("%d",&sayi);
    while(sayi != -1){
        printf("girilen sayi: %d\n",sayi);
        if(sayi > enbuyuk)
            enbuyuk = sayi;
        printf("en buyuk sayi su an: %d\n",enbuyuk);
        scanf("%d",&sayi);
    }

    return 0;
}
