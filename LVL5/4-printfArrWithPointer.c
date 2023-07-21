#include <stdio.h>

//Pointer ile Dizi Yazdirmak

void yazdir(int *p)
{
	while(*p != '\0')
	{
		printf("%d\n",*p);
		p++;	
	}
	
	return 0;
}

int main()
{
	int dizi[] = {1,2,3,4,5};
	yazdir(&dizi[0]);
	
	return 0;
}
