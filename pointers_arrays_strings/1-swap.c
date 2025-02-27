#include "main.h"
/**
 * swap_int - is functoin that print numbers
 * @a: Is a parameter
 * @b: Is a parameter
*/
void swap_int(int *a, int *b)
{
	int p = *a;

	*a = *b;
	*b = p;
}
