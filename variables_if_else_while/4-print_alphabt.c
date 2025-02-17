#include <stdio.h>
/**
 * main - Funcion Principal
 * Return: Retorna 0 si se ejecuta correctamente
*/
int main(void)
{
	char letra;

	for (letra = 'a'; letra <= 'z'; letra++)
	{
		if (letra != 'q' && letra != 'e')
		{
			putchar(letra);
		}
	}
	putchar('\n');
	return (0);
}
