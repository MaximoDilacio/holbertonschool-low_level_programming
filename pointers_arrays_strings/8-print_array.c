#include "main.h"
#include <stdio.h>
/**
 * print_array - function that print array
 * @a: array
 * @n: length of a
*/
void print_array(int *a, int n)
{
	int contador;

	if (n <= 0)
	{
		printf("\n");
	}

	for (contador = 0; contador < n; contador++)
	{
		if (contador + 1 != n)
		{
			printf("%d ", a[contador]);
		} else
		{
			printf("%d\n", a[contador]);
		}
	}
}
