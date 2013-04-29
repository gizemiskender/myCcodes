#include<stdio.h>
int main(){
    int sayac=0;
    int sayi;
    int top=0;
    printf("kac sayi olacak ");
    scanf("%d",&sayi);
    while(sayi>sayac){
        int gelenSayi=0;
        scanf("%d",&gelenSayi);
        top=top+gelenSayi;
        sayac++;

    }
    printf("sayilarin toplami %d",top);

    return 0;

}
