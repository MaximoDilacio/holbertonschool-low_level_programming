#include <stdio.h>
/**
 * main - Funcion Principal
 * Return: Retorna 0 si se ejecuta correctamente
*/
int main(void)
{
	char letraI;
	char letraM;

	for (letraI = 'a'; letraI <= 'z'; letraI++)
	{
		putchar(letraI);
	}

	for(letraM = 'A'; letraM <= 'Z'; letraM++)
	{
		putchar(letraM);
	}
	
	return (0);
}
