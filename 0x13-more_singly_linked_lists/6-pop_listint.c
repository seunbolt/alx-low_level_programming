#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head of listint_t
 *
 * Return: returns the head nodes data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp, *ptr;
	int n;

	ptr = *head;
	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (0);

	if (head == NULL)
		return (0);
	else if (ptr->next == NULL)
		return (0);
	else
	{
		temp = *head;
		ptr = ptr->next;
		n = temp->n;
	}
	*head = ptr;
	temp->next = NULL;
	free(temp);

	return (n);
}
