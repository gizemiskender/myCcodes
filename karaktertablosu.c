#include <stdio.h>
#include <conio.h>
main()
{
    int i ;
    for(i=32 ; i<256; i++)
    {
        printf("%3d=%c\t",i,i);
    }
    getchar();
}
