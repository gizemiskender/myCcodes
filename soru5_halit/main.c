#include <stdio.h>

int main(int argc, const char *argv[])
{
int i = 1;
for(;;i++){
int j;
int flag = 0;
for(j=2;j<21;j++)
if(i%j == 0)
flag++;
if(flag == 19){
printf("%d",i);
break;
}

}

return 0;
}
