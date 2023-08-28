#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @head: pointer to the head of list.
 *
 * Return: returns number of nodes
 */
size_t print_listint(const listint_t *head)
{
	size_t count = 0;
	const listint_t *ptr = NULL;

	if (head == NULL)
		return (0);
	ptr = head;

	while (ptr)
	{
		count++;

		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}

	return (count);
}

