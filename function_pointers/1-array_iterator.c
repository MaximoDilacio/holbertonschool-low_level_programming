#include "function_pointers.h"

/**
 * array_iterator - function that array iterator
 * @size: size
 * @array: pointer
 * @action: function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);

	}
}
