#include "main.h"
/**
 * print_line - function print _
 * @n: parameter is number
*/
void print_line(int n)
{
	char g;

	if (n > 0)
	{
		for (g = 0; g < n; n++)
		{
		_putchar('_');
		}
	}

	_putchar('\n');
}
