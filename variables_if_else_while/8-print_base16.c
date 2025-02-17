#include <stdio.h>
/**
 * main - Funcion Principal
 * Return: Retorna 0 si se ejecuta correctamente
*/
int main(void)
{
	char letra;

	for (letra = '0'; letra <= '9'; letra++)
	{
		putchar(letra);
	}

	for (letra = 'a'; letra <= 'f'; letra++)
	{
		putchar(letra);
	}

	putchar('\n');

	return (0);
}
