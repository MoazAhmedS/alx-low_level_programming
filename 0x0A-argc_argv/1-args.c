#include <stdio.h>
#include "main.h"

/**
 * main - print the size of arguments
 * @argc: size of arguments
 * @argv: array of that contain the arguments
 *
 * Return: return 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
