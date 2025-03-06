#include "main.h"
#include <unistd.h>
/**
 * _puts_recursion - function that prints a string
 * @s: string
 * Return: return 0
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		write(1, "\n", 1);
		return;
	}

	write(1, s, 1);
	_puts_recursion(s + 1);


}
