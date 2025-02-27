#include "main.h"
#include <stdio.h>
/**
 * _puts - function that print string
 * @str: is array
*/
void _puts(char *str)
{
	int n = 0;

	while (*(str + n) != 0)
	{
		_putchar(*(str + n));

		n++;
	}
	_putchar('\n');
}
