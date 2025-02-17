#include <unistd.h>
/**
 * main - Funcion Principal
 * Return: Retorna 0 si se ejecuta correctamente
 */
int main(void)
{
	write(1, "_putchar", 8);
	write(1, "\n", 1);

	return (0);
}
