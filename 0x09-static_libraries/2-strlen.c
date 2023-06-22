#include "main.h"

/**
 * _strlen - size of a string
 * @s: string
 *
 * Return: the size
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
