#include <stdio.h>
#include <stdlib.h>
int fonk(int, int);
int main()
{
    int i;
    int sayi1;
    int sayi2;

    for(i = 0; i < 5; i++){
        scanf("%d %d",&sayi1, &sayi2);

        if(fonk(sayi1, sayi2))
            printf("%d %d nin katidir\n",sayi2, sayi1);
        else
            printf("%d %d nin kati degildir.\n",sayi2, sayi1);
    }
    return 0;
}
int fonk(int sayi1, int sayi2){
    if(sayi2 % sayi1==0)
        return 1;
    else
        return 0;
}
