#include "main.h"
/**
 * print_diagonal - function print
 * @n: parameter is number
*/
void print_diagonal(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('\\');
			i++;
		}
	}

	_putchar('\n');
}
