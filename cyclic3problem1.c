#include <stdio.h>

int main(){

    int sayi, toplam = 0;

    printf("bir sayi giriniz: ");
    scanf("%d", &sayi);

    for (int i = 1; i < sayi; i++){
        
        if(sayi % i == 0)
            toplam +=i;
    }

    if(sayi == toplam)
        printf("%d mukemmel sayidir.", sayi);

    else
        printf("%d mukemmel sayi degildir.", sayi);

return(0);
}