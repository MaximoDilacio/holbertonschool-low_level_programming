#include "main.h"
#include <unistd.h>
/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: string
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	write(1, s, 1);
}
