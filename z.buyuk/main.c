#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    char harf[]="HAliTGizEm";
    int fark;
    int i;

    for(i=0; harf[i]!='\0';i++)
    printf("%c",harf[i]);
    printf("\n");

    for(i=0; harf[i]!='\0'; i++){
    fark= 'a'-'A';

    if(harf[i]>'Z')
        harf[i]-=fark;
    else
      harf[i]+=fark;

    printf("%c",harf[i]);
 }
    return 0;
}
