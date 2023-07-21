#include <stdio.h>

void temp(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	
	return 0;
}

int main()
{
	int num1 = 1, num2 = 2;
	printf("Baslangic\nNum1: %d\nNum2: %d", num1, num2);
	
	temp(&num1, &num2);
	printf("\n\nBitis\nNum1: %d\nNum2: %d", num1, num2);

	return 0;
}
