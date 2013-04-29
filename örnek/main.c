
#include <stdio.h>
#include <conio.h>
main()
{
   int i,x,max=0;
   for(i=0;i<10;i++) {    printf("Pozitif bir sayi giriniz -->");
   scanf("%d",&x);   //   Klavyeden 10 adet sayý alýndý.
   if (x>=max) { max=x; }   // Her sayý giriþinden sonra kontrol yapýlýyor.
   if(x<0) {
      printf("Girdiginiz Sayi Sifirdan Kucuk");
      break; }   //Girilen sayý sýfýrdan küçükse döngüden çýkýlýyor.
   printf("Girilen sayilarin en buyugu %d \n\n",max);
   //Kontrolün sonucuna göre en büyük sayý gösteriliyor ve tekrar baþa dön
