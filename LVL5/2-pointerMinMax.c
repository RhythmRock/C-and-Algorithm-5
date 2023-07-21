#include <stdio.h>

// Pointer kullanarak üç sayýdan en büyüðünü bulan program

int main()
{
    int numbers[3] = {15, 19, 13};
    int *maxptr = &numbers[0];
	int i;
	
    for (i = 1; i < 3; i++)
    {
        if (numbers[i] > *maxptr)
        {
            max_ptr = &numbers[i];
        }
    }

    printf("Max Number: %d", *maxptr);

    return 0;
}

