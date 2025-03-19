#include "3-calc.h"

/**
 * op_add - Suma dos enteros
 * @a: Primer número
 * @b: Segundo número
 * Return: Resultado de la suma
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Resta dos enteros
 * @a: Primer número
 * @b: Segundo número
 * Return: Resultado de la resta
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplica dos enteros
 * @a: Primer número
 * @b: Segundo número
 * Return: Resultado de la multiplicación
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide dos enteros
 * @a: Primer número
 * @b: Segundo número
 * Return: Resultado de la división, o error si b es 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Calcula el módulo entre dos enteros
 * @a: Primer número
 * @b: Segundo número
 * Return: Resultado del módulo, o error si b es 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

