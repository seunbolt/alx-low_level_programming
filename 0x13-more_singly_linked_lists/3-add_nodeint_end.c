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
	listint_t *current = malloc(sizeof(listint_t));

	if (current == NULL)
		return (NULL);

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	current = *head;

	while (current->next != NULL)
		current = current->next;

	current->next = temp;

	return (temp);
}
