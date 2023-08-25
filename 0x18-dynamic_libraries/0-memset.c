#include "main.h"

/**
 * *_memset - fills memory
 * @s: memory area
 * @b: char
 * @n: number of times
 *
 * Return: the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
