#include <stdio.h>
int main()
{

    int i=0;
    int kac;
    printf("Kac sayi kiyaslancak: ");
    scanf("%d",&kac);
    while(i<kac)
    {
        printf("%d.inci sayiyi giriniz\n",i+1);
        i+=1;
    }
    return 0;
}
