#include <stdio.h>

int main(){
	
	int n, i, j, sonuc = 0, sayac = 0;

	printf("Lutfen Sayiyi Giriniz: ");
	scanf("%d", &n);
	
	printf("Sonuc: ");
	
	for(i = 2; sayac != n; i++)
	{
		for(j = 1; j <= i; j++)
		{
			if(i % j == 0)
			{
				sonuc++;
			}
		}
		if(sonuc == 2)
		{
			printf("%d ", i);
			sayac++;
		}
		sonuc = 0;
	}

	return 0;
}