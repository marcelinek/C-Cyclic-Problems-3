#include <stdio.h>

int main(){

    int sayi, bas1, bas2;

    printf("Lutfen Sayiyi Giriniz: ");
    scanf("%d", &sayi);

    int orjsayi = sayi;
    int kontrol = 1;

    while (sayi > 9)
    {
        bas1 = sayi % 10;
        sayi /= 10;
        bas2 = sayi % 10;

        if (bas1 - bas2 > 1 || bas2 - bas1 > 1){
            kontrol = 0;
            break;
        }
    }
    
    if (kontrol)
        printf("%d Jumbled sayisidir", sayi);
    else
        printf("%d Jumbled sayi degildir", sayi);
    
    return(0);
}