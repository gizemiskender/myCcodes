#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=3;i<=100;i++)
        printf("%d sayisi 3'e tam %s\n",i,i%3==0?"bolunuyor":"bolunmuyor");
}
