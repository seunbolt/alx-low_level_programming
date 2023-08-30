#include "lists.h"

/**
 *get_nodeint_at_index - returns the node at index of a listint_t linked list.
 *@head: pointer to head of listint_t
 *@index: index of node starting at 0
 *Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;

	if ((head == NULL) || (head->next == NULL))
		return (NULL);

	ptr = head;

	while (index > 0)
	{
		ptr = ptr->next;
		index--;
	}

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
