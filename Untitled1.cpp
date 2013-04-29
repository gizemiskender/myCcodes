#include <stdio.h>
 main()
{
int m,i,j,g;
char a='*';
char b=' ';
printf("boyutu gir:");
scanf("%d",&m);

for(i=0;i<=m;i++)
{
for(j=0;j<=m+1-i;j++)
{
printf("%c",b);
}
for(g=0;g<=2*i-2;g++)
{
printf("%c",a);
}
printf("\n");
}
for(i=0;i<=m;i++)
{
for(j=0;j<=i;j++)
{
printf("%c",b);
}
for(g=i*2;g<=m*2;g++)
{
printf("%c",a);
}
printf("\n");
}
}

