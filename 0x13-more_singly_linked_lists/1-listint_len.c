#include "lists.h"

/**
 * listint_len - get the size of the list
 * @h: the list
 *
 * Return: the size
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
