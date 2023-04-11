#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments
 * @argc: size of arguments
 * @argv: array that contian the arguments
 *
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
