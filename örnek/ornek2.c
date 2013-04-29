/* Ýkinci Yol - While Döngüsü */
#include <stdio.h>
#include <conio.h>
main() {
int i,x,max=0;
while(x>0) {
   printf("Pozitif bir sayi giriniz -->");
   scanf("%d",&x);
   if (x>=max) max=x;
   if(x<0) {
      printf("Girdiginiz Sayi Sifirdan Kucuk");
      break; }   //Girilen sayý sýfýrdan küçükse döngüden çýkýlýyor.
   printf("Girilen sayilarin en buyugu %d \n\n",max); }
getch();
}
