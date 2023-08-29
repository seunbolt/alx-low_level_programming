#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the head of a list
 * @n: integer value
 *
 * Return: returns pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	listint_t *ptr;

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	ptr = *head;

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = temp;

	return (temp);
}
