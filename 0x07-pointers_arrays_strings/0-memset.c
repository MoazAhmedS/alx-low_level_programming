#include "main.h"

/**
 * *_memset - prints buffer in hexa
 * @s: memory
 * @b: char to use
 * @n: lenght
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
