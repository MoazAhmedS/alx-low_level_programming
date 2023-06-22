#include "main.h"

/**
 * _isalpha - checks character
 * @c: the character
 * Return: 1 if c is a letter
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
