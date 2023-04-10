#include "main.h"

/**
 * *_memcpy - memory area
 * @dest: destination area
 * @src: source
 * @n: number of copy
 *
 * Return: result
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
