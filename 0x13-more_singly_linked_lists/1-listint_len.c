#include "lists.h"

/**
 * listint_len- finds number of elements in a linked listint_t list.
 * @head: pointer to the head of linked listint_t list
 *
 * Return: returns number of elements in list
 */
size_t listint_len(const listint_t *head)
{
	size_t count = 0;
	const listint_t *ptr = NULL;

	if (head == NULL)
		return (0);

	ptr = head;

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
