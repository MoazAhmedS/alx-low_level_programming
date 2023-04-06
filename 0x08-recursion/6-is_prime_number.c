#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - prime check
 * @n: the number
 *
 * Return: result true or false 1 if true 0 if false
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - check prime
 * @n: the number
 * @i: to loop
 *
 * Return: result true or false 1 if true 0 if false
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
