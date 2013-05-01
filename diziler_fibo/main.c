#include <stdio.h>
#include <stdlib.h>
#define BOYUT 20

int fibonakki(int );
void fiboDizi(int[],int);
int main()
{
   //int i;
    int dizi[BOYUT];
    fiboDizi(dizi,BOYUT);

    //for(i=0; i<BOYUT; i++)

        printf("%d\n", dizi[5]);

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

void fiboDizi(int dizi[],int boyut){

    int i;
        for(i=0; i<boyut; i++){
            dizi[i]=fibonakki(i+1);
    }

}
