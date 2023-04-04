#include "main.h"
#include <stdio.h>

/**
 * *_strchr - char pos
 * @s: string
 * @c: char to find
 *
 * Return: pos
 */
char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
