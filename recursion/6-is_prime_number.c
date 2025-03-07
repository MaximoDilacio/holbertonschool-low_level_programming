#include "main.h"
/**
 * is_prime_number - function that return if the input is a prime number
 * @n: int
 * Return: return 1 if the input integer is a prime numeber, otherwise return 0
*/
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);


	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		
	i++;
	}

	return (1);
}
