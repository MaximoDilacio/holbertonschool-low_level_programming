#include "main.h"
/**
 * print_square - function print /
 * @size: parameter is number
*/
void print_square(int size)
{
	int f;
	int c;

	if (size > 0)
	{
		while (c <= size)
		{
			for (f = 0; f < size; f++)
			{
				_putchar('#');
			}
			_putchar('\n');
			c++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
