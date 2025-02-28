#include "main.h"
/**
 * _atoi - function that convert string to an integer
 * @s: string
 * Return: number
*/
int _atoi(char *s)
{
	int i = 0, si = 1, e = 0;
	unsigned int resultado = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			si *= -1;
		}

		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		e = 1;
		resultado = resultado * 10 + (s[i] - '0');
		i++;
	}

	return (e ? (resultado * si) : 0);
}
