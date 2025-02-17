#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int print_alphabet()
{
	char letra;

	for(letra = 'a'; letra <= 'z'; letra++)
	{
		putchar(letra);
	}

	putchar('\n');
}

int main(void)
{
    print_alphabet();
    return (0);
}
