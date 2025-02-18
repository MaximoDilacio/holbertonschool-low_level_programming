#include "main.h"
/**
 * print_alphabet - print alphabet
 */
void print_alphabet(void)
{
	char letra;

	for (letra = 'a'; letra <= 'z'; letra++)
	{
		_putchar(letra);
	}

	_putchar('\n');
}
