#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - print numbers !2 && !4
*/
void print_most_numbers(void)
{
	char n;

	for (n = 48; n <= 57; n++)
	{
		if (n != 50 && n != 52)
		{
			_putchar(n);
		}
	}
	fwrite("\n", sizeof(char), 1, stdout);
}
