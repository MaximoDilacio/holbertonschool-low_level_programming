#include "main.h"
/**
 * factorial - function that return the factorial of a given number
 * @n: int
 * Return: -1, 1 or n * factorial(n - 1)
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
