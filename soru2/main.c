#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double fibonakki(int);
int main()
{
    int i;
    double toplam=1;


    for(i=1;;i++){
        if(fibonakki(i)<4000000) {
    if(fmod(fibonakki(i),2)==1)

    toplam=toplam+fibonakki(i);

        }
        else
        break;
}
    printf("%f",toplam);

    return 0;
}

double fibonakki(int m) {
double toplam=0;
double ilk=0;
double son=1;
int i;
if(m<2)
 return 1;

else {
    for(i=1; i<=m; i++){

    toplam=ilk+son;
    ilk=son;
    son=toplam;
    }


}

return toplam;
}




