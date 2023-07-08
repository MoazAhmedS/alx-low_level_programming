#include <unistd.h>

/**
 * _putchar - print c
 * @c: the character
 *
 * Return: result
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
