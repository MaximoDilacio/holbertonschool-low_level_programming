#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that print the sum of the two diagonals of square
 * @a: int
 * @size: int
 *
*/
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum1, sum2);
}
