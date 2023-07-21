#include <stdio.h>

void tersCevir(int dizi[], int baslangic, int bitis)
{
	int temp;
	
	if(baslangic >= bitis)
	{
		return 0;
	}
	
	temp = dizi[baslangic];
	dizi[baslangic] = dizi[bitis];
	dizi[bitis] = temp;
	
	tersCevir(dizi, baslangic + 1, bitis - 1);
}

int main()
{
	int dizi[] = {1,2,3,4,5};
	int boyut = sizeof(dizi) / sizeof(dizi[0]);
	int i;
	
	printf("Dizinin ilk hali: ");
	for(i = 0; i < boyut; i++)
	{
		printf("%d ", dizi[i]);
	}
	printf("\n\n");
	
	tersCevir(dizi, 0, boyut - 1);
	
	printf("Dizinin son hali: ");
	for(i = 0; i < boyut; i++)
	{
		printf("%d ", dizi[i]);
	}
	printf("\n\n");	
	
	return 0;
}
