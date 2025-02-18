#include "main.h"
/**
 * print_alphabet_x10 - print alphabet
*/
void print_alphabet_x10(void)
{
	char letra;
	char i;

	for (i = 0; i < 10; i++)
	{
		for (letra = 'a'; letra <= 'z'; letra++)
		{
			_putchar(letra);
		}
		_putchar('\n');
		}
	}
