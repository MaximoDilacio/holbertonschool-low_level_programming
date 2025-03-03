#include "main.h"
/**
 * string_toupper - function that changes all lowercase letter to uppercase
 * @s: string
 * Return: return s
*/
char *string_toupper(char *s)
{
	int n = 0;

	while (s[n] != 0)
	{
		if (s[n] <= 'z' && s[n] >= 'a')
		{
			s[n] -= 32;
		}

		n++;
	}

	return (s);
}
