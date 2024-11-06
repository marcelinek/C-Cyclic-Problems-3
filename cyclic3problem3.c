#include <stdio.h>

int main(){

    int sayi, toplam = 0, basamak = 0;

    printf("bir sayi giriniz: ");
    scanf("%d", &sayi);

    int gecici = sayi;

    while (gecici != 0){
        basamak = gecici % 10;
        toplam += basamak;
        gecici = gecici / 10;
    }

    if (sayi % toplam == 0)
        printf("%d Harshad sayidir", sayi);
    else
        printf("%d Harshad sayi degildir", sayi);

    return(0);
}