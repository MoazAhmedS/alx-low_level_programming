#include "main.h"

/**
 * set_bit - set statu of bit to 1 at pos
 * @n: the value
 * @index: the pos
 * Return: result
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);

	for (p = 1; index > 0; index--, p *= 2)
		;
	*n += p;

	return (1);
}

