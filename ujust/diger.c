#include<stdio.h>
int main(){
    int sayac=0;
    int sayi;
    int top=0;
    printf("kac sayi olacak ");
    scanf("%d",&sayi);
    while(sayac>sayi){
        int gelenSayi=0;
        scanf("%d",&gelenSayi);
        top=top+gelenSayi;

    }
    printf("sayilarin toplami %d",top);

}
