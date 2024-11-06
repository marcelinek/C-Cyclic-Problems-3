#include <stdio.h>

int main(){

    int n, i, j, sonuc = 1;
    printf("Lutfen Sayiyi Giriniz: ");
    scanf("%d", &n);

    printf("sonuc: ");
    for (i = 2; i <= n; i++){
        
        for (j = 1; j <= i; j++){

            sonuc *= j;
        }
        printf("%d", sonuc);
        sonuc = 1;
    }

return(0);
}