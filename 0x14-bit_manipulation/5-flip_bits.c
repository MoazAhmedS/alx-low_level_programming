#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flib bits
 * @n: the first value
 * @m: the second value
 * Return: the result
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}
