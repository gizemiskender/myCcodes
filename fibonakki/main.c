#include <stdio.h>
#include <stdlib.h>
int fibonakki(int a);
int main()

{
    int m;
    printf("kacinci fibonakki?\n");
    scanf("%d",&m);
    printf("%d",fibonakki(m));
    return 0;
}
int fibonakki(int m) {
int toplam=0;
int ilk=0;
int son=1;
int i;
if(m<2)
 return 1;

else {
    for(i=1; i<=m; i++) {
    toplam=ilk+son;
    ilk=son;
    son=toplam;
    }
}
return toplam;
}
