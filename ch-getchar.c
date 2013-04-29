/*
* =====================================================================================
*
* Filename: escape.c
*
* Description: Escape karakterler
*
* Version: 1.0
* Created: 14-03-2013 21:34:49
* Compiler: gcc
*
* Author: Halit Alptekin, info@halitalptekin.com
*
* =====================================================================================
*/
#include <stdio.h>
void escape(char s[],char t[]);
int main(int argc, const char *argv[])
{
char bir[30] = "merhabalar\tbe\naparsin";
char iki[30];
printf("%s",bir);
escape(iki,bir);
printf("\n%s",iki);

return 0;
}
void escape(char s[], char t[]){
int i,j;
for(i=j=0;t[i] != '\0';i++){
switch(t[i]){
case '\n':
s[j++] = '\\';
s[j++] = 'n';
case '\t':
s[j++] = '\\';
s[j++] = 't';
default:
s[j++] = t[i];
}
s[j] = '\0';
}
}
