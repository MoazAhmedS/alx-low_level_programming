#include "main.h"
#include <stdio.h>
/**
 * get_bit - get bit statu at pos
 * @n: the value
 * @index: the pos
 * Return: result
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
