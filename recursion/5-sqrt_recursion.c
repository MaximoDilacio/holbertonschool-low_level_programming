#include "main.h"
/**
 * _sqrt_helper - helper function
 * @n: The number to find the square root of
 * @i: the current number to check
 * Return: The natural square root, or -1 if no natural square root exists
 *
*/
int _sqrt_helper(int n, int i)
{

	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - return the natural square root
 * @n: the number
 * Return: the natural square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 1));
}
