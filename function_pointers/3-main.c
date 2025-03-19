#include "3-calc.h"

/**
 * main - Punto de entrada del programa
 * @argc: Número de argumentos
 * @argv: Array de argumentos
 * Return: 0 en caso de éxito, otro valor en caso de error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operation = get_op_func(argv[2]);
	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
