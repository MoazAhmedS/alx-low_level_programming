#include "main.h"

/**
 * _strcmp - compares
 * @s1: first string
 * @s2: sec string
 *
 * Return: positive if s1 is greater
 * zero if equal and nigative if less
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
