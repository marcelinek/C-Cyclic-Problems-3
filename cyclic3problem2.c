#include <stdio.h>

int main(){

    int sayi;

    printf("bir sayi giriniz: ");
    scanf("%d", &sayi);

    for(int i = 1; i <= sayi; i++){

            if (i* (i + 1) == sayi){
                printf("girilen sayi Pronic sayidir.");
                return(1);
            }
        }
    
    printf("girilen sayi Pronic degildir.");

    return(0);
}