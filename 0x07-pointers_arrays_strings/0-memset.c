#include "main.h"

/**
 * memset - prints buffer in hexa
 *
 * Return: array
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
