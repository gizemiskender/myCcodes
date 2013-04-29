#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
double sayi = 600851475143;
double kontrol = sayi;
double sonuc = 0;
int i;
for(i=2;i<sqrt(kontrol);i++)
if(fmod(sayi,i) == 0){
if(i > sonuc)
sonuc = i;
sayi /= i;
}
printf("%.f",sonuc);

return 0;
}
