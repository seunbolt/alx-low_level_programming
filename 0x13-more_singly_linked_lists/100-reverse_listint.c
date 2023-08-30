#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to head of a list
 *
 * Return: returns pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = NULL;
	next = NULL;

	if ((head == NULL) || (*head == NULL))
		return (NULL);

	while ((*head) != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);

}
