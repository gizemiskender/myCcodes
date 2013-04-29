#include <stdio.h>
#include <stdlib.h>
#define BOYUT 10
void gizem(int dizi[],int );
int main()

{

    int dizi[BOYUT];
    int i;
    for(i=0;i<BOYUT; i++){
    dizi[i]=0;
    }

  gizem(dizi,BOYUT);
  for(i=0;i<BOYUT;i++){
  printf("%d\n",dizi[i]);
  }
    return 0;
}

void gizem (int dizi[], int boyut)
{
    int i;
    for(i=0; i<boyut; i++){
    dizi[i]=i*2;

    }

}
