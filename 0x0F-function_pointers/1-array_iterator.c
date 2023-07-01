#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function to execute the values
 * @array: array
 * @size: size
 * @action: function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
