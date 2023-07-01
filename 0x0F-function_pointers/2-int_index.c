#include "function_pointers.h"

/**
 * int_index - index of value
 * @array: array
 * @size: size
 * @cmp: comparing function
 *
 * Return: result
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
