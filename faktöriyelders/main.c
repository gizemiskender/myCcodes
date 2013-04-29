#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int fak;
    fak=1;
    for(i=1;i<11;i++){
        fak=fak*i;
        printf("%d\t%d\n",i,fak);
    }
    return 0;
}
