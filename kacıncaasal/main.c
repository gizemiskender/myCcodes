/*
* =====================================================================================
*
* Filename: 7.c
*
* Description:
*
* Version: 1.0
* Created: 19-04-2013 00:00:06
* Compiler: gcc
*
* Author: Halit Alptekin, info@halitalptekin.com
*
* =====================================================================================
*/
#include <stdio.h>
#include <math.h>

int asalmi(long);
long asal(int);

int main(int argc, const char *argv[])
{
printf("%ld",asal(10001));

return 0;
}

int asalmi(long n){
int i;

if(n == 2)
return 1;
else
for(i=2;i<sqrt(n)+1;i++)
if(n%i == 0)
return 0;
return 1;

}

long asal(int sayi){
int i;
int sayac = 0;
long sonuc = 0;
for(i=2;sonuc == 0;i++){
if(asalmi(i))
sayac++;
if(sayac == sayi){
sonuc = i;
}
}

return sonuc;
}
