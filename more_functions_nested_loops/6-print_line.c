#include "main.h"
/**
 * print_line - function print _
 * @n: parameter is number
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
		
			i++;
		}
	}

	_putchar('\n');
}
