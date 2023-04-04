#include <unistd.h>
/*
 * print character
 * 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
