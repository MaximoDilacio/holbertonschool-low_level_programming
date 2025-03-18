#include "main.h"
#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Function that print name
 * @name: char
 * @f: function
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
