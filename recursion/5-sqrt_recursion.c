#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 * Return: The natural square root, or -1 if no natural square root exists
 *
*/
int _sqrt_recursion(int n)
{
	static int i = 1;

	if (n < 0)
		return (-1);

	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	i++;
	return _sqrt_recursion(n);
}
