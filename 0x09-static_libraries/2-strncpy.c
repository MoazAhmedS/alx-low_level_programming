#include "main.h"

/**
 * _strncpy - string copy
 * @dest: dest string
 * @src: source
 * @n: number of copy
 *
 * Return: the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
