#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string
 * @s: string to search
 * @accept: stringcontaining the bytes
 *
 * Return: pointer to the byte in s that matches
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
