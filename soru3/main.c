
#include <stdio.h>
#include <math.h>
int main ()
{
     double s;
     int i;

        printf (" Bir sayi giriniz: ");
        scanf  ("%lf", &s);
        printf ("\n");
        // Algoritma oluştururken lise matematik dersinde kullandığımız
        // yöntemden yararlandık. Kullanıcının girdiği sayı ilk önce ikiye
        // bölünmek isteniyor. Eğer bölünürse 2'nin bir asal çarpan olduğu
        // anlaşılıyor ve ekrana yazdırılıyor. i = i - 1 ataması ile, sayı
     // tekrar 2'ye bölünmeye çalışılıyor. 2'ye daha fazla bölünemiyorsa
        // bu sefer aynı işlemler 3 için tekrarlanıyor...
             for (i = 2; s != 1; i ++)
        {
          if (fmod(s,i) == 0)
          {
                  s /= i;
                       printf ("%5d", i);
                       i --;
               }
        }

        printf ("\n");
             return 0;
}

