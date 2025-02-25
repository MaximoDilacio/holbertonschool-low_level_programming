#include "main.h"
/**
 * print_diagonal - function print
 * @n: parameter is number
*/
void print_diagonal(int n)
{
	int i = 0;
	int e;

	if (n > 0)
	{
		while (i < n)
		{
			for (e = 0; e < i; e++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			i++;
			_putchar('\n');
		}

		if (i > n)
		{
			_putchar('\n');	
		}
	
	}
}
