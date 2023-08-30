#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index (index) of a
 * listint_t linked list.
 * @head: pointer to a head of listint_t list
 * @index: index of node to be deleted
 *
 * Return:1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *ptr;
	unsigned int i;


	ptr = *head;

	if ((head == NULL) || (*head == NULL))
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; ptr != NULL && i < index - 1; i++)
	{
		if (ptr->next == NULL)
			return (-1);

		ptr = ptr->next;
	}

	temp = ptr->next;
	ptr->next = temp->next;
	free(temp);

	return (1);



}
