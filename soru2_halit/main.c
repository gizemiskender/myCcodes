#include <stdio.h>

unsigned long fibonacci(int);

int main(int argc, const char *argv[])
{
int i;
unsigned long sum = 0;
for(i=1;;i++){
if(fibonacci(i) > 4000000){
printf("%ld",sum);
break;
}else{
if(fibonacci(i-1) % 2)
sum += fibonacci(i-1);
}
}

return 0;
}

unsigned long fibonacci(int sira){
if(sira < 2)
return 1;
else
return fibonacci(sira - 2) + fibonacci(sira - 1);
}
