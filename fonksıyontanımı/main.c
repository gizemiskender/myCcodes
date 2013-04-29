#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sayi_al(void);
void ekrana_bas(void);
float topla(float,float);

void fonksiyon1(void){
    printf("su anda fonksiyon 1deyim\n");
}
void fonksiyon2(void){
    printf("su anda fonksiyon 2deyim\n");
    int a = 5;
    int b = 6;
    printf("fonksiyon 2 nin icinde a+b=%d\n",a+b);
}
void fonksiyon3(void){
    printf("su anda fonksiyon 3deyim\n");
    int a = 15;
    int b = 20;
    printf("fonksiyon 3 un icinde a+b=%d\n",a+b);
}

int main ()
{
    printf("fonksiyon 1 cagiriliyor\n");
    fonksiyon1();
    printf("fonksiyon 2 cagiriliyor\n");
    fonksiyon2();
    printf("fonksiyon 3 cagiriliyor\n");
    fonksiyon3();
    printf("topla fonksiyonu cagriliyor 156 ile 187 toplaniyor\n");
    float toplam = topla(156.0,187.0);
    printf("toplam degiskeni %f\n",toplam);
    return 0;
}

void ekrana_bas (void){
    printf("iki sayi giriniz: ");
}
float topla(float sayi1, float sayi2){
    return sayi1 + sayi2;
}
void sayi_al(void){
    int sayi1,sayi2;
    ekrana_bas();
    scanf("%d%d",&sayi1,&sayi2);
    printf("iki sayinin toplami %f",topla(sayi1,sayi2));
}
