#include <stdio.h>
#include "main.h"

/**
 * main - prints the name
 * @argc: size arguments
 * @argv: array of that contain the arguments
 *
 * Return: return 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
