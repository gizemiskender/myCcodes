/*
* =====================================================================================
*
* Filename: struc.c
*
* Description:
*
* Version: 1.0
* Created: 25-04-2013 17:41:08
* Compiler: gcc
*
* Author: Halit Alptekin, info@halitalptekin.com
*
* =====================================================================================
*/

#include <stdio.h>
#include <stdlib.h>

struct Kisi{
char *isim;
int yas;
int boy;
int kilo;
};

struct Kisi *kisiOlustur(char *isim, int yas, int boy, int kilo){
struct Kisi *yeniKisi = malloc(sizeof(struct Kisi));

if(yeniKisi != NULL){
yeniKisi->isim = isim;
yeniKisi->yas = yas;
yeniKisi->boy = boy;
yeniKisi->kilo = kilo;
}else{
fprintf(stderr, "yeni kisi olusturulamadi\n");
}

return yeniKisi;
}

void kisiSil(struct Kisi *kisiAl){
if(kisiAl != NULL){
//free(kisiAl->isim);
free(kisiAl);
}else{
fprintf(stderr, "kisi silinemedi\n");
}
}

void kisiBas(struct Kisi *kisiAl){
if(kisiAl != NULL){
fprintf(stdout, "isim: %s\n", kisiAl->isim);
fprintf(stdout, "yas: %d\n", kisiAl->yas);
fprintf(stdout, "boy: %d\n", kisiAl->boy);
fprintf(stdout, "kilo: %d\n", kisiAl->kilo);
}else{
fprintf(stderr, "kisi basilamadi\n");
}
}

int main(int argc, const char *argv[])
{
struct Kisi *halit = kisiOlustur("halit", 19, 190, 75);
struct Kisi *gizem = kisiOlustur("gizem", 20, 160, 45);

kisiBas(gizem);
kisiBas(halit);

fprintf(stdout, "kisiler siliniyor\n");
kisiSil(gizem);
kisiSil(halit);

return 0;
}
