#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    int i;
    int toplam=0;
    for(i=1;i<101;i++){
    toplam+=i*i;

    }
    n=(100*101/2)*(100*101/2);
    m=n-toplam;
    printf("%d",m);
    return 0;
}
