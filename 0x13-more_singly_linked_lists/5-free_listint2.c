#include "lists.h"

/**
 * free_listint2 - frees a listint_t list. and sets head to null
 * @head: pointer to head of list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *ptr;

	if (head == NULL)
		return;

	ptr = *head;

	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
	free(temp);
	*head = NULL;

}
