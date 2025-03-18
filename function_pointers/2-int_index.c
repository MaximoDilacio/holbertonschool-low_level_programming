#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: pointer
 * @size: int
 * @cmp: function
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; array[i] < size; i++)
			return (cmp(array[i]));

	return (-1);
}
