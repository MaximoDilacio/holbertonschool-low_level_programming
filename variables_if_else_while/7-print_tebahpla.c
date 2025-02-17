#include <stdio.h>
/**
 * main - Funcion Principal
 * Return: Retorna 0 si se ejecuta correctamente
*/
int main(void)
{
	char letra;

	for (letra = 'z'; letra >= 'a'; letra--)
	{
		putchar(letra);
	}
	putchar('\n');
	return (0);
}
