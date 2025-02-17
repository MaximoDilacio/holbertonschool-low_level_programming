#include <stdio.h>
/**
 * main - Funcion Principal
 * Return: Retorna 0 si se ejecuta correctamente
*/
int main(void)
{
	char numero;

	for (numero = '0'; numero <= '9'; numero++)
	{
		putchar(numero);
		if (numero != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
