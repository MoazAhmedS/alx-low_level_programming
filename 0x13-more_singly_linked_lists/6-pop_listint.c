#include "lists.h"

/**
 * pop_listint - delete the front
 * @head: point to the first item
 *
 * Return: result
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
