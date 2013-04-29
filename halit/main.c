/*
* =====================================================================================
*
* Filename: genislet.c
*
* Description: Genisletme fonksiyonu
*
* Version: 1.0
* Created: 16-03-2013 12:34:41
* Compiler: gcc
*
* Author: Halit Alptekin, info@halitalptekin.com
*
* =====================================================================================
*/
#include <stdio.h>
void genislet(char[],char[]);
int main(int argc, const char *argv[])
{
char szc1[10] = "a-z0-9";
char szc2[50];
genislet(szc1,szc2);

printf("%s genisletilmis hali\n%s",szc1,szc2);
return 0;
}
void genislet(char szc1[], char szc2[])
{
char c;
int i=0;
int j=0;
while((c = szc1[i++]) != '\0'){
if(szc1[i] == '-' && szc1[i+1] > szc1[i]){
i++;
while(c < szc1[i])
szc2[j++] = c++;
}else{
szc2[j++] = c;
}
szc2[j] = '\0';
}
}
