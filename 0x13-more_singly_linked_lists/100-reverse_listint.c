#include "lists.h"

/**
 * reverse_listint - reverse the linked list
 * @head: point to the first node or the list
 *
 * Return: the new list or point to the new node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
