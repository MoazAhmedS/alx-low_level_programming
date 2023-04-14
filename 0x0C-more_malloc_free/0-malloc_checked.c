#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory
 * @b: size
 *
 * Return: result
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
