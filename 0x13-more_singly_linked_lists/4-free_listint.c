#include "lists.h"

/**
 *  * free_listint - Frees a listint_t list.
 *   * @head: A pointer to the head of the list.
 *    */

void free_listint(listint_t *head)
{
	listint_t *temp;
	listint_t *ptr;

	ptr = head;

	while (ptr->next != NULL)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
	free(temp);

}
