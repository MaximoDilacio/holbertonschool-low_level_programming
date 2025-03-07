#include "main.h"
/**
 * is_prime_recursive - function
 * @i: int
 * @n: int
 * Return: return is_prime_recursive
*/
int is_prime_recursive(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (is_prime_recursive(n, i + 1));
}
/**
 * is_prime_number - function that return if the input is a prime number
 * @n: int
 * Return: return 1 if the input integer is a prime numeber, otherwise return 0
*/
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}

	return (is_prime_recursive(n, 2));
}
